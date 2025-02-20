#include <graphics.h>
#include <math.h>
#include <conio.h>

int main() {
    int i, j = 0, gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Display message before animation
    settextstyle(7, HORIZ_DIR, 2);
    //settextstyle(9, 0, 2);
    outtextxy(25, 240, "Press any key to view the moving car");
    getch();
    // Animation loop
    for (i = 0; i <= 420; i = i + 10, j++) {
    // Draw car body and wheels
        rectangle(50 + i, 275, 150 + i, 400); // Car body
        rectangle(150 + i, 350, 200 + i, 400); // Wheels
        circle(75 + i, 410, 10); // Front wheel
        circle(175 + i, 410, 10); // Back wheel
        // Change car color
        setcolor(j);
        // Delay for animation
        delay(500);
        // Exit loop if animation completes
        if (i == 420) {
            break;
        }
        // Reset color after 15 cycles
        if (j == 15) {
            j = 2;
        }
        // Clear screen for next frame
            cleardevice();
    }

    getch();
    closegraph();
    return 0;
}


