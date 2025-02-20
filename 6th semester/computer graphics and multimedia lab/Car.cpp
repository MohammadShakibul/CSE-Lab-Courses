
#include <graphics.h>
#include <conio.h>
main()
{
    int j=1;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
   for(int i=20;i<=100;i+=20){


    rectangle(200+i,250,350+i,350);

    rectangle(b+i,350,400+i,300);
    circle(220+i,360,10);
    circle(245+i,360,10);
    circle(320+i,360,10);
    circle(380+i,360,10);

  if (j==1){
int    col();

 delay(50);
}
   }
   int col(int j){
     int a=200;
     int b= 350;
    setcolor(BLACK);
    rectangle(a+i,250,b+i,b);
setcolor(BLACK);
    rectangle(b+i,350,400+i,300);

    int c2=360;
    setcolor(BLACK);
    circle(220+i,c2,10);
    setcolor(BLACK);
    circle(245+i,c2,10);
    setcolor(BLACK);
    circle(320+i,c2,10);
    setcolor(BLACK);
    circle(380+i,c2,10);
   }

    getch();
    closegraph();
    return 0;
}
