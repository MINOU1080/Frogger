
#include "ComponentsFLTK.hpp"
#include "../../Include.hpp"
#include "../../View/Window/GameWindow.hpp"
#include "../../Controller/MainController.hpp"

class Game {
private:
  GameWindow gamewindow;
  MainController maincontroller;
  WindowFLTK window{gamewindow,maincontroller};

public:
    int start(int argc , char *argv[]) {    window.show();  return Fl::run();}

};