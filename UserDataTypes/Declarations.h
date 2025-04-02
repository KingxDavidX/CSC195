#pragma once

enum Meat {
    PASTRAMI,
    SALAMI,
    CHICKEN,
    PORK,
    PRAWNS
};

class Sandwich {
public:
    Meat meat;
    float weight;

    void heatSandwich();
private:
    bool isHot;


};
