#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>




int isJollyJumber(const int seq[], int size) 
{

bool diffs_found[size]; //bool is defined that checks if difference is found.
diffs_found[0]=true; //first number of array is true because there is no other value to compare it to.

for(int j=1;j<size;j++)
{
diffs_found[j]=false; // all numbers after first start as false,because all number need to be checked.
}


for(int i=0;i<size;i++) //finds differences between succesive numbers. That are then stored in corrected places if differences isn't greater than size of sequence.
{
int num = 0;
num = seq[i]-seq[i+1]; //finds difference between succesive numbers in array.
if(abs(num)<=size) //checks if the absolute value of diffrences between numbers is less than or equal to size.
{
diffs_found[abs(num)]=true; //bool is true when if statement is true.
}
}
for(int k = 0;k<size;k++)
{
if (diffs_found[k]==false) //if any value isn't true 0 is returned meaning numbers in array aren't jolly jumpers.

return 0;

}

    return 1; //if all values from sequence are true, all numbers in array are jolly jumpers.
}

