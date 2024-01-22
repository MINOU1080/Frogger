#pragma once

#include "AbstractComponent.hpp"

class Frog : public AbstractComponents {

private:
    Coordinate coord,defaultCoord;
    

public:

    int getCoordinateX() const override;
    int getCoordinateY() const override;


    void resetPosition();

    void setCoordinateX(Coordinate coord) override;
    void setCoordinateY(Coordinate coord) override;


};
