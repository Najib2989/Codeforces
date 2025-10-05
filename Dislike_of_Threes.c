#include <stdio.h>

int main() {
   int t;
   scanf("%d",&t);
   for(int i=0; i<t; i++)
   {
       int k;
       scanf("%d",&k);
       for(int i=1; i<=k; i++){
           if(i%3==0 || i%10==3){
               k++;
           }
       }
       printf("%d\n",k);

   }


    return 0;
}
