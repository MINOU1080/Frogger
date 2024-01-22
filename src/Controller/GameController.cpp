#include "GameController.hpp"


void Movable::assignFrog(Frog *newFrog){
    frog = newFrog;
}


bool MoveUp::checkMove(){
    return true;
}

void MoveUp::move() {
    

}

bool MoveDown::checkMove(){
    return true;
}

void MoveDown::move() {
    
}

bool MoveRight::checkMove(){
    return true;
}

void MoveRight::move() {
    
}

bool MoveLeft::checkMove(){
    return true;
}

void MoveLeft::move() {
    
}

void GameController::keyboardListener(int keyCode){
    moves[keyCode]->assignFrog(frog);
    moves[keyCode]->move();
}

void GameController::mouseClick(){
    printf("t");
}

void GameController::mouseMove(){

    printf("test");
}