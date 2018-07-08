char joker (int joueur )
{char c;
int d;
do
  {
   printf("joueur %i entrer la couleur\n",joueur );
   scanf(" %c",&c);
  }
while ((c!='v')&&(c!='r')&&(c!='j')&&(c!='b'));
return c;
}

