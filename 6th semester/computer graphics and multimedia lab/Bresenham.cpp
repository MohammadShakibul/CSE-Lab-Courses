#include <iostream>
#include <graphics.h>

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x0 = 100, y0 = 100, x1 = 400, y1 = 300;

    int dx = x1 - x0;
    int dy = y1 - y0;
    int absDx = (dx < 0) ? -dx : dx;
    int absDy = (dy < 0) ? -dy : dy;
    int sx = (dx >= 0) ? 1 : -1;
    int sy = (dy >= 0) ? 1 : -1;

    int err = absDx - absDy;

    while (true) {
        putpixel(x0, y0, WHITE);

        if (x0 == x1 && y0 == y1) break;

        int err2 = err * 2;

        if (err2 > -absDy) {
            err -= absDy;
            x0 += sx;
        }
        if (err2 < absDx) {
            err += absDx;
            y0 += sy;
        }
    }

    getch();
    closegraph();
    return 0;
}
