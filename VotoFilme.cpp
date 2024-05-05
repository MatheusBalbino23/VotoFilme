#include<stdio.h>
#include<stdlib.h>
#include<time.h>


main(){
	int opcao;
	int voto_ruim=0;
	int voto_regular=0;
	int voto_bom=0;
	int voto_excelente=0;
	int voto_geral=0;
	float porcentagem_ruim;
	float porcentagem_regular;
	float porcentagem_bom;
	float porcentagem_excelente;
	
	do{
		voto_geral++;
		_sleep(3000);
		system("cls");
		printf("O que vc achou do filme?\n");
		printf("1 - Ruim\n");
		printf("2 - Regular\n");
		printf("3 - Bom\n");
		printf("4 - Excelente\n");
		printf("Escolha sua opcao: ");
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1 : printf("Que pena, esperamos que vc goste do proximo filme\n");
					 voto_ruim++;
					 break;
			case 2 : printf("Obrigado pela sua opiniao\n");
					 voto_regular++;
					 break;
		    case 3 : printf("Legal que gostou. Volte sempre\n");
		    		 voto_bom++;
		    		 break;
		    case 4 : printf("Legal. Favor indicar o filme para seus colegas\n");
		             voto_excelente++;
		             break;
		    default: printf ("Opcao Invalida, favor escolher uma opcao correta\n");
		     	     break;
		}
		
	}while(opcao!=900);
	
		porcentagem_ruim = (float)voto_ruim / (voto_geral - 1) * 100;
		porcentagem_regular = (float)voto_regular / (voto_geral - 1) * 100;
		porcentagem_bom = (float)voto_bom / (voto_geral - 1) * 100;
		porcentagem_excelente = (float)voto_excelente / (voto_geral - 1) * 100;
	
	system("cls");
	printf("Resultado da Pesquisa\n");
	printf("Ruim ....: %.0f%%\n", porcentagem_ruim);
	printf("Regular .: %.0f%%\n", porcentagem_regular);
	printf("Bom .....: %.0f%%\n", porcentagem_bom);
	printf("Excelente: %.0f%%\n", porcentagem_excelente);
	
	}


