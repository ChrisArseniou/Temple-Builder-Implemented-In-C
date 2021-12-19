
/*Programma pou lamvanei twn arithmo ton kionwn kai typvnei ton antistixo nao*/

#include <stdio.h>

int main(int argc ,char *argv[]){
	
	int kiones;
	int i,l,m,k,n;
	
	printf("Enter number of columns: ");
	scanf("%d" , &kiones);
	printf("\n\n");
	
	i=0;
	k=1;
	n=0;
	l=1;
	
	/*elegxo an o arithmos twn kionon einai artios h perritos*/
	if(kiones % 2 == 0){
		while(i<kiones/2){
			/*Ksekiname typonontas apo thn koryfh*/
			/*Parathrw oti ta kena ayksanontai me ton ekseis rithmo*/
			
			for(m=1; m<=(4*kiones - 8*k); m++){ 
			printf(" ");
			}
			printf("__..--''");
		
			for(l=0;l<(n);l++){
				printf(" ");
			}
			printf("''--..__\n");
			i++;
			k=k+1;	
			n=n+16;
		}
	}
	/*an oi kiones einai perittos arithmos ta kena auksanontai me diaforetiko rythmo ,kathos episis allazei kai h koryfh*/
	else {
		for(m=0; m<(((8*kiones)/2-4)); m++){
			printf(" ");
			}
		printf("_.-'");
		printf("'-._");
		printf("\n");
		n=12;
		k=8;
		while(i<(kiones/2)){
			for(m=1; m<=((8*kiones)/2-n); m++){
			printf(" ");
			}
			printf("__..--''");
			for(l=0;l<(k);l++){
				printf(" ");
				}
			printf("''--..__\n");
			i++;
			k=k+16;	
			n=n+8;
		}
	}
	/* Parathrw oti ta '=' isountai me kiones*8 */
	for(i=0;i<kiones;i++){
		l=0;
		while(l<8){
			printf("=");
			l++;
		}
	}
	printf("\n");
	
	/* Ta '[]' isountai me kiones * 4 */
	for(i=0;i<kiones;i++){
		l=0;
		while(l<4){
			printf("[]");
			l++;
		}
	}
	printf("\n");
	/*Ta '@.==.@' isountai me tous kiones*/
	for(i=0;i<kiones;i++){
		printf(" ");
		printf("@.==.@");
		if(i == kiones - 1){
			printf("\n");
		}
		else{
			printf(" ");
		}
	}
	
	/*Exoyme 7 seires me '|''|'  , enw oi kathetes isountai me toys kiones*/
	for(l=0;l<7;l++){
		printf("  ");
		printf("|''|");   
		i=1;
		do{ 
			printf("    ");
			printf("|''|");
			i++;
		}while(i<kiones);
		printf("\n");
	}
	/*emfanizoume tin teleftaia seira h opoia apotelei thn vash*/
	printf("  ");
	printf("|''|");
	i=1;
	
	do {
		for(l=0;l<4;l++){
		printf("_");
		}
		printf("|''|");
		i++;
	}while(i<kiones);
	
	printf("\n");
	
	printf("  ");
	for(l=0; l<(8*kiones-4); l++){  /*H prwth seira apo '=' isoutai me 8*kiones-4* '='*/
		printf("=");
	}
	
	printf("\n");
	
	printf(" ");
	for(l=0; l<(8*kiones-2); l++){ /*H deuterh seira apo '=' isoutai me 8*kiones-2 '='*/
		printf("=");
	}
	
	printf("\n");
	for(l=0;l<(8*kiones);l++){ /*Enw h trith apoteleitai apo 8*kiones '='*/
		printf("=");
	}
	printf("\n\n");
	
	return(0);
}
