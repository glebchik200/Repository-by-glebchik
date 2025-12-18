#include <iostream>   
#include <string>     
#include <string>
#include "Weapon.h"

using namespace std;

class Characteristic {
private:
    double strength;
public:
    Characteristic(double s) : strength(s) {}

    double GetDamage(const Weapon& w) const {
        return strength + w.damage;
    }
};

class MyMath {
private:
    static int counter; 

public:
    static double Add(double a, double b) {
        counter++;
        return a + b;
    }
    static double Sub(double a, double b) {
        counter++;
        return a - b;
    }
    static double Mult(double a, double b) {
        counter++;
        return a * b;
    }
    static double Div(double a, double b) {
        counter++;
        return (b != 0) ? a / b : 0;
    }

    static int getCallCount() {
        return counter;
    }
};

int MyMath::counter = 0;

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

bool Weapon::isTooHeavy(double maxweight) const {
    return maxweight < weight;
}

double Weapon::totalWeightWith(const Weapon& other) const  {
    return weight + other.weight;
}

double Weapon::totalWeightWith(double otherWeight) const  {
    return weight + otherWeight;
}

string Weapon::getName() const { 
    return name; 
}

double Weapon::getDamage() const { 
    return damage; 
}

double Weapon::getWeight() const { 
    return weight; 
}

void Weapon::setDamage(double newDamage) {
    damage = newDamage;
}



int main() {
    setlocale(LC_ALL, "Russian");
 
    Weapon sword("Меч", 50.0, 5.5);
    cout << "\nПроверка GET и SET" << endl;
    cout << "Имя: " << sword.getName() << endl;
    cout << "Урон: " << sword.getDamage() << endl;
    cout << "Вес: " << sword.getWeight() << endl;

    sword.setDamage(20.0);
    cout << "Новый урон: " << sword.getDamage() << endl;

    cout << "\nПроверка дружбы с Characteristic" << endl;
    Characteristic hero(55.0);
    cout << "Итоговый урон героя: " << hero.GetDamage(sword) << endl;

    cout << "\nПроверка MyMath" << endl;
    cout << "Сложение: " << MyMath::Add(5, 3) << endl;
    cout << "Вычитание: " << MyMath::Sub(10, 4) << endl;
    cout << "Умножение: " << MyMath::Mult(6, 7) << endl;
    cout << "Деление: " << MyMath::Div(20, 4) << endl;

    cout << "Количество вызовов MyMath: " << MyMath::getCallCount() << endl;

   
    return 0;
}
