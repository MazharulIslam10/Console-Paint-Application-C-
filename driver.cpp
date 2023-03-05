#include "GP142.h"
#include"Paint.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Polygon.h"
#include "Text.h"
#include "OpenShape.h"
#include "Curve.h"
#include "iostream"
#include <stdio.h>
#include <math.h>
#define PI 3.1415926535
#define ANIMATE_MSG "Select \"Animate\"\nOn the \"Run\" Menu"

void draw_line(int x1, int y1, int x2, int y2, int color = WHITE, int width = 2) {
	GP142_lineXY(color, x1, y1, x2, y2, width);
}

void draw_circle(int x, int y, int radius, int color = GREEN) {
	GP142_circleXY(color, x, y, radius,2);
}

void handle_mouse(int x, int y) {
	GP142_printfXY(YELLOW, x, y, 9, "(%d,%d)", x, y);
}


int main(void)
{
	//std::vector<int> abc(5);
	int quit = 0;           /* has user signaled quit yet?                      */
	int mouse_x, mouse_y, mouse_a, mouse_b, mouse_d, mouse_c;
	char key_pressed;
	//GP142_open();           /* Open and initialize the GP142 Graphics Window    */
	int pcount = 0;
	int points[4];
	double r = 0;
	Paint k;
	k.OnStart();
	GP142_close();          /* Clean up and close graphics window           */
	return 0;
}