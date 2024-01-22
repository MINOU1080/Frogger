#pragma once
#include "../../Include.hpp"

class Coordinate {

private:

    int x;
    int y;

public:
    Coordinate(int x, int y) : x{x},y{y} {};
    int getPositionX() const { return x; };
    int getPositionY() const { return y; };

    void setPositionX(int valueX){ this->x = valueX;}
    void setPositionY(int valueY) { this->y = valueY;}
};

enum Statut {
    SELECTORLEVEL,
    INGAME,
    VICTORY,
    LOSE,
    END
};

enum Direction {
    UP,
    DOWN,
    RIGHT,
    LEFT
};