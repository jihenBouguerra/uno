int score (int t[], int a)
{int j=0,col=0,i,num=0,sym=0,s=0;
  for (i=0;i<a; i++)
  { j=t[i]/1000;
    sym=(t[i]%1000)/100;
    col=(t[i]%100)/10;
    num = t[i]%10;
     switch(j)
     {case 2: s=s+50; break; //super joker +50
      case 1: s=s+50; break; // joker +50
      default : //carte n'est pas  joker
      switch (sym) //carte a effet???
         {case 1: s=s+20; break;  //tout carte a ffet (+2 , inverce sens , passer le tour)-->+20
          case 2: s=s+20; break;
          case 3: s=s+20; break;
         default : // carte de num +son num
        s=s+num;
         break;

         }


     }}
     return s;}










