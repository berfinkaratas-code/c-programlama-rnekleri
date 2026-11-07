#include <stdio.h>

int main()
{
 int x,y,z;
 int t;
 
 scanf("%d %d %d",&x,&y,&z); 
 
 if(x>y && x>z){
     t=x;}
     
     else{
         if(y>z)
         t=y;
         else
         t=z;
     
 }
 printf("%d",t);

    return 0;
}
