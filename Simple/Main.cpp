#include <iostream>
#include "MainWindow.h"
#include "Game.h"




int main(int argc, char* args[])
{

    MainWindow wnd(800, 600);
    {
        Game theGame(wnd);
        while (theGame.running)
        {
            theGame.Go();
        }
        wnd.~MainWindow();
    }
    

        

        return 0;
  
}