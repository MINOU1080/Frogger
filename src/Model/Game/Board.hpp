#pragma once

#include "../../Include.hpp"


class Rectangle {

private:
    Coordinate    center;
    int    width, height;
    Fl_Color fillColor;

public:
    Rectangle(Coordinate coord, int weight, int height,Fl_Color fillColor = FL_BLACK);
    void     draw();


};

class Cell {

private:
    Rectangle rectangle;
    Coordinate center;
    int width,height;


public:
    Cell(Coordinate coord, int weight, int height,Fl_Color fillColor);
    void draw();
};

class Matrix {

private:
    std::vector < std::vector <Cell> > matrix;
    const int heightCell = 46, widthCell = 42;

public:
    Matrix();
    void draw();
    void creationMatrix();
    ~Matrix();

};

class Board {

private:
    Matrix matrix;

public:
    void draw();

};