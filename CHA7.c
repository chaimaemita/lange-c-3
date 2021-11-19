#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i,Un,Un1=0,Un2=1;
    printf("entrez le nieme de la suite de FABIONACCI:\n");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        Un=(Un1)+(Un2);
        Un1=Un2;
        Un2=Un;

    }
    if(n<=1)
    {
        printf("U(%d)=1 \n",n);
    }
    else printf("U(%d) = %d \n",n,Un);


return 0;
}
