#include <iostream>
 #include <graphics.h>
 #include <cmath>
  using namespace std;
   void DDA(int x1, int y1, int x2, int y2) {
   int dx = x2 - x1;
    int dy = y2 - y1;
 int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);
  float xInc = dx / (float) steps;
   float yInc = dy / (float) steps;
  float x = x1;
   float y = y1;
   for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
   x += xInc; y += yInc;
     }

           }
   int main() {
        int gd = DETECT, gm;
         initgraph(&gd, &gm, "");
           int x1 = 2, y1 = 3;
           int x2 = 6, y2 = 15;
            DDA(x1, y1, x2, y2);

             getch();
             closegraph();

              return 0;

              }
