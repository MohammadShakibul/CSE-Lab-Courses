#include <graphics.h>
#include <conio.h>
void drawLine(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int absDx = (dx < 0) ? -dx : dx;
    int absDy = (dy < 0) ? -dy : dy;
    int sx = (dx >= 0) ? 1 : -1;
    int sy = (dy >= 0) ? 1 : -1;

    int err = absDx - absDy;

    while (true) {

        setcolor(WHITE);
        rectangle(x0 - 5, y0 - 5, x0 + 5, y0 + 5);
        delay(50);

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

        setcolor(BLACK);
        rectangle(x0 - 5, y0 - 5, x0 + 5, y0 + 5);
    }
}

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int startX = 100, startY = 100;
    int endX = 400, endY = 300;

    drawLine(startX, startY, endX, endY);
    getch();
    closegraph();
    return 0;
}
