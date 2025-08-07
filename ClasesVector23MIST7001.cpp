#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(){
	char dia[7][10]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
	int a;
	char ch;
	while((ch=_getch())!=27){
  system("cls");
	printf("\n Este programa e impreme los dias de la semana. Elige un numero: del dia de la semana: \n");
	scanf("%d",&a);
	  system("cls");
	if(a<1||a>7){
		
		printf("\n Error de opcion");
	printf("\n Pulse esc si desea salir.");
	}
	else 
	{
		printf("El dia seleccionado es: %s \n",dia[a-1]);
		printf("\n Pulse esc si desea salir.");
	}
	getch();
}
}
	

