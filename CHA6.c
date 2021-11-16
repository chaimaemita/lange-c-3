#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,p,i,tst;
    printf("entrez le compteur:\n");
    scanf("%d",&n);

    for(p=2;p<=n;p++)
    {
      tst=1;
      for(i=2;i<p;i++)
      {
          if(p%i==0)
          {
              tst=0;
              break;
          }

      }
      if(tst==1)
      printf("%d\n",p);

    }

    return 0;

}
