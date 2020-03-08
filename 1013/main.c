#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a, b, c, n;

 scanf("%d %d %d", &a, &b, &c);

 n = a;
 if(a < b || a < c){
  if(b > c){
   n = b;
  }else{
   n = c;
  }
 }

 printf("%d eh o maior\n", n);

 return 0;
}
