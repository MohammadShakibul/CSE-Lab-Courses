#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define the line endpoints
    int x1 = 50, y1 = 50;
    int x2 = 400, y2 = 300;
    int radius = 10; // Radius of each circle

    // Number of circles to draw
    const int numCircles = 10;

    // Calculate the distance between each circle
    float dx = (x2 - x1) / (float)(numCircles - 1);
    float dy = (y2 - y1) / (float)(numCircles - 1);

    // Draw the circles
    for (int i = 0; i < numCircles; i++) {
        int x = round(x1 + i * dx);
        int y = round(y1 + i * dy);
        circle(x, y, radius);
    }

    getch();
    closegraph();

    return 0;
}

