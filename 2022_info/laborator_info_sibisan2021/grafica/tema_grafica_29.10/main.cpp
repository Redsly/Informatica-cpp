#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    initwindow(1000,800);
    setcolor(WHITE);
    circle(400,480, 40);
    delay(500);
    rectangle(200,350, 600, 750);
    delay(50);
    setcolor(LIGHTRED);
    line(600,350, 400, 150);
    line(200,350, 400, 150);
    delay(50);
    setcolor(WHITE);
    circle(400, 270, 30);
    delay(50);
    line(400, 237, 400, 300);
    line(370, 270, 430, 270);
    delay(50);
    rectangle(250, 590, 345,730);
    delay(50);
    line(250, 670, 260, 670);
    delay(50);
    rectangle(400, 600, 530, 660);
    delay(50);
    line(465, 600,465, 660);
    delay(10000);
    return 0;
}
