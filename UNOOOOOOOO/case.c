int cas(int a,int t[],char c)// controle couleuuur deja choisie
{int d=0,rang;
    switch (c)
{ printf("entrer 0 si vous vouler piocher une carte \n \n \n\n");
case 'r' :
    do
    {
        printf("le rang de la carte jouee \n ");
        scanf("%i",&rang);
        d= (t[rang-1]%100)/10;
    }
    while (((rang<1)||(rang>a)||(t[rang-1]==0)||(d!=2))&&((rang<1)||(rang>a)||(t[rang-1]==0)||
    (t[rang-1]!=1000))&&((rang<1)||(rang>a)||(t[rang]==0)||(t[rang-1]!=2000))&&(rang!=0));

    break;

case 'b' :
    do
    {
        printf(" le rang de la carte jouee \n ");
        scanf("%i",&rang);
        d= (t[rang-1]%100)/10;
    }
    while (((rang<1)||(rang>a)||(t[rang-1]==0)||(d!=1))&&((rang<1)||(rang>a)||(t[rang-1]==0)||
   (t[rang-1]!=1000))&&((rang<1)||(rang>a)||(t[rang]==0)||(t[rang-1]!=2000))&&(rang!=0));
break;
case 'v' :
    do
    {
        printf("le rang de la carte jouee \n ");
        scanf("%i",&rang);
        d= (t[rang-1]%100)/10;
    }
    while (((rang<1)||(rang>a)||(t[rang-1]==0)||(d!=4))&&((rang<1)||(rang>a)||
      (t[rang-1]==0)||(t[rang-1]!=1000))&&((rang<1)||(rang>a)||(t[rang]==0)||(t[rang-1]!=2000))&&(rang!=0));

break;
case 'j' :
    do
    {
        printf("entrer le rang de la carte joue \n  ");
        scanf("%i",&rang);
        d= (t[rang-1]%100)/10; printf("%i",d);
    }
    while(((rang<1)||(rang>a)||(t[rang-1]==0)||(d!=3))&&((rang<1)||(rang>a)||(t[rang-1]==0)||(t[rang-1]!=1000))
          &&((rang<1)||(rang>a)||(t[rang]==0)||(t[rang-1]!=2000))&&(rang!=0));
break;}
 return rang ;

}
