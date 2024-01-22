#pragma once

#include "AbstractController.hpp"
#include "GameController.hpp"

class MainController{

private:
    GameController gamecontroller;

public:
    void keyboardListener(int keyCode,Status status);
    void mouseClick();
    void mouseMove();


};