#pragma once
typedef struct point {
	int x;
	int y;
} point;

/*add your definition of circle here. You need top call it "circle"*/
typedef struct circle {

point p;

int r; //radius of circle

}circle;

void fiveCircles(circle c[]);
int circleIsValid(const circle* c);
void translate(circle* c, const point* p);