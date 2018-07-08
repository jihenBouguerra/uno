#include <time.h>
int random (int l[])
{int j,x ;
srand(time(NULL));
do
 {
    j =rand()%108;}
    while (l[j]==0);
x=l[j];
l[j]=0;
return x;}
