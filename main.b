#include <stdio.h>

int main()
{
    
     int x,y,z ;
     int sonuc;
     
     scanf("%d %d %d", &x, &y, &z);
     if(x>y){
         if(z>x)
         sonuc= x;
         else{
             if(y>z)
             sonuc=y;
             else 
             sonuc=z;
         }
         
         
         
     } else{
         if(y>z){
             if(z>x)
             sonuc=z;
             else
             sonuc=x;
             
         } else sonuc=y ;
     }


printf("%d", sonuc);


    return 0;
    }
