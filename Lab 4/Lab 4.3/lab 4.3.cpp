#include <iostream>   
#include <string>     
#include <string>
#include "Weapon.h"

using namespace std;

Weapon::Weapon(const string& n, int d, double w)
    : name(n), damage(d), weight(w) {
}

Weapon::Weapon() : Weapon("Меч", 60, 5.5) {
}

Weapon::~Weapon() {
    cout << "Удаление: " << name
        << " (урон= " << damage
        << ", Вес= " << weight << ")\n";
}

bool Weapon::isTooHeavy(double maxweight) {
    return maxweight < weight;
}

double Weapon::totalWeightWith(const Weapon& other)  {
    return weight + other.weight;
}

double Weapon::totalWeightWith(double otherWeight)  {
    return weight + otherWeight;
}


int main() {
    setlocale(LC_ALL, "Russian");
    {
        Weapon w1("Меч", 70, 6.2);
        cout << "w1: " << w1.name << ", " << w1.damage << " урона, " << w1.weight << " кг\n";
        Weapon w2;
        cout << "w2: " << w2.name << ", " << w2.damage << " урона, " << w2.weight << " кг\n";
        cout << "Можно поднять 6.7 кг? " << (w1.isTooHeavy(4.0) ? "Нет" : "да") << "\n";
        cout << "Сумма w1 + w2 = " << w1.totalWeightWith(w2) << " кг\n";
    }
    
    Weapon* p = new Weapon("Копьё", 55, 2.5);
    cout << "Динамический объект: " << p->name << ", вес " << p->weight << " кг\n";
    cout << "Можно поднять копьё весом 4.5 кг? " << (p->isTooHeavy(7.0) ? "Нет" : "Да") << "\n";

    delete p;
    p = nullptr;


    return 0;
}
