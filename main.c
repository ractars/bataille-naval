#include <stdio.h>
#include <stdlib.h>






int main()
{






    int bateau[4];
	int map1 [100][100]={0};
	int map2 [100][100]={0};
	int i=0;
	int j=0;
	int k = 0;
	int tailleX = 0;
	int tailleY = 0;
	int xj1 = 0;
	int yj1 = 0;



    printf ("entrer la longueur du tableau : ");
    scanf ("%d", &tailleX);
    fflush(stdin);
    printf ("entrer la largeur du tableau : ");
    scanf("%d", &tailleY);
    fflush(stdin);

    for (i=0; i<5 ;i++){
            xj1 =rand()%(tailleX+1);
            yj1 = rand()%(tailleY+1);
            for(j=0; j<5; j++){
                map1[xj1][yj1] = i;
                map1[xj1+1][yj1] = i;
            }
    }
	for (i =0 ; i<tailleX; i++){
	    printf("\n");
	    for (j = 0; j<tailleY; j++){
           map1[i][j]=0;
           printf("%d ", map1[i][j]);

        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    for (i =0 ; i<tailleX; i++){
	    printf("\n");
	    for (j = 0; j<tailleY; j++){
           map2[i][j]=0;
           printf("%d ", map2[i][j]);

        }
    }










	return 0;
}
