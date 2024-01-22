#pragma once
#include "Utils.hpp"
#include "../../Include.hpp"
#include "../../View/Window/GameWindow.hpp"
#include "../../Controller/MainController.hpp"

class WindowFLTK : public Fl_Double_Window{

private:
  GameWindow gamewindow;
  MainController maincontroller;
  Status status = INGAME;


public:
  WindowFLTK(GameWindow gamewindow,MainController maincontroller);

  int handle(int event) override;
  void draw() override;
  static void Timer_CB(void *userdata);

};

