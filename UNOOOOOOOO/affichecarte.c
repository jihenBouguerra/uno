void affichecarte (int a,int t[108],int j)// affichage de tout les cartes

{int i;
    if (a==1)
    {printf("\t   d8b                                                    d888  \n");
printf("\t   Y8P                                                   d8888  \n");
printf("\t                                                           888   \n");
printf("\t  8888  .d88b.  888  888  .d88b.  888  888 888d888         888   \n");
printf("\t   888 d88  88b 888  888 d8P  Y8b 888  888 888P            888   \n");
printf("\t   888 888  888 888  888 88888888 888  888 888             888   \n");
printf("\t   888 Y88..88P Y88b 888 Y8b.     Y88b 888 888             888   \n");
printf("\t   888   Y88P    Y88888   Y8888     Y88888 888           8888888 \n");
printf("\t   888\n");
printf("\t  d88P                                                           \n");
printf("\t888P                                                            \n");
printf("\n\n\n");


    }
    else
{printf ("\n\n\n");
 printf("\t   d88b  .d88b.  db    db d88888b db    db d8888b.      .d888b. \n");
printf("\t    `8P' .8P  Y8. 88    88 88'     88    88 88  `8D      VP  `8D \n");
printf("\t     88  88    88 88    88 88ooooo 88    88 88oobY'         odD' \n");
printf("\t     88  88    88 88    88 88~~~~~ 88    88 88`8b         .88'   \n");
printf("\t db. 88  `8b  d8' 88b  d88 88.     88b  d88 88 `88.      j88.    \n");
printf("\t Y8888P   `Y88P'  ~Y8888P' Y88888P ~Y8888P' 88   YD      888888D \n");
printf("\n\n\n");
    }


   i=0;
while(i<j)
{
    printf("\t%i\t",i+1);// (i c'est le num de carte )
affiche (t[i]);
i++;}
}
