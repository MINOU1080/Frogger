#pragma once

#include "../../Include.hpp"

class AbstractComponents {

public:

    virtual int getCoordinateX() const  = 0;
    virtual int getCoordinateY() const  = 0;

    virtual void setCoordinateX(Coordinate coord)       = 0; 
    virtual void setCoordinateY(Coordinate coord)       = 0;    
};