#include <iostream>
#include <graphics.h>
#include <cmath>
#include <conio.h>  // for getch()

using namespace std;

int main() {
    int x1, y1, x2, y2, dx, dy;
    float Xinc, Yinc, x, y, steps;
    
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    cout << "Enter the values for x1, y1, x2, y2: " << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    if (abs(dx) > abs(dy)) {
        steps = abs(dx);
    } else {
        steps = abs(dy);
    }
    
    Xinc = dx / steps;
    Yinc = dy / steps;
    
    x = x1;
    y = y1;

    // Drawing the line using DDA algorithm
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), 5);  // Draw pixel at current coordinates
        x += Xinc;
        y += Yinc;
    }

    // Wait for the user to press a key before closing
    getch();

    // Close the graphics window
    closegraph();

    return 0;
}

