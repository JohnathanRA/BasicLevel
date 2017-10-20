#include<stdio.h>

int main(){
	
	int i, t;
	
	do{
		printf("Escoge una opcion: \n1.-Comer. \n2.-Pagar. \n3.-Caminar. \n4.-Cerrar. \n");
		scanf("%d", & t);
		switch(t){
			case 1:
				printf("Usted va a comer...\n \n");
				break;
			case 2:
				printf("Usted va a pagar...\n \n");
				break;
			case 3:
				printf("Usted va a caminar...\n \n");
				break;
		}
	}while(t!=4);
	printf("Usted saldra.");
	return 0;
}
