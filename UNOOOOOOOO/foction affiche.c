void affiche (int a)
{ int   c=0,num=0,s=0,j=0;
     char symbole [20]=" ", couleur [20]="";



s=(a%1000)/100; j=a/1000;
 c=(a%100)/10;
 num=a % 10;
 switch (j)
 {case 2:printf ("symbole +4\n"); break; // 2000-->+4
 case 1: printf ("joker\n ");break; //100-->joker
 case 0: // ni joker n +4 voir  les symbboles
 switch(s)
 {
  case 1:
  strcpy(symbole,"+2");
  if(c==2)
  strcpy(couleur,"rouge");
  if(c==1)
  strcpy(couleur,"bleu");
  if(c==3)
  strcpy(couleur,"jaune");
  if(c==4)
  strcpy(couleur,"vert");
   printf ("couleur %s de symbole %s \n",couleur, symbole);
  break;
  case 2:
    strcpy(symbole,"passez le tour");
  if(c==2)
  strcpy(couleur,"rouge");
  if(c==1)
  strcpy(couleur,"bleu");
  if(c==3)
  strcpy(couleur,"jaune");
  if(c==4)
  strcpy(couleur,"vert");
   printf ("couleur %s de symbole %s \n",couleur, symbole);
   break;

 case 3:
    strcpy(symbole,"inverce de sens");
  if(c==2)
  strcpy(couleur, "rouge");
  if(c==1)
  strcpy(couleur,"bleu");
  if(c==3)
  strcpy(couleur,"jaune");
  if(c==4)
  strcpy(couleur,"vert");
   printf ("couleur %s de symbole %s \n",couleur, symbole);
   break;





  case 0:
     switch(c)
      {case 1:
      strcpy (couleur,"bleu");
      break;
      case 4:
      strcpy(couleur,"vert");
      break;
      case 3:
      strcpy(couleur,"jaune");
      break;
      case 2:
      strcpy(couleur,"rouge");
      break;}
 printf ("couleur %s de num %i \n",couleur,num);


  break;

 }break;}}
