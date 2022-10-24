#include <stdio.h>
#include <ctype.h>

int main() {
  char x;

  while(1)
  {
    scanf("%c",&x);
    printf("%c",toupper(x));
    if((x=='.')||(x=='?')||(x=='!')){
      break;
    }
  }
  return 0;
}