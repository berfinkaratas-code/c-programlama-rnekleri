include <stdio.h>

int main()
{
 
 int x,y;
 int toplam=0;
 int i=0;
 
 scanf("%d %d",&x,&y);
 for(i=0;i<x;i++){
     
     toplam+=y;
 }
 
 printf("%d",toplam);

    return 0;
}
