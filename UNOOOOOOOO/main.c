#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fichiers.h"





int main()
{int carte1[108]={1000,1000,1000,1000,2000,2000,2000,2000,10,
11,11,12,12,13,13,14,15,14,15,16,16,17,17,18,18,19,19,110,110,
210,210,310,310,20,21,21,22,22,23,23,24,25,24,25,26,26,27,27,
28,18,29,29,120,120,220,220,320,320,30,31,31,32,32,33,33,34,
35,34,35,36,36,37,37,38,38,39,39,130,130,230,230,330,330,40,
41,41,42,42,43,43,44,45,44,45,46,46,47,47,48,48,49,49,140,140
,240,240,340,340};
int carte[108],x=0,joueur1[108],i,i1,nn=0,i2,s=0,cal=0,k=0,m=0,E1=0,
E2=0,stage=0,num=0,st=0,
rang,jj1=0,jj2=0,stop,joueur2[108],joueur,n=0,a=0 ;
char c,p,u;
//affichage

graf();
system ( "PAUSE" );
system ("CLS");

while(a==0)// pour les 2 1er stage pas de controle utilisateur a toujours egale a 0

{stop=0;
system ("CLS");

//copie du tableau afin de ne pas perdre les cartes
for (i=0; i<108 ; i++)
    carte [i]=carte1[i];
sg();
system("color 6F");

// 7 cartes pour le joueur 1
      i1=0;

printf("  +-++-++-++-++-++-+ +-+\n");
printf("  |j||o||u||e||u||r| |1|\n");
printf("  +-++-++-++-++-++-+ +-+\n");
printf("\n");

while (i1<7)
{

    joueur1[i1]=random(carte);
     printf("\t %i\t",i1+1);
     affiche (joueur1[i1]);

    i1++;
}
printf ("\n");

// 7 cartes pour le joueur 2


 i2=0;

printf("  +-++-++-++-++-++-+ +-+\n");
printf("  |j||o||u||e||u||r| |2|\n");
printf("  +-++-++-++-++-++-+ +-+\n");
printf("\n");
while (i2<7)
{
    joueur2[i2]=random (carte);
    printf("\t %i\t",i2+1);
    affiche (joueur2[i2]);

    i2++;
}

joueur=1; system("PAUSE");
printf("\n \n");


//1er cartes aleatoirement
x= random (carte );
printf("\t\t\t\t");
affiche (x);
printf("**********************************************************************************\n");
//debut du jeux

while(stop==0)// stop ne varie a 1 que losque le nombre de cartes de lun des joueur ==0
{
// les cartes sont de type joker ou supper joker
if ((x==1000)||(x==2000))
         {c=joker (joueur); //saisie de couleur
          if  (joueur ==1)
            { if (x== 2000)// si la carte de type +4
               {for (i=0; i<4;i++)//ajout de 4 cartes pour le 2eme joueur
                joueur2[i2+i]=random(carte);
               i2=i2+4;
               }
               rang=cas(i1,joueur1,c); //saisir le rang du prochaine carte
                    if (rang==0) //si rang ==0 -----> le joueur n'a plus de cartes a joué et veut piocher une carte
                    { i1++;
                    joueur1[i1-1]=random(carte );jj1=0;}// ajout carte aleatoire
                    else// le joueur a une carte jouable parmis ses cartes
                    {x=joueur1[rang-1]; //x represante la carte sur table
                    joueur1[rang-1]=joueur1[i1-1];// switsh entre la carte lance et la derniaire carte
                    i1--; // nombre de carte diminue
                    joueur=joueuur(joueur,x);}//determine le next joueur suivant la carte a table
                    }

            else// le meme traittement pour le 2eme joueur
            {   if (x==2000)
               {for (i=0; i<4;i++)
                joueur1[i1+i]=random(carte);
               i1=i1+4;}
                rang=cas(i2,joueur2,c);
                   if (rang==0)
                    { i2++; jj2=0;
                    joueur2[i2-1]=random(carte );}
                    else
                        {    x=joueur2[rang-1]; nn=0;
                            joueur2[rang-1]=joueur2[i2-1];
                            i2--;
                            joueur=joueuur(joueur,x);}

                }}
else// cartes sur table  n'est  pas de type joker
  {  s=x/100; //symbole
    cal=(x%100)/10; //couleur
    num=x%10; k=0; //num

       if (joueur==1)
        { E1--;// n° d'erreur du joueur1 E1-- pour ne pas conter le saisie corecte
            do
            {printf("//joueur 1 : \nnum de carte  ");
            scanf("%i",&rang);
            if(joueur1[rang-1]==2000)//la carte +4 ne peut etre jouee que si le joueur n'a plus de choix
                {k=1;
                 for (m=0; m<i1; m++) //controle sur les autre cartes si elle peuvent etre jouée ou pas
                    {  if (logic(s,cal,num,m,joueur1)==1)
                      k=k+1;}

                }
             else//autre cate
            k=logic(s,cal,num,rang,joueur1);// la carte est elle jouable?
            remarque(joueur1,rang,i1,k);
            E1++;}
        while (((k!=1)||(rang>i1)||(rang<=0))&&(rang!=0)&&(joueur1[rang-1]!=1000));
//k==1//rang<num de carte du joueur //rang>0//la carte lance est joker
                if(rang==0)// ajout de carte
                {joueur1[i1]=random(carte ); i1++;
                jj1=0;}
                else//catre jouable
                {x=joueur1[rang-1]; nn=0;
                joueur1[rang-1]=joueur1[i1-1];
                i1--;
                joueur =joueuur(joueur, x);}

       }
    else
        { E2--;
           do
            { printf("//joueur 2:\nnum de carte   ");
             scanf("%i",&rang);
             if(joueur2[rang-1]==2000)
                {k=1;
                 for (m=0; m<i2; m++)
                    {  if (logic(s,cal,num,m,joueur2)==1)
                      k=k+1;}

                }
             else
              k=logic(s,cal,num,rang,joueur2);
              remarque(joueur2,rang,i2,k);
              E2++;}
             while (((k!=1)||(rang>i2)||(rang<=0))&&(rang!=0)&&(joueur2[rang-1]!=1000));

                if(rang==0)
                {joueur2[i2]=random(carte );
                i2++;jj2=0;}

                else
                {x=joueur2[rang-1];
                nn=0;
                joueur2[rang-1]=joueur2[i2-1];
                i2--;
                joueur =joueuur(joueur, x);}


         }}

if ((x/100)==1 && nn==0)// carte de type +2 ajou de 2 catres
    {if (joueur==1)
          { for (i=0; i<2; i++)
              joueur1[i1+i]= random(carte);
               i1=i1+2;
               nn=1;joueur= (joueur%2)+1;}
        else
        {   for (i=0; i<2; i++)
              joueur2[i2+i]= random(carte);
               i2=i2+2;
               nn=1;joueur= (joueur%2)+1;}}








verif(carte,carte1,joueur1,joueur2,i1,i2);// verification si il existes encors des cartes a piochés
//affichage de la carte sur table
system ("CLS");
printf("\t\t\t\t");
affiche (x);
printf("__________________________________________________________________________________\n");
//switch de console
if (joueur==1)
    {system("color 6F");
    printf("\n");
    affichecarte (1,joueur1,i1);}
else
{system("color 75");
printf("\n");
affichecarte (2, joueur2,i2);}
printf("\n");

// cas ou le joueur a piocheé une carte il peut la lance ou bien passer le tour
if(rang==0)
{ printf ("//joueur  %i: \nvoulez vous passer le tour? ",joueur );
 scanf(" %c",&p);
    if (p=='o'||p=='O')
    joueur = (joueur%2)+1;
    //affiche carte a tab
system ("CLS");
printf("\t\t\t\t");
affiche (x);
printf("_______________________________________________________________________________________\n");
//switch console
if (joueur==1)
    system("color 6F");
else
    system("color 75");

if (joueur==1)
{printf("\n");
affichecarte (1,joueur1,i1);}
else
{printf("\n\n");
affichecarte (2, joueur2,i2);}
printf("\n");
 }
   //unoooooooooooooooooooooooooooooo

if(i1==1 && jj1==0) //1er jouer
   {
    float duree=0.0;//lire uno
    clock_t begin,end;
    begin=clock();

          do
            {   fflush(stdin);
                scanf("%c",&u);
                end=clock();
                duree=(float)(end-begin)/CLOCKS_PER_SEC;
                if (u=='U'||u=='u')
                st=1;}
        while (st!=1 && duree >3.0);


                    fflush (stdin);
                    if (st==1 && duree <=3.0)//bonne antré de uno
                        { printf("continuez\n");
                          jj1=1;}//jj1 c'est un conteur qui evite la lectuure de uno plusieur foix
                    else //oublie --> ajout de 2 carte
                     {if (st!=1 && duree>7)
                            {joueur1[i1]=random(carte);
                            joueur1[i1+1]=random(carte);
                            i1=i1+2;
                            E1++; jj1=0;
                        }}}
 //2eme jouuuer meme traittemet
 if(i2==1&& jj2==0)
   {
    float duree=0.0;
    clock_t begin,end;
    begin=clock();

          do
            {   fflush(stdin);
                scanf("%c",&u);
                end=clock();
                duree=(float)(end-begin)/CLOCKS_PER_SEC;
                if (u=='U'||u=='u')
                st=1;}
        while (st!=1 && duree >7.0);


                    fflush (stdin);
                    if (st==1 && duree <=7.0)
                        { printf("continuez\n");
                          jj2=1;}
                    else
                    {

                   if(st!=1 && duree >7)
                     {joueur2[i2]=random(carte);
                      joueur2[i2+1]=random(carte);
                      i2=i2+2;
                       E2++; jj2=0;
                        }}}





 stage++;//nombre dee stage
 //si la des joueur a utilisée tt ces carte
      if (i1==0)
        {system("color 3F");//vouler d'acceuuile
         system ("CLS");
        printf ("\n\n\n"); stop=1;n++;
       smile (1,E1, E2,score(joueur1,i1),score(joueur2,i2),stage);//wiinnnerrrrr!!!

        }
       else
       { if (i2==0)
           {system("color 3F");
           system ("CLS");
            printf ("\n\n\n"); stop=1;n++;
            smile (2,E1, E2,score(joueur1,i1),score(joueur2,i2),stage);}}
        }

if (n<2)
       printf("\nune nouvelle partie sera lancer!!\n");
else
   a=exite();}

return 0; }
