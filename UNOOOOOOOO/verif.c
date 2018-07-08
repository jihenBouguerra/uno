void verif (int carte[], int carte1[],int joueur1[],int joueur2[],int i1,int i2)


{int n=0,j=0,i,v=0;
for (i=0; i<108; i++)
{if (carte[i]==0)
n++;}
if (n==108)
 {
 for (i=0; i<108;i++)
  carte[i]= carte1[i];
   v=0; j=0;
       for (i=0;i<i1; i++)
                   {while((v==0)&&(j<108))
                    {if (joueur1[i]==carte[j])
                    {carte [j]=0;
                    v++;}
                    j++;}
                    }
                    v=0; j=0;
       for (i=0;i<i2; i++)
                   {while((v==0)&&(j<108))
                    {if (joueur2[i]==carte[j])
                    {carte [j]=0;
                    v++;}
                    j++;}
                    }}

}
