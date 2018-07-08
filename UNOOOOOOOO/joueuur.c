int joueuur(int a , int x)
{int s=0,b=0;
if ((x!=1000)&&(x!=2000))
{s=x/100;
switch (s)
{case 1 :b =(a%2)+ 1;
 break;
 case 2 :b=a;
 break;
 case 3 :b = a ;
 break;
default:
b = (a%2)+1;
break;}
}
else
    b=a;

return b ;}
