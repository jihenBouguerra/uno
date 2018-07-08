void remarque (int t[], int rang , int i,int k)
{
    if (rang>i)
        printf ("vous disposez uniquement %i cartes\n",i);
    else
        if (rang<0)
           printf("choisir une carte \n");
        else
            if (k==0)
                printf("cette carte ne peut pas etre jouée \n");


}
