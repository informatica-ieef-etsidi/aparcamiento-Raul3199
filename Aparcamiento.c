//Desarrollador: Raúl Carrero Ramos
#include<stdio.h>
#include<stdlib.h>


void main() {

	int plaza1;
	int plaza2;
	char opcion;
	char matricula1[7];
	char matricula2[7];

	plaza1 = 0;
	plaza2 = 0;

	while (1) {
		
		printf("Seleccione una de estas opciones:\n");
		printf("R-Reservar plaza\n");
		printf("A-Abandonar plaza\n");
		printf("E-Estado del aparcamiento\n");
		scanf_s("%c", &opcion);

		system("cls");

		switch (opcion) {
		case 'R':
			if (plaza1 == 0 && plaza2 == 0) {
				printf("Ambas plazas se encuentran disponibles. Introduzca la matricula de su vehiculo \n");
				scanf_s("%s", &matricula1, 7);
				plaza1 = 1;
			}
			else if (plaza1 == 1 && plaza2 == 0) {
				printf("Plaza 2 disponible. Introduzca la matricula de su vehiculo\n");
				scanf_s("%s", &matricula2, 7);
				plaza2 = 2;
			}
			else if (plaza1 == 0 && plaza2 == 1) {
				printf("Plaza 1 disponible. Introduzca la matricula de su vehiculo\n");
				scanf_s("%s", &matricula1, 8);
				plaza1 = 1;
			}
			else if (plaza1 == 1 && plaza2 == 1) {
				printf("Disculpe las molestias pero ambas plazas estan ocupadas. Debera aparcar en otro lugar\n");
				system("Pause");
			}
			break;

	

		case 'A':
			printf("Seleccione la plaza que se dispone a abandonar: plaza1 o plaza2\n");
			scanf_s("%s", &plaza1);
			scanf_s("%s", &plaza2);
			if (plaza1 == plaza1) {
				printf("Se dispone a abandonar la plaza 1\n");
				plaza1 = 0;
				system("Pause");
			}
			else if (plaza2 == plaza2) {
				printf("Se dispone a abandonar la plaza2\n");
				plaza2 = 0;
				system("Pause");
			}
			break;



		case 'E':
			printf("En esta opocion usted puede comprobar el estado de los aparcamientos\n");
			if (plaza1 == 0  && plaza2 == 0) {
				printf("Ambos aparcamientos se encuentran libres\n");
				system("Pause");
			}
			else if (plaza1 == 0 && plaza2 == 1) {
				printf("La plaza 1 se encuentra disponible\n");
				printf("Plaza 2 ocupada. Matricula %s\n");
				system("Pause");
			}
			else if (plaza1 == 1 && plaza2 == 0) {
				printf("La plaza 2 se encuentra disponible\n");
				printf("Plaza 1 ocupada. Matricula %s\n");
				system("Pause");
			}
			else if (plaza1 == 1 && plaza2 == 1) {
				printf("Ambas plazas se encuentran ocupadas\n");
				printf("Plaza 1. Matricula %s\n");
				printf("Plaza 2. Matricula %s\n");
				system("Pause");
			}
			break;



			}


		}

	system("Pause");








	}




