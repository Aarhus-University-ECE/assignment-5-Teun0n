#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>




int isJollyJumber(const int seq[], int size) 
{

bool diffs_found[size];
diffs_found[0]=true;

for(int j=1;j<size;j++)
{
diffs_found[j]=false;
}


for(int i=0;i<size;i++)
{
int num = 0;
num = seq[i]-seq[i+1];
if(abs(num)<=size)
{
diffs_found[abs(num)]=true;
}
}
for(int k = 0;k<size;k++)
{
if (diffs_found[k]==false)

return 0;

}

    return 1;
}

