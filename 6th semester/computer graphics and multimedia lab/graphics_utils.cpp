#include "graphics_utils.h"
#include <cmath>  // For abs() function

void ddaLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps;
    float xIncrement, yIncrement;
    float x = x1;
    float y = y1;

    // Determine the number of steps needed
    if (abs(dx) > abs(dy)) {
        steps = abs(dx);
    } else {
        steps = abs(dy);
    }

    // Calculate increment for each step
    xIncrement = dx / (float)steps;
    yIncrement = dy / (float)steps;

    // Draw the line
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += xIncrement;
        y += yIncrement;
    }
}

