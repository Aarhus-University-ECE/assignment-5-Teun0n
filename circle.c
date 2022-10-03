#include <malloc.h>
#include "circle.h"

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



