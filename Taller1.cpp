#include <stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#include <time.h>
#include <ctime>

/*Taller N.1
Fecha:10 Febrero 2018
Elaborado por:Viviana Rojas Ruiz y Alejandro Gonzalez*/
struct promedio{
	float nota1;
	float nota2;
	float nota3;	
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	float totalProm;
	struct promedio notas;
}estudiante[100];

struct prom {
	float nota1;
	float nota2;
	float nota3;
};
struct estudiantes{
	char nombre [20];
	float totalProm;
	struct prom promedio;
}alumnos[100],aux[100];

struct Competidores
{
	char nombre[30];	
	char sexo[10];
	char club[30];
	char categoria[20];
	int edad;	
};

void Menu();
void while1a();
void while1b();
void while1c();
void for2a();
void for2b();
void for2c();
void arreglos3a();
void arreglos3b();
void arreglos3c();
void switch4a();
void switch4b();
void switch4c();
void matrices5a();
void matrices5b();
void matrices5c();
void estructuras6a();
void estructuras6b (Competidores v[]);
void estructuras6c();
void estructuras6d();
int tam;

int main() {
	Menu();
	return 0;
}

void Menu(){
	int opcion;
	Competidores v[100];
	do{
		printf("\n<<<<<<<<<<<<<MENU>>>>>>>>>>>>>>\n");
		printf("\nIngrese una de las siguientes Opciones:\n\n");
		printf("**************************************\n");
		printf("*     1.Ejercicios con While         *\n");
		printf("*     2.Ejercicios con Ciclo For     *\n");
		printf("*     3.Ejercicios con Array         *\n");
		printf("*     4.Ejercicios con Switch        *\n");
		printf("*     5.Ejercicios con Matrices      *\n");
		printf("*     6.Ejercicios con Estructuras   *\n");
		printf("*     0.Salir                        *\n");
		printf("**************************************\n");
		scanf("%d",&opcion);
		switch(opcion){	
		case 0:
			exit(0);
		case 1:	
			while1a();
			while1b();
			while1c();			
			break;
			
		case 2:
			for2a();
			for2b();
			for2c();
			break;
		case 3:
			arreglos3a();
			arreglos3b();
			arreglos3c();
			break;
		case 4:
			switch4a();
			switch4b();
			switch4c();			
			break;
		case 5:
			matrices5a();
			matrices5b();
			matrices5c();
			break;
		case 6:
			estructuras6a();
			estructuras6b(v);
			estructuras6c();
			estructuras6d();
			break;
		default:
			printf("Opcion Incorrecta");
		}
	}while(opcion!=0);
}

void while1a(){
	printf("\nPrograma que Suma los numeros del 1 al 100.\n");
	printf("-----------------------------------------------");
	int i=0;
	int suma=0;
	while(i<100){
		i++;
		suma=suma+i;		
	}
	printf("\nSumatoria==> %d\n",suma);
}

void while1b(){
	printf("\nSumatoria de los Numeros Pares del 1 al 50.\n");
	printf("--------------------------------------------------");
	int i=0;
	int sumaPares=0;
	while(i<=50){		
		sumaPares=sumaPares+i;
		i+=2;
	}
	printf("\nResultado==> %d\n",sumaPares);
}

void while1c(){
	printf("\nSumatoria de los numeros Impares del 1 al 50.\n");
	printf("----------------------------------------------------");
	int i=1;
	int sumaImpares=0;
	while(i<=50){		
		sumaImpares=sumaImpares+i;
		i+=2;
	}	
	printf("\nResultado==> %d\n",sumaImpares);
}

void for2a(){
	printf("\nImprime las Tabla del Multiplicar del 1 al 20.\n");
	printf("----------------------------------------------------");
	int i,num;
	int tabla;
	printf("\nIngrese un Numero: ");
	scanf("%d",&num);
	printf("Tabla de Multiplicar del Numero %d\n",num);
	for(i=1;i<=20;i++){
		tabla = num*i;
		printf("%d * %d = %d\n",num,i,tabla);
	}	
}

void for2b(){
	printf("\nPrograma que soluciona el factorial de un numero.\n");
	printf("------------------------------------------------------");
	int i,num;
	int factorial=1;
	printf("\nIngrese un numero: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		factorial=factorial*i;
	}
	printf("\nFactorial del numero %d es: %d\n",num,factorial);
}

void for2c(){
	printf("\nPrograma que soluciona la secuencia Fibonacci hasta un numero ingresado.\n");
	printf("-----------------------------------------------------------------------------");
	int c,num;
	int a=0;
	int b=1;
	printf("\nIngrese un numero: ");
	scanf("%d",&num);
	printf("\nSecuencia Fibonacci\n");
	for(int i=0;i<=num;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}	
}

void arreglos3a(){
	printf("\nPrograma que muestra en Pantalla los elementos de un Array.\n");
	printf("---------------------------------------------------------------");
	int i;
	float vec [4]={32.583,11.239,45.781,22.237};
	printf("\nElementos que contiene el Vector\n");
	for(i=0;i<4;i++){
		printf("%.3f\n",vec[i]);
	}	
}

void arreglos3b(){
	printf("\nPrograma que muestra en pantalla un array de num1 x num2 con ceros y unos.\n");
	printf("------------------------------------------------------------------------------");
	int num1;
	int num2;
	int matriz[100][100];
	printf("\nIngrese 2 numeros:\n");
	scanf("%d%d",&num1,&num2);	
	
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			if (i==j){
				matriz[i][j]=1;
			}else{
				matriz[i][j]=0;
			}
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}	
}

void arreglos3c(){
	printf("\nArreglo de 4 x 4 en la primera columna muestra el numero ingresado en la segunda");
	printf ("el numero elevado al cuadrado en la tercera elevado al cubo y en la cuarta elevado a la cuarta\n");
	printf("-------------------------------------------------------------------------------------------------");
	int matriz[4][4];
	int a,b,x;
	printf("\nIngrese 4 numeros\n");
	for(a=0;a<=3;a++){		
		scanf("%d",&x);
		for (b=0;b<=3;b++){
			matriz[a][b]=x;			
		}
	}
	for(a=0;a<=3;a++){
		printf("\n");
		for (b=0;b<=3;b++){
			printf("  ");    
			if(b==1){
				matriz[a][b]=pow(matriz[a][b],2);        
			}
			if(b==2){
				matriz[a][b]=pow(matriz[a][b],3);        
			}
			if(b==3){
				matriz[a][b]=pow(matriz[a][b],4);        
			}			
			printf("%d",matriz[a][b]);			
		}  
	}	
}

void switch4a(){
	printf("\nConsultar el mes del sistema e imprimirlo en español\n");
	printf("--------------------------------------------------------");
	struct tm * tiempo;
	int mes;
	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);
	mes=tiempo->tm_mon+1;
	printf("\nEl mes del sistema es:");
	switch (mes){
	case 1:{
		printf("\nEnero \n");
		break;
	}
	case 2:{
		   printf("\nFebrero \n");			
		   break;
		}
	case 3:{
			printf("\nMarzo \n");
			break;
		}
	case 4:{
			printf("\nAbril \n");
			break;
		}
	case 5:{
			printf("\nMayo \n");
			break;
		}
	case 6:{
			printf("\nJunio \n");
			break;
		}
	case 7:{
			printf("\nJulio \n");
			break;
		}
	case 8:{
			printf("\nAgosto \n");
			break;
		}
	case 9:{
			printf("\nSeptiembre \n");
			break;
		}
	case 10:{
		   printf("\nOctubre \n");
		   break;
		}
	case 11:{
			printf("\nNoviembre \n");
			break;
		}
	case 12:{
			printf("\nDiciembre \n");
			break;
		}
	default:{
		    printf("\nError \n");
			break;
		}
	}
	printf( "\n");    
	system("pause");
}

void switch4b(){
	printf("\nPrograma que muestra el codigo Ascii de una vocal ingresada\n");
	printf("---------------------------------------------------------------");
	char vocal;
	printf("\nIngrese una vocal\n");
	scanf("%c",&vocal);
	printf("\n<<<<<<Codigo Ascii>>>>>>\n");
	switch(vocal){
	case 'a':
		printf("Alt+97\n");
		break;
	case 'e':
		printf("Alt+101\n");
		break;
	case 'i':
		printf("Alt+105\n");
		break;
	case 'o':
		printf("Alt+111\n");
		break;
	case 'u':
		printf("Alt+117\n");
		break;
	}	
}

void switch4c(){
	printf("\nPrograma que muestra el codigo Ascii de un numero ingresado del 0 al 9\n");
	printf("--------------------------------------------------------------------------");
	int num;
	printf("\nIngrese un numero del 0 al 9\n");
	scanf("%d",&num);
	printf("Codigo Ascii\n");
	switch(num){
	case 0:
		printf("Alt+48\n");
		break;
	case 1:
		printf("Alt+49\n");
		break;
	case 2:
		printf("Alt+50\n");
		break;
	case 3:
		printf("Alt+51\n");
		break;
	case 4:
		printf("Alt+52\n");
		break;
	case 5:
		printf("Alt+53\n");
		break;
	case 6:
		printf("Alt+54\n");
		break;
	case 7:
		printf("Alt+55\n");
		break;
	case 8:
		printf("Alt+56\n");
		break;
	case 9:
		printf("Alt+57\n");
		break;
	}	
}

void matrices5a(){
	printf("\nPrograma de una matriz de 3 x 3 ingresada por el usuario y al final se muestra la sumatoria de los elementos de la matriz");
	printf("\n------------------------------------------------------------------------");
	int matriz[3][3];
	int sumatoria[3][3];
	
	printf("\nIngrese numeros:\n");	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){			
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("\n");
	printf("Mostrando Matriz\n");	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" ");
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Mostrando Sumatoria de la Matriz\n");	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" ");
			sumatoria[i][j]=matriz[i][j]+matriz[i][j];
			printf("%d",sumatoria[i][j]);
		}
		printf("\n");
	}	
}

void matrices5b(){
	printf("\nMatriz de 3 x 3 llenada de manera automatica por el sistema\n");
	printf("---------------------------------------------------------------");
	int matriz[3][3];	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){			
			matriz[i][j]=rand()%100;
		}
	}
	printf("\n");
	printf("Mostrando Matriz\n");	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" ");
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}	
}

void matrices5c(){
	printf("\nPrograma que genera numeros primos y llena una matriz\n");
	printf("---------------------------------------------------------");
	int v[9];
	int x=0;
	int matriz[3][3];
	for (int j=2;j<=23;j++){
		int a=0;
		for(int i=1;i<=23;i++){
			if(j%i==0){
				a++;
			}				
		}
		if (a==2){
			v[x]=j;
			x++;
		}		
	}
	printf("\nNumeros Primos\n");
	for(int i=0;i<9;i++){
		printf("%d\n",v[i]);
	}
	int c=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=v[c];
			c++;
		}
	}
	printf("Mostrando Matriz con Numeros Primos\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}	
}

void estructuras6a(){
	printf("\n Programa que recibe 3 notas de N alumnos y muestra su promedio en orden.\n");
	printf("-----------------------------------------------------------------------------");
	int i,j,cantidad;	
	printf("\nIngrese cantidad de estudiantes: ");
	scanf("%d",&cantidad);
	for(i=0;i<cantidad;i++){
		printf("\n%i.Ingrese Nombre del estudiante\n",i+1);
		fflush(stdin);
		fgets(alumnos[i].nombre,20,stdin);
		printf("%i.Ingrese las 3 Notas del alumno:\n",i+1);
		scanf("%f %f %f",&alumnos[i].promedio.nota1,&alumnos[i].promedio.nota2,&alumnos[i].promedio.nota3);
		alumnos[i].totalProm=(alumnos[i].promedio.nota1+alumnos[i].promedio.nota2+alumnos[i].promedio.nota3)/3;
	}
	printf("\n<<<<<<Listados de alumnos con promedio>>>>>>>\n");
	for(i=0;i<cantidad;i++){
		printf("%s%.1f\n",alumnos[i].nombre,alumnos[i].totalProm);
	}
	for(i=0;i<cantidad;i++){
		for(j=0;j<cantidad;j++){
			if(alumnos[j].totalProm < alumnos[j+1].totalProm){
				aux[j]=alumnos[j];
				alumnos[j]=alumnos[j+1];
				alumnos[j+1]=aux[j];				
			}
		}		
	}
	printf("\nMostrando Lista de Promedios en Orden\n");
	for(i=0;i<cantidad;i++){
		printf("%s ==> %.1f\n",alumnos[i].nombre,alumnos[i].totalProm);
	}	
}

void estructuras6b(Competidores v[]){
	printf("\nPrograma que muestra los datos de un competidor ingresados por el usuario\n");
	printf("-----------------------------------------------------------------------------");
	printf("\nIngrese Cantidad de Competidores:\n");
	scanf("%d",&tam);
	printf("\nIngrese Datos de los Competidores:\n");	
	for (int i=0;i<tam;i++){
		fflush(stdin);
		printf("Nombre: ");
		fgets(v[i].nombre,30,stdin);
		
		printf("Edad: ");
		scanf("%d",&v[i].edad);
		
		fflush(stdin);
		printf("Sexo: ");
		fgets(v[i].sexo,10,stdin);
		
		fflush(stdin);
		printf("Club: \n\n");
		fgets(v[i].club,30,stdin);
		
		if(v[i].edad<=15){
			strcpy(v[i].categoria, "Infantil");
		}
		else if(v[i].edad<=30){
			strcpy(v[i].categoria, "Joven");
		}else{
			strcpy(v[i].categoria, "Mayor");
		}
	}	
	printf("<<<<Listado de Competidores>>>>\n");	
	for(int i=0;i<tam;i++){
		printf("Nombre: %s\n Edad: %d\n Sexo: %s\n Club: %s\n Categoria: %s\n\n",v[i].nombre,v[i].edad,v[i].sexo,v[i].club,v[i].categoria);
	}
	
}

void estructuras6c(){
	printf("\nPrograma que imprime los datos de un estudiante y su promedio\n");
	printf("-----------------------------------------------------------------");
	int i=1;
	printf("\nIngrese datos del alumno\n");
	printf("Nombre: ");
	fflush stdin;
	fgets(estudiante[i].nombre,20,stdin);
	printf("\nEdad: ");
	scanf("%d",&estudiante[i].edad);
	printf("\nSexo: ");
	fflush stdin;
	fgets(estudiante[i].sexo,20,stdin);
	printf("\nNota 1. ");
	scanf("%f",&estudiante[i].notas.nota1);
	printf("\nNota 2. ");
	scanf("%f",&estudiante[i].notas.nota2);
	printf("\nNota 3. ");
	scanf("%f",&estudiante[i].notas.nota3);	
	estudiante[i].totalProm=(estudiante[i].notas.nota1+estudiante[i].notas.nota2+estudiante[i].notas.nota3)/3;
	printf("\n<<<<<Mostrando Datos del Estudiante>>>>>>>\n");
	printf("Nombre: %s",estudiante[i].nombre);
	printf("\nEdad: %d",estudiante[i].edad);
	printf("\nSexo: %s",estudiante[i].sexo);
	printf("\nPromedio: %.1f",estudiante[i].totalProm);	
}

void estructuras6d(){
	printf("\nPrograma que imprime el mayor y menor promedio de un listado de varios estudiantes ingresados por el usuario\n");
	printf("--------------------------------------------------------------------");
	int num,posMayor,posMenor;
	float pmayor=0.0;
	float pmenor=9.0;
	printf("\nIngrese cantidad de alumnos\n");
	scanf("%d",&num);
	printf("Ingrese datos del alumnos\n");
	for(int i=0;i<num;i++){
		printf("%i.Nombre: ",i+1);
		fflush stdin;
		fgets(estudiante[i].nombre,20,stdin);
		printf("\n%i.Edad: ",i+1);
		scanf("%d",&estudiante[i].edad);
		printf("\n%i.Sexo: ",i+1);
		fflush stdin;
		fgets(estudiante[i].sexo,20,stdin);
		printf("\n%i.Nota 1. ",i+1);
		scanf("%f",&estudiante[i].notas.nota1);
		printf("\n%i.Nota 2. ",i+1);
		scanf("%f",&estudiante[i].notas.nota2);
		printf("\n%i.Nota 3. ",i+1);
		scanf("%f",&estudiante[i].notas.nota3);	
		estudiante[i].totalProm=(estudiante[i].notas.nota1+estudiante[i].notas.nota2+estudiante[i].notas.nota3)/3;
		if(estudiante[i].totalProm>pmayor){
			pmayor=estudiante[i].totalProm;
			posMayor=i;
		}
		if(estudiante[i].totalProm<pmenor){
			pmenor=estudiante[i].totalProm;
			posMenor=i;
		}
	}
	printf("\n<<<<<Mostrando Datos>>>>>>>\n");
	printf("\nMayor Promedio\n");
	printf("Nombre:%s Edad:%d Sexo:%s Promedio:%.1f ",estudiante[posMayor].nombre,estudiante[posMayor].edad,estudiante[posMayor].sexo,estudiante[posMayor].totalProm);
	
	printf("\n\nMenor Promedio\n");
	printf("Nombre:%s Edad:%d Sexo:%s Promedio:%.1f ",estudiante[posMenor].nombre,estudiante[posMenor].edad,estudiante[posMenor].sexo,estudiante[posMenor].totalProm);
	
}
