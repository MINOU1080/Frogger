#include "Frog.hpp"


int Frog::getCoordinateX() const {
    return coord.getPositionX();

}

int Frog::getCoordinateY() const {
    return coord.getPositionY();

}

void Frog::resetPosition(){
    this->setCoordinateX(defaultCoord);
    this->setCoordinateY(defaultCoord);
}

void Frog::setCoordinateX(Coordinate coord) {
    this->coord.setPositionX(coord.getPositionX());
}

void Frog::setCoordinateY(Coordinate coord){
    this->coord.setPositionY(coord.getPositionY());
}
