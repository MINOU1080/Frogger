#pragma once
#include "../../Include.hpp"
#include "../../View/Window/GameWindow.hpp"

class WindowFLTK : public Fl_Double_Window{

private:
  GameWindow gamewindow;

public:
  WindowFLTK(GameWindow gamewindow);

  int handle(int event) override;
  void draw() override;
  static void Timer_CB(void *userdata);

};

