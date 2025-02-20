#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int centerX = 200; // X-coordinate of the center of the circle
    int centerY = 200; // Y-coordinate of the center of the circle
    int radius = 100;  // Radius of the circle

    // Draw the circle
    circle(centerX, centerY, radius);

    getch();
    closegraph();

    return 0;
}
