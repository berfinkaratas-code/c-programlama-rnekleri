#include <stdio.h>

int main()
{
 int n;
 int toplam=0,i=0;
 
 scanf("%d",&n);
 
 while(i<n){
     toplam+=i;
     i++;
 }
 printf("%d",toplam);

    return 0;
}
