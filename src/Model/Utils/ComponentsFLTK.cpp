#include "ComponentsFLTK.hpp"


WindowFLTK::WindowFLTK(GameWindow gamewindow,MainController maincontroller) : 
Fl_Double_Window((1920-588)/2,(1080-690)/2,588,690, "Frogger"), 
gamewindow{gamewindow},
maincontroller{maincontroller}

{
    Fl::add_timeout(1.0 / 60.0, Timer_CB, this);
    resizable(this);
  
}

void WindowFLTK::draw(){
    Fl_Double_Window::draw();
    gamewindow.drawBoard();
}

int WindowFLTK::handle(int event){
    switch (event)
    {
    case FL_PUSH:
        /* code */
        break;
    
    case FL_KEYDOWN:
        if (status == INGAME)  { maincontroller.keyboardListener(Fl::event_key(),status);}

    case FL_MOVE:
        break;
    
    default:
        break;
    }

}

void WindowFLTK::Timer_CB(void *userdata){
    WindowFLTK *o = static_cast<WindowFLTK *>(userdata);
    o->redraw();
    Fl::repeat_timeout(1.0 / 60.0, Timer_CB, userdata);
}