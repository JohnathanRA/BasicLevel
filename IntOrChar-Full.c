#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int isvocal(char v);

int main(){
	char arre[5];
	int i;
	int r;
	
	printf("Dame una cadena de caracteres (Tu maximo son 100 caracteres): ");
		scanf("%s", arre);
		
	for(i=0;i<strlen(arre);i++){
		if(isdigit(arre[i])){
			printf("El carácter %c es un digito.\n", arre[i]);
		}
		else{
			if(isalpha(arre[i])){
				r = isvocal(arre[i]);
				if(r == 0){
					printf("El caracter %c es una consonante.\n", arre[i]);
				}
				else{
					printf("El caracter %c es una vocal.\n", arre[i]);
				}
			}
			else{
				printf("El caracter %c no es ninguno de los anteriores.\n", arre[i]);
			}
		}
	}
		
	return 0;
}
int isvocal(char v){	
	int i;
	char vocal[10]={'a','e','i','o','u','A','E','I','O','U'};
	int a=0;
	
	for(i = 0;i < 10;i++){
		if(v == vocal[i]){
			a++;
		}
	}
	if(a==0){
		return 0;
	}
		return 1;
}
