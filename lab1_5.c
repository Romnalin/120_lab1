#include <stdio.h>
int main ()
{
   int N,i,n,max,lo ;

   scanf("%d",&N);

  for(i=0; i<N; i++)
    {
        scanf("%d",&n);
        if(i==0 || n>max)
        {
            max=n;
            lo=i+1;
        }
    }

     printf("%d %d\n",lo,max);
     return 0 ;
}
