#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nbr,p=0,i;

    printf("entrez un nombre:\n");
    scanf("%d",&nbr);

    printf("le nombre est: %d",nbr);

    for(i=1;i<=nbr;i++)
        {
            if (nbr%i==0)
                {
                    p++;
                }
        }
        if(p==2)
            {
                printf("\n %d est un nombre premier",nbr);
            }
        else
            {
                printf("\n %d n'est pas un nombre premier",nbr);
            }
    return 0;
}
