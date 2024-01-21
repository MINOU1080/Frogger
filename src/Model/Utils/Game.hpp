
#include "ComponentsFLTK.hpp"
#include "../../Include.hpp"
#include "../../View/Window/GameWindow.hpp"

class Game {
private:
  GameWindow gamewindow;
  WindowFLTK window{gamewindow};

public:
    int start(int argc , char *argv[]) {    window.show();  return Fl::run();}

};