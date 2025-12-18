#pragma once
#include <iostream>

using std::string;

class Characteristic;

class Weapon {
private:
    string name;
    int damage;
    double weight;

public:
    Weapon(const string& n, int d, double w);

    Weapon();

    ~Weapon();

    bool isTooHeavy(double maxweight) const;
    double totalWeightWith(const Weapon& other) const;
    double totalWeightWith(double otherWeight) const;

    string getName() const;
    double getDamage() const;
    double getWeight() const;
    
    void setDamage(double newDamage);

    friend class Characteristic;
};
