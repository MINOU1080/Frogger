#include "Board.hpp"

Rectangle::Rectangle(Coordinate coord,int width, int height, Fl_Color fillColor ) :
    center{coord},
    height{height},
    width{width},
    fillColor{fillColor} {}

void Rectangle::draw(){
fl_draw_box(FL_FLAT_BOX, center.getPositionX() , center.getPositionY() , width, height, fillColor);
}

////////////////////////////////

Cell::Cell(Coordinate coord, int width, int height,Fl_Color fillColor) :
    rectangle(coord,width,height,fillColor),
    center{coord},
    width{width},
    height{height} {}

void Cell::draw(){
    rectangle.draw();
}

///////////////////////////////////

Matrix::Matrix(){
    this->creationMatrix();
}

void Matrix::draw(){
    for (auto &row : matrix)
        for (auto &cell : row) cell.draw();
}

void Matrix::creationMatrix(){
    for (int y = 0; y < 13 ; y++){
        std::vector <Cell> row;
        for (int x = 0; x < 14 ; x++){
            if (y == 0){
                row.push_back( Cell{Coordinate{ widthCell * x,  heightCell * y},widthCell, heightCell,FL_GREEN});
            }
            else if ( y >= 1 && y < 6 ){
                row.push_back( Cell{Coordinate{ widthCell * x,  heightCell * y},widthCell, heightCell,FL_BLUE});
            } 
            else if ( y >= 7 && y <= 12 ) {
                row.push_back( Cell{Coordinate{ widthCell * x,  heightCell * y},widthCell, heightCell,FL_BLACK});
            }
            else if ( y == 6 || y == 13 ){
                row.push_back( Cell{Coordinate{ widthCell * x,  heightCell * y},widthCell, heightCell,FL_GRAY});
            }    
        }
        matrix.push_back(row);
    }
}

////////////////////////////////////

void Board::draw() {
    matrix.draw();

}
    