#include <stdio.h>

int main()
{
  int x=1000;
  int i, k, m ,s;
  
  for(i=x;i<9999;i++){
      k=i/100;
      m=i%100;
      s=k*k + m*m;
      
      if(i==s)
      printf("%d",s);
  }

    return 0;
}
