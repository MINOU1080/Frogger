#pragma once
#include "AbstractController.hpp"
#include "../Model/Components/Frog.hpp"

class Movable {
protected:
    Frog *frog;
    virtual bool checkMove() = 0;

public:
    void assignFrog(Frog *newfrog);
    virtual void move()      = 0;

};

//////////////////////////////////////////

class MoveUp : public Movable {
private:
    bool checkMove() override;
public:
    void move() override;

};

//////////////////////////////////////////

class MoveDown : public Movable {
private:
    bool checkMove() override;

public:
    void move() override;

};

//////////////////////////////////////////

class MoveLeft : public Movable {
private:
    bool checkMove() override;

public:
    void move() override;
};

//////////////////////////////////////////

class MoveRight : public Movable {
private:
    bool checkMove() override;
public:
    void move() override;

};

//////////////////////////////////////////

class GameController : public AbstractController{
private:
    Frog *frog;
    std::unordered_map<int, std::shared_ptr<Movable>> moves{
    {'z', std::make_unique<MoveUp>()},
    {'w', std::make_unique<MoveUp>()},
    {'s', std::make_unique<MoveDown>()}, 
    {'q', std::make_unique<MoveRight>()},
    {'a', std::make_unique<MoveRight>()},
    {'d', std::make_unique<MoveLeft>()}};

public:
    void keyboardListener(int keyCode) override;
    void mouseClick()                  override;
    void mouseMove()                   override;    


};