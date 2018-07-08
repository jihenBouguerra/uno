void verif (int carte[], int carte1[],int joueur1[],int joueur2[],int i1,int i2);// verifie quil existe encors des cartes a piocheés
int random (int l[]);// tirage aleatoir des cartes
int joueuur(int a , int x);// determine le joueur suivant la carte jouée precedament
char joker (int joueur  ); //saisie de couleur
int cas(int a,int t[],char c);// saisir de carte apres le chois de couleur
void affichecarte (int a,int t[108],int j); //affichage  des carte de chaque joeur
void affiche (int a);//affichage dune carte
int logic (int s,int c,int num,int rang,int t[108]);//la carte peut etre lancée ou paas
void remarque (int t[], int rang , int i, int k); // remarque pour le joueur
void graf(); //affiche unooooo
void sg();// motif start game
int score (int t[], int a);// calcule des score
void smile (int joueur,int E1, int E2,int s1,int s2,int stage); //winnnerrrr fin stage
int exite (); //quitter le jeux
