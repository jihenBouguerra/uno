int logic (int s,int c,int num,int rang,int t[])
{int s1=0,c1=0,num1=0, k=0;


if((t[rang-1]!=1000)&&(t[rang-1]!=2000))
{s1=t[rang-1]/100;//symbole
c1=(t[rang-1]%100)/10;//couleur
num1=t[rang-1]%10;//numero

if (num==num1)
    {if ((s1==s)&&(s==0))
      k=1;} // sassurer que la carte de type num et non carte d'effet (s=s1=0)
if (c1==c)// carte de coulleuur (si il ont la m couleur)
    k=1;
if ((s1==s)&&(s!=0)) // (s!=0) sassurer que la carte est la carte a effet
   k=1;

} return k;}
