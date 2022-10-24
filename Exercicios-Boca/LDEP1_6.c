#include <stdio.h>

int main(){
	
	int l, c, i, j;
	int somaI = 0, atual, somaE = 0;

	scanf("%d %d", &l, &c);

	
	for (i = 0; i<l; i++){
		for(j = 0; j<c; j++){
			scanf("%d", &atual);
			somaI += atual;
		}
		printf("%d\n", somaI);
        somaE += somaI;
        somaI = 0;
	}

	printf("%d\n", somaE);

	return 0;
}
