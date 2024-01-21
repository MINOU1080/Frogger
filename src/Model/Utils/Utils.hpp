#pragma once


class Coordinate {

private:

    int x;
    int y;

public:
    Coordinate(int x, int y) : x{x},y{y} {};
    int getPositionX() const { return x; };
    int getPositionY() const { return y; };


};