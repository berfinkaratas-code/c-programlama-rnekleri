#include <stdio.h>

int main()
{
 
 int x,y;
 int toplam=0;
 int i=0;
 
 scanf("%d %d",&x,&y);
 while(i<x){
     toplam +=y;
     i+=1;
 }
 printf("%d",toplam);
 

    return 0;
}
