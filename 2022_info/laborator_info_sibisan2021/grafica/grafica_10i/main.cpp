#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    initwindow(1000,800);
    int xc=100, yc=100, R=50;
    for(int i=0;i<500;i+=10){
        setcolor(LIGHTRED);
        circle(xc+i, yc+i, R+i);
        delay(100);
        setcolor(BLACK);
        circle(xc+i, yc+i, R+i);
    }

    /*setcolor(LIGHTBLUE);
    rectangle(200, 200, 700, 500);
    delay(1500);
    setcolor(LIGHTGREEN);
    line(150,100 , 800,700);
    delay(5000);*/
    return 0;
}
