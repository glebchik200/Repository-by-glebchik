#include <iostream>   
#include <string>     
using namespace std;


class Weapon { 
public:
    string name; 
    int damage; 
    double weight;
    Weapon(const string& n, int d, double w)
        : name(n), damage(d), weight(w) {
    }
    Weapon() : Weapon("Меч", 60, 5.5) {
    }
};


int main() {
    setlocale(LC_ALL, "Russian");
    Weapon w1("Копьё", 50, 2.1);
    Weapon w2;
    cout << "Оружие 1:" << endl;
    cout << " Имя: " << w1.name << endl;
    cout << " Урон: " << w1.damage << endl;
    cout << " Вес: " << w1.weight << " кг" << endl;

    cout << endl;


    cout << "Оружие 2: " << endl;
    cout << " Имя: " << w2.name << endl;
    cout << " Урон: " << w2.damage << endl;
    cout << " Вес: " << w2.weight << " кг" << endl;

    return 0;
}
