#include <stdio.h> 
 
int main(void){  
 
  int liczba;  
 
  for ( ; (scanf("%d",&liczba) > 0) && (liczba != 42) ; printf("%d\n", liczba) );  
 
  return 0;
}
