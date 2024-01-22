#include "MainController.hpp"


void MainController::keyboardListener(int keyCode, Status status){
    switch (status)
    {
    case INGAME:
        gamecontroller.keyboardListener(keyCode);
        
        break;
    case SELECTORLEVEL:
        break;
    
    case VICTORY:
        break;
    
    case LOSE:
        break;
    
    case END:
        break;
    
    default:
        break;
    }

}

void MainController::mouseClick(){

}

void MainController::mouseMove(){


}