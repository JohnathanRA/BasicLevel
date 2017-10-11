#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int isvocal(char v);

int main(){
	char arre[10];
	int i;
	int r;
	int b=0;
	int c=0;
	int d=0;
	
	printf("Dame una cadena de caracteres (Tu maximo son 100 caracteres): ");
		scanf("%s", arre);
		
	for(i=0;i<strlen(arre);i++){
		if(isdigit(arre[i])){
			b++;
		}
		else{
			r = isvocal(arre[i]);
			if(r == 0){
				c++;
		    }
			else{
				d++;
			}
		}
	}
	
	printf("El total de numeros es: %d \n", b);
	printf("El total de consonantes es: %d \n", c);
	printf("El total de vocales es: %d \n", d);
	
	return 0;
}
int isvocal(char v){	
	int i;
	char vocal[10]={'a','e','i','o','u','A','E','I','O','U'};
	
	for(i = 0;i < 10;i++){
		if(v == vocal[i]){
			i=11;
		}
	}
	if(i<=10){
		return 0;
	}
		return 1;
}
