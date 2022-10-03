#include <stdio.h>
#include <malloc.h>
#include "circle.h"
#include"jollyjumper.h"
#include <stdbool.h>
#include <assert.h>

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
	printf("isValid: %d\n", circleIsValid(&c[1]));

	/*answer to exercise 7.b*/
	int n; /*number of numbers to read*/
    printf("\nenter amount of numbers.\n");
    scanf("%d",&n); //variable n assigns "n" numbers in array, for jollyjumperfunction.
    assert(n>0); //
	/*readin n and check that is is OK*/

	int *numbers = malloc(sizeof(int) * n);

	/*readin the n numbers in the array numbers*/
	printf("Enter %d numbers\n",n);
    for (int i = 0; i < n; i++) //n numbers are assigned to array.

     scanf("%d",&numbers[i]);
	if (isJollyJumber(numbers, n)) {
		printf("it is a Jolly Jumper");}
	else {
		printf("not a Jolly Jumper");}
	return 0;

}
