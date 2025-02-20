#include <iostream>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
  Rectangle(100, 100, 200, 150);

    // Wait for user input before closing
    closeGraphics();

    return 0;
}
