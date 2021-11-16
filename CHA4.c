#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int nbr,som,max;
    nbr=1;
    printf("entrez une serie de nombre d'entier, pour fair stop entrez 0.\n");

    while(nbr!=0)
        {
            do
                {
                    scanf("%d",&nbr);
                    if(nbr>100){
                        printf("enterz un nombre entier inferieur ou egale a 100\n");
                    }

                }

            while(nbr>100);
            som+=nbr;
            if (nbr>max)
                {
                    max=nbr;
                }
            printf("la somme est: %d\n",som);
            printf("le maximum de cette serie est: %d\n",max);
            system("pause");

        }
    return 0;
}
