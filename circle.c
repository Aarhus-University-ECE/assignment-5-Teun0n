#include <stdio.h>
#include <malloc.h>
#include "circle.h"
#include <stdbool.h>

circle c[5];

void fiveCircles(circle c[]) {
for(int i = 0; i<5; i++){

c[i].p.x = i;
c[i].p.y = i;
c[i].r = i;

}


}

int circleIsValid(const circle * c) {
/*post: answer to exercise 6.c*/

if((c->r)){
return true;
}
else {
return false;
}

}

void translate(circle* c, const point* p) {
/*ansver to exercise 6.d*/
c->p.x = (c->p.x) + (p->x);
c->p.y = (c->p.y) + (p->y);

}
void printCircle(circle c) {
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	circle c[5];
	fiveCircles(c);
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	point p;
	p.x = 2;
	p.y = 2;
	translate(&c[1], &p);
	printCircle(c[1]);
	printf("isValid: %d", circleIsValid(&c[1]));

	return 0;
}


