#include<stdio.h>
#include<time.h>
#include<stdlib.h>


main(){
	
	char T1[10][10]={{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'}};
	char T2[10][10]={{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'}};
	char PC[10][10]={{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_','_','_'}};
	int i, j, a=0, b=0, c=0, h, k;
	
	srand(time(NULL));
	
	printf("\t\t J1 \t\t\t\t PC\n");
	printf("   0  1  2  3  4  5  6  7  8  9\t    0  1  2  3  4  5  6  7  8  9\n");
	for(i=0;i<10;i++){
		printf("%d", i);
		for(j=0;j<10;j++){
			printf("  %c", T1[i][j]);
		}
		printf("\t %d", i);
		for(j=0;j<10;j++){
			printf("  %c", T2[i][j]);
		}
		printf("\n");
	}
	while(a<10){
		i=(rand()%10)+0;
    	j=(rand()%10)+0;
    	if(PC[i][j]=='_'){
			T2[i][j]='o';
			PC[i][j]='o';
			a++;
    	}
	}
	a=0;
	while(a<10){
		i=-1, j=-1;
		printf("Da coordenadas para colocar tu barco #%d: ", a+1);
		scanf("%d %d", & i, & j);
		if(T1[i][j]=='_'){
			T1[i][j]='o';
			a++;
			printf("\t\t J1 \t\t\t\t PC\n");
			printf("   0  1  2  3  4  5  6  7  8  9\t    0  1  2  3  4  5  6  7  8  9\n");
			for(i=0;i<10;i++){
				printf("%d", i);
				for(j=0;j<10;j++){
					printf("  %c", T1[i][j]);
				}
				printf("\t %d", i);
				for(j=0;j<10;j++){
					printf("  %c", T2[i][j]);
				}
				printf("\n");
			}
		}
		if(T1[i][j]=='o'){
			printf("Ya hay un barco en las coordenadas: %d %d\n", i, j);
		}
		if(i==-1 || j==-1){
			printf("CARACTERES NO CARNAL!\nYa lo arruinaste.");
			return 0;
		}
	}
	a=0;
	while(a<10){
		printf("Da coordenadas para lanzar un misil: ");
		scanf("%d %d", & i, & j);
		if(PC[i][j]=='o' || PC[i][j]=='_'){
			do{
				k=(rand()%10)-1;
    			h=(rand()%10)-1;
    			if(T1[k][h]=='_'){
					b=1;
				}
				if(T1[k][h]=='o'){
					b=2;
					c++;
				}
				if(T1[k][h]=='Q'){
					b=3;
				}
				if(T1[k][h]=='x'){
					b=4;
				}
    			switch(b){
					case 1:
						T1[k][h]='Q';
						b=0;
						break;
					case 2:
						T1[k][h]='x';
						printf("Te están partiendo tu mandarina en gajos");
						b=0;
						break;
					case 3:
						b=1;
						break;
					case 4:
						b=1;
						break;
    			}
			}while(b==1);
		}
		if(c==10){
			printf("YA PERDISTE, NO RIFAS!");
			break;
		}
		if(PC[i][j]=='o'){
			T2[i][j]='x';
			PC[i][j]='x';
			a++;
			printf("\t\t J1 \t\t\t\t PC\n");
			printf("   0  1  2  3  4  5  6  7  8  9\t    0  1  2  3  4  5  6  7  8  9\n");
			for(i=0;i<10;i++){
				printf("%d", i);
				for(j=0;j<10;j++){
					printf("  %c", T1[i][j]);
				}
				printf("\t %d", i);
				for(j=0;j<10;j++){
					printf("  %c", T2[i][j]);
				}
				printf("\n");
			}
		printf("ESTAS QUE FLIPAS CHAVAL!\n");
		}
		if(T2[i][j]=='x' || T2[i][j]=='Q'){
			printf("Ya has lanzado un misil en las coordenadas %d %d\n", i, j);
		}
		if(PC[i][j]=='_'){
			T2[i][j]='Q';
			PC[i][j]='Q';
			printf("\t\t J1 \t\t\t\t PC\n");
			printf("   0  1  2  3  4  5  6  7  8  9\t    0  1  2  3  4  5  6  7  8  9\n");
			for(i=0;i<10;i++){
				printf("%d", i);
				for(j=0;j<10;j++){
					printf("  %c", T1[i][j]);
				}
				printf("\t %d", i);
				for(j=0;j<10;j++){
					printf("  %c", T2[i][j]);
				}
				printf("\n");
			}
			printf("PERDEDOR! :(\n");
		}
	}
	printf("YA LE HICISTE CAPIRUCHO! ;)");
	return 0;
}
