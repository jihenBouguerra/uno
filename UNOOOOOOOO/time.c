#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main ()

 {char c;
  float duree=0.0;
    clock_t begin,end;
   begin=clock();
    do
   {    fflush(stdin);
        scanf("%c",&c);
        end=clock();
        duree=(float)(end-begin)/CLOCKS_PER_SEC;
    }
    while((c!='u')&&(duree<=3.0));

    if ((c=='u')&&(duree<=3.0))
    {
        printf("bravo");}
    else
        printf("no");

    return 0;}
