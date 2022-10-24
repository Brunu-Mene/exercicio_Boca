#include <stdio.h>

int main()
{
	char c;
  int i=0;
  
  while(1)
  {
    scanf("%c",&c);
    if(i == 0){
      printf("RESP:");
      i = 1;
    }
    if((c=='.')||(c=='?')||(c=='!')){
      printf("%c",c);
      break;
    }

    if(c != ' '){
      printf("%c",c);
    }
  }
	return 0;
}
