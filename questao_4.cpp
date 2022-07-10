#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float sp = 67836.43, 
	rj = 36678.66, 
	mg = 29229.88, 
	es = 27165.48,
	outros = 19849.53;
			
float total = sp + rj + mg + es + outros;	

float percentual(float valor){
	float per;
	per = (valor * 100) / total;
	return per;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	
	
	printf("Percentual do estado de SP: %f%%\n", percentual(sp));
	printf("Percentual do estado de RJ: %f%%\n", percentual(rj));
	printf("Percentual do estado de MG: %f%%\n", percentual(mg));
	printf("Percentual do estado de ES: %f%%\n", percentual(es));
	printf("Percentual do estado de outros: %f%%\n", percentual(outros));
	
	return 0;
	
}
