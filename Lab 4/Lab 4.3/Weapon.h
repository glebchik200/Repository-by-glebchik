#pragma once
#include <iostream>

using std::string;


class Weapon {
public:
    string name;
    int damage;
    double weight;

    Weapon(const string& n, int d, double w);

    Weapon();

    ~Weapon();

    bool isTooHeavy(double maxweight);
    double totalWeightWith(const Weapon& other);
    double totalWeightWith(double otherWeight);

};
