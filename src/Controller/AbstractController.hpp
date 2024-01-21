#pragma once

#include "../Include.hpp"


class AbstractController {

public:

    virtual void keyboardListener(int keyCode) = 0;
    virtual void mouseClick()                  = 0;
    virtual void mouseMove()                   = 0;    

};