#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int nbr,pow,res;
    printf("entrez le nombre: \n");
    scanf("%d",&nbr);

    printf("entrez le puissance: \n");
    scanf("%d",&pow);

    res= nbr;

    while(pow>1)
    {
        res *= nbr;
        pow--;
    }
    printf("la resultat est: %d",res);
    return 0;

}
