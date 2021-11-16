#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int main()
 {
    int nbr,a,b,c;

    printf("entrez les valeurs a,b et c: \n");
    scanf("%d%d%d",&a,&b,&c);

    printf(" les valeurs sont: %d%d%d",a,b,c);

    while(nbr!=0)
    {
        a=nbr/100;
 	    nbr=nbr-a*100;
 	    b=nbr/10;
 	    nbr=nbr-b*10;
 	    c=nbr;
    }
    printf("\n le nombre inverse est: %d%d%d",c,b,a);
     return 0;
 }
