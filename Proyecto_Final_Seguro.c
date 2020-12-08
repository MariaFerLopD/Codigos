/* 
Proyecto Final.
Nombre del Proyecto: Seguro de Vida 'Heba Insurance'. 
Objetivo: Programa que calcula un Seguro de Vida, con todos los requerimientos de un seguro de vida.

Universidad Nacional Autónoma de México.
Facultad de Estudios Superiores Acatlán.
Matemáticas Aplicadas y Computación.
Programación II.
Profesor: Andrés Orduz Ducuara.
Generación 2018. Segundo Semestre. 
Grupo: 2203.  Matutino. 
 
Fecha de Inicio: 18/Marzo/2018.
Fecha Limite de Entrega: 23-25/Mayo/2018.

Alumna: 
- López Díaz María Fernanda.
*/

#include<stdio.h>//Está librería contiene los archivos de cabecera, así como sus definiciones, las constantes, las declaraciones de funciones de la biblioteca estándar para hacer operaciones estándar, de entrada y salida.
#include<stdlib.h>//Está librería contiene prototipos de funciones para gestión de memoria dinámica, control de procesos, etc.
#include<locale.h>//Está librería contiene a la función setlocale() y las constantes relacionadas. Se utiliza para seleccionar el entorno local apropiado (configuración regional), es decir, configura el idioma.
#include<windows.h>//Es un archivo cabecera específico de Windows para la programación en lenguaje C/C++ que contiene las declaraciones de todas las funciones de la biblioteca Windows API.
#include<string.h>//Contiene un conjunto de funciones para manipular cadenas: copiar, cambiar caracteres, comparar cadenas, etc.
#include<math.h>//Es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C diseñado para operaciones matemáticas básicas.

int ConfiguraIdioma()//Está función configura el idioma en español.
{//Inicio de la Función que configura el idioma.
	struct lconv *lcPtr;
	setlocale(LC_ALL, "spanish");
	lcPtr = localeconv();
	lcPtr->decimal_point = ".";
	lcPtr->thousands_sep = ",";
	lcPtr->grouping = "3";	
}//Fin de la Función que configura el idioma.

int gotoxy(int x,int y)//Mueve el cursor de la ventana de texto a la posición según las coordenadas especificadas por los argumentos "x" y "y".
{//Inicio de la Función gotoxy.
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X =x;
	dwPos.Y =y;
	SetConsoleCursorPosition(hCon,dwPos);
}//Fin de la Función gotoxy.

int detalles1()//Marcos para detallar.
{//Inicio de la Función detalles1.
	int i;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleHandle, 14);//Sirve para ponerle color al fondo y/o al texto.
	
	for(i=1;i<=42;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	{//Inicio del for.
		gotoxy(35+i,2);
		printf("*");
		gotoxy(35+i,4);
		printf("*");
	}//Fin del for.
}//Fin de la Función detalles1.

int detalles2()//Marcos para detallar más grande.
{//Inicio de la Función detalles2.
	int i;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleHandle, 12);//Sirve para ponerle color al fondo y/o al texto.
	
	for(i=1;i<=53;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	{//Inicio del for.
		gotoxy(30+i,2);
		printf("*");
		gotoxy(30+i,4);
		printf("*");
	}//Fin del for.
}//Fin de la Función detalles2.

int presentacion_equipo()//Portada del proyecto.
{//Inicio de la Función presentacion_equipo.
	int i,j;//Variables de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleHandle, 14);//Sirve para ponerle color al fondo y/o al texto.
   	
	for(i=3;i<=70;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	{//Inicio del for.
		gotoxy(3+i,3);
		printf("#");
	}//Fin del for.
	
	for(j=2;j<=29;j++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	{//Inicio del for.
		gotoxy(74,2+j);
		printf("#");
		gotoxy(5,2+j);
		printf("#");	
	}//Fin del for.
	
	for(i=3;i<=70;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	{//Inicio del for.
		gotoxy(3+i,31);
		printf("#");
	}//Fin del for.
	
	SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	ConfiguraIdioma();//Configura el idioma español.
	gotoxy(34,5);//Coordenadas.
	gotoxy(11,5);//Coordenadas.
	printf("\t\t\tPROYECTO FINAL");//Texto que escribe en las coordenadas dadas anteriormente.
	gotoxy(11,8);//Coordenadas.
	printf("Cotización de un Seguro de vida.");//Texto que escribe en las coordenadas dadas anteriormente.
	gotoxy(11,10);//Coordenadas.
	printf("Objetivo: Programa que calcula un Seguro de Vida,");//Texto que hace referencia al objetivo del proyecto, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,11);//Coordenadas.
	printf("con todos los requerimientos de un seguro de vida.");//Texto que hace referencia al objetivo del proyecto, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,13);//Coordenadas.
	printf("Universidad Nacional Autónoma de México");//Texto que hace referencia a la Universidad a la que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,14);//Coordenadas.
	printf("Facultad de Estudios Superiores Acatlán");//Texto que hace referencia a la Facultad a la que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,15);//Coordenadas.
	printf("Matemáticas Aplicadas y Computación");//Texto que hace referencia a la Carrera a la que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,16);//Coordenadas.
	printf("Programación II");//Texto que hace referencia a la materia a la que pertenece el proyecto en cuestión, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,17);//Coordenadas.
	printf("Profesor: Andrés Orduz Ducuara");//Texto que hace referencia al profesor de dicha materia, lo escribe en las coordenadas dadas anteriormente 
	gotoxy(11,18);//Coordenadas.
	printf("Generación 2018. Segundo Semestre. ");//Texto que hace referencia a la generación y al semestre al que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,19);//Coordenadas.
	printf("Grupo: 2203.  Matutino.");//Texto que hace referencia al grupo y al turno al que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,21);//Coordenadas.
	printf("Fecha de Inicio: 18/Marzo/2018.");//Texto que hace referencia a la Fecha en la que se dejo y se inicio el proyecto, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,22);//Coordenadas.
	printf("Fecha Límite de Entrega: 23-25/Mayo/2018.");//Texto que hace referencia a la Fecha límite del proyecto, lo escribe en las coordenadas dadas anteriormente. 
	gotoxy(11,24);//Coordenadas.
	printf("Alumna:");//Texto que hace referencia al número del equipo, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,26);//Coordenadas.
	printf("-López Díaz María Fernanda.");//Texto que escribe en las coordenadas dadas anteriormente.
    printf("\n\n");//Da dos saltos de línea.
}//Fin de la Función presentacion_equipo.

int presentacion()//Breve introducción de Seguros de Vida HEBA INSURANCE.
{//Inicio de la Función presentacion.
	int i,j;//Variables de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
   	SetConsoleTextAttribute (hConsoleHandle, 11);//Sirve para ponerle color al fondo y/o al texto.
   	
	for(i=3;i<=110;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	{//Inicio del for.
		gotoxy(3+i,3);
		printf("#");
	}//Fin del for.
	
	for(j=2;j<=29;j++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	{//Inicio del for.
		gotoxy(114,2+j);
		printf("#");
		gotoxy(5,2+j);
		printf("#");	
	}//Fin del for.
	
	for(i=3;i<=110;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	{//Inicio del for.
		gotoxy(3+i,31);
		printf("#");
	}//Fin del for.
	
	SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	ConfiguraIdioma();//Configura el idioma español.
	gotoxy(34,5);//Coordenadas.
	gotoxy(18,5);//Coordenadas.
	printf("\t\t¡Bienvenido a Seguros de Vida 'HEBA Insurance'! ");//Texto que da una breve introducción a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,8);//Coordenadas.
	printf("HEBA Insurance Seguros, cuenta con una amplío catálogo de seguros de vida,");//Texto que da una breve introducción a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,9);//Coordenadas.
	printf("para nosotros su tranquilidad es muy importante, y que mejor que estar preparados");//Texto que da una breve introducción a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,10);//Coordenadas.
	printf("para ese tipo de situaciones.");//Texto que da una breve introducción a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,11);//Coordenadas.
	printf("Nosotros le brindaremos esa tranquilidad, nuestra calidad de trabajo");//Texto que da una breve introducción a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,12);//Coordenadas.
	printf("nos permite brindarle los mejores beneficios, logrando que tanto usted");//Texto que da una breve introducción a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,13);//Coordenadas.
	printf("como su familia, vivan felices y sin preocupaciones.");//Texto que da una breve introducción a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(17,15);//Coordenadas.
	printf("\t\t SI USTED ESTA INTERESADO POR FAVOR REVISE LO SIGUIENTE");//Texto que da una breve introducción a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,17);//Coordenadas.
	printf("Requerimientos para poder ser asegurado:");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,18);//Coordenadas.
	printf("»Ser mayor de 17 años y menor de 75.");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,20);//Coordenadas.
	printf("»Le solicitamos que tenga sus datos y documentos personales a la mano");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,21);//Coordenadas.
	printf("para agilizar el proceso de cotización.");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,23);//Coordenadas.
    printf("»Es importante llenar verídica y correctamente los datos solicitados en el trámite.");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,25);//Coordenadas.
	printf("Al finalizar el trámite, se le asignará un folio."); //Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,26);//Coordenadas.
	printf("Le pedimos amablemente que lo conserve para cualquier aclaración.");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,28);//Coordenadas.
	printf("Gracias por su atención. Presiona cualquier tecla para continuar...");//Texto que agradece por la atención y dice que al dar un click podrá continuar, lo escribe en las coordenadas dadas anteriormente.
	getch();//Retorna el carácter leído desde el teclado.
}//Fin de la Función presentacion.

struct datos_usuario //BASE QUE GUARDA LOS DATOS DEL USUARIO QUE QUIERE HACER EL TRÁMITE DEL SEGURO.
{//Inicio de la estructura datos_usuario. 

	char nombre[100];//Variable de tipo caracter.
	char sexo[2];//Variable de tipo caracter.
	char direccion1[100];//Variable de tipo caracter.
	char fecha_de_nacimiento[10];//Variable de tipo caracter.
	char conf_dep[2];//Variable de tipo caracter.
	char conf_trab[2];//Variable de tipo caracter.
	char conf_fumar[2];//Variable de tipo caracter.
	char conf_beber[2];//Variable de tipo caracter.
	char enfer[2];//Variable de tipo caracter.
	char enfermedad[20];//Variable de tipo caracter.
	char rfc[20];//Variable de tipo caracter.
	
	int edad;//Variable de tipo entero.
	int division_pago;//Variable de tipo entero.
	int coberturas_opcion;//Variable de tipo entero.
	
	double monto;//Variable de tipo doble precisión.
	double prima_edad;//Variable de tipo doble precisión.
	double prima_basica;//Variable de tipo doble precisión.
	double porcentaje_cobertura;//Variable de tipo doble precisión.
	double prima_total;//Variable de tipo doble precisión.
	double prima_n_cobertura;//Variable de tipo doble precisión.
	double extra_fumar;//Variable de tipo doble precisión.
	double extra_beber;//Variable de tipo doble precisión.
	double extra_deportes;//Variable de tipo doble precisión.
	double extra_trabajos;//Variable de tipo doble precisión.
	double suma_extras;//Variable de tipo doble precisión.
	double prima_sam_cobertura;//Variable de tipo doble precisión.
	double modos_pago;//variable de tipo doble precisión.
	double subtotal;//variable de tipo doble precisión.
	double iva;//variable de tipo doble precisión.
	double total;//variable de tipo doble precisión.
	
}usuario;//Fin de la estructura datos_usuario.

struct datos_beneficiario //BASE QUE GUARDA LOS DATOS DEL BENEFICIARIO.
{//Inicio de la estructura datos_beneficiario.
	char nombreb[50];//Variable de tipo caracter.
	char sexob[2];//Variable de tipo caracter.
	char direccion2[100];//Variable de tipo caracter.
	char fecha_de_nacimiento2[10];//Variable de tipo caracter.
	char paren[20];//Variable de tipo caracter.

	int edadb;//Variable de tipo entero.
	
}benef;//Fin de la estructura datos_beneficiario.

int si_fumo()//Función para cuando el usuario fuma.
{//Inicio de la Función si_fumo.
	int opcionf;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
	{//Inicio del do.
	printf("\n\t>¿Qué tan seguido fumas a la semana?(Elige una opción)\n");//Texto que pregunta al usuario qué tan seguido fuma.
	printf("\t 1-Muy seguido\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
	printf("\t 2-De vez en cuando\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
	printf("\t 3-Rara vez\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
	printf("\t 4-Casi nada\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
	printf("\t Opción: ");//Texto que pide al usuario que ingrese la opción que corresponda a sus hábitos.
	scanf("%d",&opcionf);//Recibe el valor que el usuario ingreso. 
	if(!((opcionf==1)|| (opcionf==2)||(opcionf==3)||(opcionf==4)))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
		printf("\n\tDato inválido, ingrese nuevamente los datos.");//Texto que le dice al usuario que ingreso un dato inválido y que lo vuelva a intentar.
		getch();//Retorna el carácter leído desde el teclado.
		SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	}//Fin del if.
	}//Fin del do (su fin es while).
	while(!((opcionf==1)|| (opcionf==2)||(opcionf==3)||(opcionf==4)));
}//Fin de la Función si_fumo.

int si_bebo()//Función para cuando el usuario ingiera bebidas alcohólicas.
{//Inicio de la Función si_bebo.
	int opcionb;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
	{//Inicio del do.
		printf("\n\t>¿Qué tan seguido tomas alcohol a la semana?(Elige una opción)\n");//Texto que pregunta al usuario qué tan seguido toma.
		printf("\t 1-Muy seguido\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
		printf("\t 2-De vez en cuando\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
		printf("\t 3-Rara vez\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
		printf("\t 4-Casi nada\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
		printf("\t Opción: ");//Texto que pide al usuario que ingrese la opción que corresponda a sus hábitos.
		scanf("%d",&opcionb);//Recibe el valor que el usuario ingreso. 
		
		if(!((opcionb==1)|| (opcionb==2)||(opcionb==3)||(opcionb==4)))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
	    {//Inicio del if.
			SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
			printf("\n\tDato inválido, ingrese nuevamente los datos.");//Texto que le dice al usuario que ingreso un dato inválido y que lo vuelva a intentar.
			getch();//Retorna el carácter leído desde el teclado.
			SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
		}//Fin del if.
	}//Fin del do (su fin es while).
	while(!((opcionb==1)|| (opcionb==2)||(opcionb==3)||(opcionb==4)));
		
}//Fin de la Función si_bebo.

int si_trabajo()//Función cuando el usuario ejerce un trabajo.
{//Inicio de la Función si_trabajo.
	char conf_trab[2],af[2]={'S'},af2[2]={'s'};//Variables de tipo caracter.
	
	printf("\n\t¿Tu trabajo es alguno de los siguientes?(S;N): ");//Texto que dice al usuario si tiene alguno de los siguientes trabajos que a continuación se muestran.
	printf("\n\t-Bomberos");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Policías");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Buzos");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Guardaespaldas");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Piloto de autos");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Piloto de aviones");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\tRespuesta: ");//Texto que pregunta al usuario si ejerce alguno de los trabajos antes mencionados, debe escribir S si lo ejerce y N si no.
	scanf("%s",&usuario.conf_trab);//Recibe el valor que el usuario ingreso.
		
	if(strcmp(usuario.conf_trab,af)==0 || strcmp(usuario.conf_trab,af2)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		si_trabajos();//Invoca a la Función si_trabajos.
	}//Fin del if
	
}//Fin de la Función si_trabajo.

int si_hago_deporte()//Función cuando el usuario práctica deporte.
{//Inicio de la Función si_hago_deporte.
	char conf_dep[2],af[2]={'S'},af2[2]={'s'};//Variables de tipo caracter.

	printf("\n\t¿Practicas alguno de los siguientes deportes?(S;N): ");//Texto que dice al usuario si práctica alguno de los siguientes deportes que a continuación se muestran.
	printf("\n\t-Buceo");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Esquí");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Paracaidísmo");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Espeleología");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Torero");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Alpinismo");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\tRespuesta: ");//Texto que pregunta al usuario si ejerce alguno de los deportes antes mencionados, debe escribir S si lo ejerce y N si no.
	scanf("%s",&usuario.conf_dep);//Recibe el valor que el usuario ingreso.
					
	if(strcmp(usuario.conf_dep,af)==0 || strcmp(usuario.conf_dep,af2)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		si_deportes();//Invoca a la Función si_deportes.
	}//Fin del if.
	
}//Fin de la Función si_hago_deporte.

int si_deportes()//Función para cuando el usuario hace uno de los deportes mostrados.
{//Inicio de la Función si_deportes.
	int opciond;//Variable de tipo entero.
	
	printf("\n\t>¿Qué tan seguido lo practica?(Elige una opción)\n");//Texto que pregunta al usuario qué tan seguido hace deporte.
	printf("\t 1-Muy seguido\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
	printf("\t 2-De vez en cuando\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
	printf("\t 3-Rara vez\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
	printf("\t 4-Casi nada\n");//Texto que dice la opción que hay a elegir dependiendo de sus hábitos.
	printf("\t Opción: ");//Texto que pide al usuario que ingrese la opción que corresponda a sus hábitos.
	scanf("%d",&opciond);//Recibe el valor que el usuario ingreso.
	
}//Fin de la Función si_deportes.

int si_trabajos()//Función para cuando el usuario tiene uno de los trabajos mostrados.
{//Inicio de la Función si_trabajo.
	int opciont;//Varibale de tipo entero.
	
	printf("\n\t>¿Cuánto lleva en ese trabajo?(Elige una opción)\n");//Texto que pregunta al usuario cuánto tiempo lleva en su trabajo.
	printf("\t 1-Menos de un mes\n");//Texto que dice la opción que hay del tiempo que lleva en su trabajo.
	printf("\t 2-Menos de seis meses\n");//Texto que dice la opción que hay del tiempo que lleva en su trabajo.
	printf("\t 3-Menos de un año\n");//Texto que dice la opción que hay del tiempo que lleva en su trabajo.
	printf("\t 4-Más de un año\n");//Texto que dice la opción que hay del tiempo que lleva en su trabajo.
	printf("\t 5-Más de tres años\n");//Texto que dice la opción que hay del tiempo que lleva en su trabajo.
	printf("\t 6-Más de cinco años\n");//Texto que dice la opción que hay del tiempo que lleva en su trabajo.
	printf("\t 7-Más de diez años\n");//Texto que dice la opción que hay del tiempo que lleva en su trabajo.
	printf("\t Opción: ");//Texto que pide al usuario que ingrese la opción que corresponda al tiempo que lleva en su trabajo.
	scanf("%d",&opciont);//Recibe el valor que el usuario ingreso.
	
}//Fin de la Función si_trabajo.

char prima_segun_edad_M ()
{//Inicio de la Función prima_segun_edad_M.
	int i;//Variable de tipo entero.
	float j;//Variable de tipo real.
	
	if(usuario.edad>=17 && usuario.edad<=46)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		j=3.00;//Inicialización de la variable en tres.
		
		for(i=17;i<usuario.edad;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	    {//Inicio del for.
			j=j-0.01;
		}//Fin del for.
		usuario.prima_edad=j;
	}//Fin del if.
	
	if(usuario.edad>46 && usuario.edad<=75)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		j=2.72;//Inicialización de la variable en dos punto setenta y dos.
		for(i=47;i<usuario.edad;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	    {//Inicio del for.
			j=j+0.01;
		}//Fin del for.
		usuario.prima_edad=j;
	}//Fin del if.
	
}//Fin de la Función prima_segun_edad_M.

float prima_segun_edad_F()
{//Inicio de la Función prima_segun_edad_F.
	int i;//Variable de tipo entero.
	float j;//Variable de tipo real.
	
	
	if(usuario.edad>=17 && usuario.edad<=46)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		j=2.00;//Inicialización de la variable en dos.
		
		for(i=17;i<usuario.edad;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	    {//Inicio del for.
			j=j-0.01;
		}//Fin del for.
		usuario.prima_edad=j;
	}//Fin del if.
	
	if(usuario.edad>46 && usuario.edad<=75)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		j=1.72;//Inicialización de la variable en uno punto setenta y dos. 
		for(i=47;i<usuario.edad;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el número mínimo de iteraciones que la instrucción realizará.
	    {//Inicio del for.
			j=j+0.01;
		}//Fin del for.
		usuario.prima_edad=j;
	}//Fin del if.

}//Fin de la Función prima_segun_edad_F.

int verificacion_sexo()
{//Inicio de la Función verificacion_sexo.
	char m[2]={'M'},f[2]={'F'};//Variables de tipo caracter.
	
	if(strcmp(usuario.sexo,m)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		prima_segun_edad_M ();//Invoca a la Función prima_segun_edad_M.
	}//Fin del if.
	
	if(strcmp(usuario.sexo,f)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		prima_segun_edad_F ();//Invoca a la Función prima_segun_edad_F.
	}//Fin del if.
	
}//Fin de la Función verificacion_sexo.

double menu_coberturas_samsem()//CALCULO DE LA COBERTURA CON EL MONTO.
{//Inicio de la Función menu_coberturas_samsem.
	int opcion;//Variable de tipo entero.	
	double prima_sam_cobertura;//Variable de tipo doble precisión.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	printf("\n\n\n\t\t\t\t\t\tTIPOS DE COBERTURAS");//Tres saltos de línea y tabula seis veces, texto que dice tipos de coberturas.
	detalles2();//Invoca a la Función detalles2.
	SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	printf("\n\n\tSeguros de vida 'HEBA INSURANCE' contiene coberturas como: ");//Texto que le dice al usuario que a continuación le mostrará el tipo de coberturas que tiene.
	printf("\n\n\n\t1.-Invalidez total y permanente.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t2.-Muerte accidental.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t3.-Muerte colectiva.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t4.-Pérdida de miembros.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t5.-Seguro de desempleo.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t6.-Estudios de los hijos.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\n\t¿Qué opción elije?: ");//Texto que pregunta al usuario que elija una opción.
	scanf("%d",&opcion);//Recibe el valor que el usuario ingreso.
	
	switch(opcion)
	{//Inicio del switch.
		case 1:
			usuario.prima_sam_cobertura= (.50);
		break;
		case 2:
			usuario.prima_sam_cobertura= (2.00);
		break;
		case 3:
			usuario.prima_sam_cobertura= (3.00);
		break;
		case 4:
			usuario.prima_sam_cobertura= (.30);
		break;
		case 5:
			usuario.prima_sam_cobertura= (.10);
		break;
		case 6:
			usuario.prima_sam_cobertura= (1.00);
		break;
	}//Fin del switch.
	
}//Fin de la Función menu_coberturas_samsem.

double menu_coberturas_n()//Cálculo del porcentaje de la cobertura dada el monto.
{//Inicio de la Función menu_coberturas_n.
	int opcion;//Variable de tipo entero.
	double prima_n_cobertura;//Variable de tipo doble precisión.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	printf("\n\n\n\t\t\t\t\t\tTIPOS DE COBERTURAS");//Tres saltos de línea y tabula seis veces, texto que dice tipos de coberturas.
	detalles2();//Invoca a la Función detalles2.
	SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	printf("\n\n\tSeguros de vida 'HEBA INSURANCE' contiene coberturas como: ");//Texto que le dice al usuario que a continuación le mostrará el tipo de coberturas que tiene.
	printf("\n\n\n\t1.-Invalidez total y permanente.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t2.-Muerte accidental.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t3.-Muerte colectiva.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t4.-Pérdida de miembros.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t5.-Seguro de desempleo.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t6.-Estudios de los hijos.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\n\t¿Qué opción elije?: ");//Texto que pregunta al usuario que elija una opción.
	scanf("%d",&usuario.coberturas_opcion);//Recibe el valor que el usuario ingreso.

	switch(usuario.coberturas_opcion)
	{//Inicio del switch.
		case 1:
			usuario.prima_n_cobertura=(.10);
		break;
		case 2:
			usuario.prima_n_cobertura=(.15);
		break;
		case 3:
			usuario.prima_n_cobertura=(.15);
		break;
		case 4:
			usuario.prima_n_cobertura=(.10);
		break;
		case 5:
			usuario.prima_n_cobertura=(.15);
		break;
		case 6:
			usuario.prima_n_cobertura=(.80);
		break;
	}//Fin del switch.
	
}//Fin de la Función menu_coberturas_n.

double prima_basica_y_porcentaje_de_cobertura()
{//Inicio de la Función prima_basica_y_porcentaje_de_cobertura.
	double division;//Variable de tipo doble precisión.
		
	usuario.prima_basica= trunc(usuario.monto/1000) * usuario.prima_edad;//Operación.
	usuario.porcentaje_cobertura= (usuario.prima_basica)*(usuario.prima_n_cobertura);//Operación.
	usuario.prima_total= usuario.prima_basica+usuario.porcentaje_cobertura;//Operación.
	
}//Fin de la Función prima_basica_y_porcentaje_de_cobertura.

double extras_fumar()
{//Inicio de la Función extras_fumar.
	char af[2]={'S'};//Variable de tipo caracter.
	
	if(strcmp(usuario.conf_fumar,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		usuario.extra_fumar= (usuario.prima_total)*(.30);//Operación.
	}//Fin del if.
	else
	{//Inicio del else.
		usuario.extra_fumar=0;//Inicialización en cero.
	}//Fin del else.
	
}//Fin de la Función extras_fumar.

double extras_beber()
{//Inicio de la Función extras_beber.
	char af[2]={'S'};//Variable de tipo caracter.
	
	if(strcmp(usuario.conf_beber,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		usuario.extra_beber= (usuario.prima_total)*(.20);//Operación.
	}//Fin del if.
	else
	{//Inicio del else.
		usuario.extra_beber=0;//Inicialización en cero.
	}//Fin del else.
	
}//Fin de la Función extras_beber.

double extras_deportes()
{//Inicio de la Función extras_deportes. 
	char af[2]={'S'};//Variable de tipo caracter.
	
	if(strcmp(usuario.conf_dep,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		usuario.extra_deportes= (usuario.prima_total)*(.50);//Operación.
	}//Fin del if.
	else
	{//Inicio del else.
		usuario.extra_deportes=0;//Inicialización en cero.
	}//Fin del else.
	
}//Fin de la Función extras_deportes.

double extras_trabajos()
{//Inicio de la Función extras_trabajos.
	char af[2]={'S'};//Variable de tipo caracter.
	
	if(strcmp(usuario.conf_trab,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		usuario.extra_trabajos= (usuario.prima_total)*(.60);//Operación.
	}//Fin del if.
	else
	{//Inicio del else.
		usuario.extra_trabajos= 0;//Inicialización en cero.
	}//Fin del else.
	
}//Fin de la Función extras_trabajos. 

double modos_pago()
{//Inicio de la Función modos_pago.
	double pago;//Variable de tipo doble precisión.
	int opcion_p;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	printf("\n\t Los modos de pago son: " );//Texto que le dice al usuario que tenemos algunos modos de pago y a continuación se mostrarán.
	printf("\n\t1.-Anual");//Texto que le dice al usuario que puede pagar anualmente.
	printf("\n\t2.-Semestral");//Texto que le dice al usuario que puede pagar semestralmente.
	printf("\n\t3.-Trimestral");//Texto que le dice al usuario que puede pagar trimestralmente.
	printf("\n\t4.-Mensual");//Texto que le dice al usuario que puede pagar mensualmente.
	printf("\n\n\t¿Qué opción elije?: ");//Texto que le dice al usuario que puede elegir un modo de pago.
	scanf("%d",&opcion_p);//Recibe el valor que el usuario ingreso.
	
	switch(opcion_p)
	{//Inicio del switch.
		case 1:
			usuario.modos_pago= usuario.prima_total*(.0);
			usuario.division_pago= 1;
		break;
		
		case 2:
			usuario.modos_pago= usuario.prima_total*(.10);
			usuario.division_pago= 2;
		break;
		
		case 3:
			usuario.modos_pago= usuario.prima_total*(.20);
			usuario.division_pago= 4;
		break;
		
		case 4:
			usuario.modos_pago= usuario.prima_total*(.30);
			usuario.division_pago= 12;
		break;
	}//Fin del switch.
	
}//Fin de la Función modos_pago.

double extras()
{//Inicio de la Función extras.
	double suma_extras;//Variable de tipo doble precisión.
	double subtotal;//Variable de tipo doble precisión.
	double iva;//Variable de tipo doble precisión.
	double total;//Variable de tipo doble precisión.
	
	extras_fumar();//Invoca a la Función extras_fumar.
	extras_beber();//Invoca a la Función extras_beber.
	extras_deportes();//Invoca a la Función extras_deportes.
	extras_trabajos();//Invoca a la Función extras_trabajos.
	modos_pago();//Invoca a la funcion modos_pago
	
	usuario.suma_extras= usuario.extra_beber + usuario.extra_deportes + usuario.extra_fumar + usuario.extra_trabajos + usuario.modos_pago;//Operación.
	usuario.subtotal= usuario.suma_extras + usuario.prima_total;//Operación.
	usuario.iva= usuario.subtotal*(.16);//Operación.
	usuario.total= usuario.subtotal+usuario.iva;//Operación.

}//Fin de la Función extras.

double verificacion()/*FUNCIÓN PARA DETERMINAR 2 DE LOS CAMINOS POSIBLES, CUANDO LA PRIMA EXCEDE EL MONTO DE 
$2,000,000 Y SI NO ES ASÍ, REALIZA LA PRIMA DE MANERA NORMAL*/
{//Inicio de la Función verificacion.
	if(usuario.monto>2000000)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
	{//Inicio del if.
		calculo_de_prima_sam();//Invoca a la Función calculo_de_prima_sam.
	}//Fin del if.
	else
	{//Inicio del else.
		calculo_de_prima_n();//Invoca a la Función calculo_de_prima_n.
	}//Fin del else.
	
}//Fin de la Función verificacion.

int calculo_de_prima_sam()//CÁLCULO DE LA PRIMA EXCEDIDA DE LA SAMSEM.
{//Inicio de la Función calculo_de_prima_sam.
	menu_coberturas_samsem();//Invoca a la Función menu_coberturas_samsem.
}//Fin de la Función calculo_de_prima_sam.

int calculo_de_prima_n()//CÁLCULO DE LA PRIMA SIN EXCESO DE LA SAMSEM.
{//Inicio de la Función calculo_de_prima_n.
	menu_coberturas_n();//Invoca a la Funcion menu_coberturas_n.
	verificacion_sexo();//Invoca a la Función verificacion_sexo.
	prima_basica_y_porcentaje_de_cobertura();//Invoca a la Función prima_basica_y_porcentaje_de_cobertura.
	extras();
	printf("\n\n\t ");//Da dos saltos de línea y tabula.
	system("pause");//Lo pausa para que el usuario pueda ver lo que está haciendo el programa.
	
}//Fin de la Función calculo_de_prima_n.

int tipo_de_cobertura_imp()
{//Inicio de la Función tipo_de_coberturas_imp.
	switch(usuario.coberturas_opcion)
	{//Inicio del switch.
		case 1:
			printf("Inválidez total y permanente.");
		break;
		case 2:
			printf("Muerte accidental.");
		break;
		case 3:
			printf("Muerte colectiva.");
		break;
		case 4:
			printf("Pérdida de miembros.");
		break;
		case 5:
			printf("Seguro de desempleo.");
		break;
		case 6:
			printf("Estudios de los hijos.");
		break;
	}//Fin del switch.
	
}//Fin de la Función tipo_de_coberturas_imp.

int impresion_de_datos()//IMPRIME LOS DATOS (COMPROBANTE).
{//Inicio de la Función impresion_de_datos.
    system("cls");//Borra la pantalla.
	printf("\n\t\t\t\t\t\tVERIFICACIÓN DE DATOS");//Texto que verifica datos.
	printf("\n\n\n\tNOMBRE: %s",usuario.nombre);//Texto que da el nombre.
	printf("\n\n\tSEXO: %s",usuario.sexo);//Texto que da el sexo.
	printf("\n\n\tEDAD: %d",usuario.edad);//Texto que da la edad.
	printf("\n\n\tFECHA DE NACIMIENTO: %s",usuario.fecha_de_nacimiento);//Texto que da la fecha de nacimiento.
	printf("\n\n\tRFC: %s",usuario.rfc);//Texto que da el RFC.
	printf("\n\n\tDIRECCION: %s",usuario.direccion1);//Texto que da la dirección.
	printf("\n\n\n\tNOMBRE DEL BENEFICIARIO: %s",benef.nombreb);//Texto que da el nombre del beneficiario. 
	printf("\n\n\tSEXO: %s",benef.sexob);//Texto que da el sexo del beneficiario.
	printf("\n\n\tEDAD: %d",benef.edadb);//Texto que da la edad del beneficiario.
	printf("\n\n\n\tTIPO DE COBERTURA: ");//Texto que da el tipo de cobertura que escogió el usuario.
	tipo_de_cobertura_imp();//Invoca a la Función tipo_de_cobertura_imp.
	printf("\n\n\tSUMA ASEGURADA: %.2lf",usuario.monto);//Texto que le da al usuario el monto que ingreso.
	printf("\n\n\tPRIMA BÁSICA: %.2lf",usuario.prima_basica);//Texto que le da al usuario la prima básica. 
	printf("\n\n\tPORCENTAJE DE COBERTURA: %.2lf\n",usuario.porcentaje_cobertura);//Texto que le da al usuario el porcentaje de la cobertura.
	printf("\n\n\tPRIMA BÁSICA TOTAL: %.2lf",usuario.prima_total);//Texto que le da al usuario la prima básica total.	
	printf("\n\n\tCOSTOS EXTRAS (ALCOHOL,FUMAR,ETC.): %.lf",usuario.suma_extras);//Texto que le da al usuario lo que pagará de costos extra.
	printf("\n\n\tSUBTOTAL (PRIMA TOTAL + RECARGOS): %.2lf",usuario.subtotal);//Texto que le da al usuario el subtotal de la prima total más recargos.
	printf("\n\n\tIVA: %.2lf",usuario.iva);//Texto que le da al usuario el iva.
	printf("\n\n\tTOTAL: %.2lf\n",usuario.total);//Texto que le da al usuario el total del seguro que está contratando.
	printf("\n\n\tPAGO QUE DEBERÁ EFECTUAR SEGÚN LA OPCIÓN ELEGIDA: %.2lf",(usuario.total)/(usuario.division_pago) );//Texto que le da al usuartio el pago que deberá hacer dependiendo del modo de pago que escogió.
	printf("\n\n\n\n\t¡GRACIAS POR CONTRATAR ESTE SERVICIO!");//Texto que agradece al usuario por contratar el seguro.
	printf("\n\n\t");//Da dos saltos de línea y tabula.
	
}//Fin de la Función impresion_de_datos.

int datos_personales()//DATOS DEL USUARIO QUE INGRESÓ.
{//Inicio de la Función datos_personales.
	char nombre[50],direccion1[100],a;//Variables de tipo caracter.
	char sexo[2],resp[2],fecha_de_nacimiento[10];//Variables de tipo caracter.
	char conf_fumar[2],conf_beber[2],dep[2],trab[2],enfer[2],enfermedad[20];//Variables de tipo caracter.
	char m[2]={'M'},f[2]={'F'},af[2]={'S'},neg[2]={'N'};//Variables de tipo caracter.
	
	int  edad;//Variable de tipo entero.
	
	double monto;//Variable de tipo doble precisión.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
    {//Inicio del do.
		do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
        {//Inicio del do.
			do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
            {//Inicio del do.
				do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
                {//Inicio del do.
					SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
					
					system("cls");//Borra la pantalla.
					
					do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
                    {//Inicio del do.
						ConfiguraIdioma();//Configura el idioma español.
						printf("\n\t");//Da un salto de lìnea y tabula.
						printf("\n\n\t\t\t\t\t CUESTIONARIO DE DATOS PERSONALES ");//Texto que dice cuestionario de datos personales.
						detalles1();//Invoca a la Funciòn detalles1.
						SetConsoleTextAttribute (hConsoleHandle, 15);//Sirve para ponerle color al fondo y/o al texto.
						printf("\n\n\n\n\tNOTA: Ingrese los datos con letra mayúscula.");//Texto que especifica como debe ser llenado el cuestionario.
						printf("\n\n\n\tDATOS PERSONALES: ");//Texto que dice datos personales.
						printf("\n\n\t» Nombre completo: ");//Texto que pide al usuario que ingrese su nombre completo.
						fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
						gets(usuario.nombre);//Es un puntero al comienzo de la cadena y devuelve dicho puntero si tiene éxito o NULL si falla.
						
						do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
	                    {//Inicio del do.
							printf("\n\t¿Ingresaste tu nombre correctamente?(S;N): ");//Texto que le pregunta al usuario si ningreso su nombre correctamente.
							scanf("%s",&resp);//Recibe el valor que el usuario ingreso.
							
							if(strcmp(resp,neg)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
	                        {//Inicio del if.
								system("cls");//Borra la pantalla.
							}//Fin del if.
							
							if(!((strcmp(resp,neg)==0) || (strcmp(resp,af)==0)))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
	                        {//Inicio del if.
								SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
								printf("\n\tDato inválido, ingrese nuevamente los datos.");//Texto que le dice al usuario que ingreso un dato inválido.
								getch();//Retorna el carácter leído desde el teclado.
								SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
							}//Fin del if.
						}//Fin del do (su fin es while).
						while(!((strcmp(resp,neg)==0) || (strcmp(resp,af)==0)));
					}//Fin del do (su fin es while).
					while(strcmp(resp,neg)==0);
					
					do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
                	{//Inicio del do.
					printf("\n\tFecha de Nacimiento(DD/MM/AAAA): ");//Texto que pide al usuario su fecha de nacimiento.
					fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
					scanf("%s",&usuario.fecha_de_nacimiento);//Lee el valor de la cadena de caracteres.
					if(!(strlen(usuario.fecha_de_nacimiento)==10))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
                    {//Inicio del if.
						SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
						printf("\n\tDato inválido, ingrese nuevamente los datos.");//Texto que dice al usuario que la edad es inválida.
						getch();//Retorna el carácter leído desde el teclado.
						SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
						printf("\n\t");
					}//Fin del if.
					}//Fin del do (su fin es while).
					while(!(strlen(usuario.fecha_de_nacimiento)==10));
					
					do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
                	{//Inicio del do.
						printf("\n\t» Edad: ");//Texto que pide al usuario que ingrese su edad.
						scanf("%d",&usuario.edad);//Lee la cadena de caracteres.	
						
						if(usuario.edad<=17 || usuario.edad>=75)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
	                    {//Inicio del if.
							SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
							printf("\n\tEdad inválida, ingrese nuevamente los datos.");//Texto que dice al usuario que la edad es inválida.
							getch();//Retorna el carácter leído desde el teclado.
							printf("\n\t");
							SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
						}//Fin del if.
					}//Fin del do (su fin es while).
					while(usuario.edad<=17 || usuario.edad>=75);
				}//Fin del do (su fin es while).
				while(usuario.edad<=17 || usuario.edad>=75);
				
				do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
                {//Inicio del do.
				printf("\n\t» Sexo (M;F): ");//Texto que pregunta al usuario su sexo.
				fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
				scanf("%s",&usuario.sexo);//Lee el caracter.
			    	if(!((strcmp(usuario.sexo,m)==0) || (strcmp(usuario.sexo,f)==0) ))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
                    {//Inicio del if.
						SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
						printf("\n\t\aSexo inválido, ingrese nuevamente los datos.");//Texto que dice al usuario que la edad es inválida.
						getch();//Retorna el carácter leído desde el teclado.
						printf("\n\t");
						SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
					}//Fin del if.
				}//Fin del do (su fin es while).
				while(!((strcmp(usuario.sexo,m)==0 ) || (strcmp(usuario.sexo,f)==0 )));
			}//Fin del do (su fin es while).
			while(!((strcmp(usuario.sexo,m)==0 ) || (strcmp(usuario.sexo,f)==0 )));
			
			
			printf("\n\t»Ingrese su RFC: ");
			fflush(stdin);
			scanf("%s",&usuario.rfc);
			
			printf("\n\n\tDIRECCION:");//Texto que pide al usuario su dirección. 
			printf("\n\tIngresar los datos separados por una coma en formato: ");//Texto que especifica como debe ingresar los datos el usuario.
			printf("\n\tCalle/Cerrada,No.Interior,No.Exterior,Colonia,Municipio/Delegación.");//Texto que especifica (ejemplo) como debe ingresar los datos el usuario.
			printf("\n\n\t» Ingresa tu dirección actual: ");//Texto que pide al usuario que ingrese su dirección actual.
			fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
			gets(usuario.direccion1);//Es un puntero al comienzo de la cadena y devuelve dicho puntero si tiene éxito o NULL si falla.
			
			printf("\n\t» ¿Usted fuma? (S;N): ");//Texto que pregunta al usuario si fuma.
			fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&usuario.conf_fumar);//Lee el caracter.
			
			if(strcmp(usuario.conf_fumar,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				si_fumo();//Invoca a la Función si_fumo.
			}//Fin del if.
			
			printf("\n\t» ¿Ingiere bebidas alcohólicas? (S;N): ");//Texto que pregunta al usuario si bebe.
			fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&usuario.conf_beber);//Lee el caracter.
			
			if(strcmp(usuario.conf_beber,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				si_bebo();//Invoca a la Función si_bebo.
			}//Fin del if.
			
			printf("\n\t» ¿Practica algún deporte?(S;N): ");//Texto que pregunta al usuario si práctica algún deporte.
			fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&dep);//Lee el cartacter.
			
			if (strcmp(dep,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				si_hago_deporte();//Invoca a la Función si_hago_deporte.	
			}//Fin del if.
			
			printf("\n\t» ¿Ejerce algún trabajo?(S;N): ");//Texto que pregunta al usuario si trabaja.
			fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&trab);//Lee el caracter.
			
			if (strcmp(trab,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				si_trabajo();//Invoca a la Función si_trabajo.
			}//Fin del if.
			
			printf("\n\t» ¿Padece alguna enfermedad?(S;N): ");//Texto que pregunta al usuario si padece alguna enfermedad.
			scanf("%s",&usuario.enfer);//Lee el caracter.
			
			if (strcmp(usuario.enfer,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				printf("\n\t ¿Cuál?: ");//Teto que pregunta al usuario cuál enfermedad padece.
				scanf("%s",&usuario.enfermedad);//Lee la cadena de caracteres.
			}//Fin del if.
			
			do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
        	{//Inicio del do.
			printf("\n\n\t>>¿Cuál es el monto que quiere tener(mínimo $1,000),(maximo $2,000,000)?: $");//Texto que pide al usuario que ingrese la cantidad de dinero que desea.
			scanf("%lf",&usuario.monto);//Recibe el valor que el usuario ingreso.
			if(usuario.monto<1000 || usuario.monto>2000000)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
            {//Inicio del if.
               SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
				printf("\n\tMonto inválido, ingrese nuevamente los datos.");//Texto que dice al usuario que la edad es inválida.
				getch();//Retorna el carácter leído desde el teclado.
				SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
			}//Fin del if.
			}//Fin del do (su fin es while).
			while(usuario.monto<1000 || usuario.monto>2000000);
		}//Fin del do (su fin es while).
		while(usuario.monto<1000 || usuario.monto>2000000);
		printf("\n\n\t¿Ingresó los datos correctos?(S;N): ");//TExto que pregunta al usuario si ingreso los datos correctos.
		fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
		scanf("%s",&resp);//Lee el carácter.
	}//Fin del do (su fin es while).
	while(strcmp(resp,neg)==0);	
	
}//Fin de la Función datos_personales.

int beneficiario()//CAPTURA DE DATOS DEL BENEFICIARIO.
{//Inicio de la Función beneficiario.
	char nombreb[100],sexob[2],m[2]={'m'},f[2]={'f'};//Variables de tipo caracter.
	char direccion2[100],fecha_de_nacimiento2[10],paren[20];//Variables de tipo caracter.
	char resp_b[2],neg[2]={'N'};//Variables de tipo caracter.
	int edadb;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
    {//Inicio del do.
		do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
        {//Inicio del do.
			do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
            {//Inicio del do.		
				system("cls");//Borra la pantalla.
				do //La instrucción ejecuta una instrucción o un bloque de instrucciones repetidamente hasta que una expresión especificada se evalúa como falsa.
                {//Inicio del do.
					printf("\n\t");//DA un salto de línea y tabula.
					printf("\n\n\t\t\t\t CUESTIONARIO DE DATOS PERSONALES DEL BENEFICIARIO");//Da dos saltos de línea y tabula 4 veces, texto que dice cuestionario de datos personales del beneficiario..
					detalles2();//Invoca a la Función detalles2.
					SetConsoleTextAttribute (hConsoleHandle, 15);//Sirve para ponerle color al fondo y/o al texto.
					printf("\n\n\n\n\tDATOS PERSONALES:");//Texto que dice datos personales.
					printf("\n\n\t» Nombre completo: ");//Texto que pide al usuario que ingrese su nombre completo.
					fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
					gets(benef.nombreb);//Es un puntero al comienzo de la cadena y devuelve dicho puntero si tiene éxito o NULL si falla.
					printf("\n\t¿Ingresaste su nombre correctamente?(S;N): ");//Texto que le pregunta al usuario si ningreso su nombre correctamente.
					scanf("%s",&resp_b);//Recibe el valor que el usuario ingreso.
						if(strcmp(resp_b,neg)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
                        {//Inicio del if.
							system("cls");//Borra la pantalla.
						}//Fin del if.					
				}//Fin del do (su fin es while).
				while(strcmp(resp_b,neg)==0);
				
				printf("\n\tFecha de Nacimiento(DD/MM/AAAA): ");//Texto que pide al usuario su fecha de nacimiento.
				fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
				scanf("%s",&benef.fecha_de_nacimiento2);//Lee la cadena de caracteres.
				printf("\n\t» Edad: ");//Texto que pregunta al usuario la edad del beneficiario.
				scanf("%d",&benef.edadb);//Rcibe el valor que el usuario ingreso.
				
				if(benef.edadb<=16||benef.edadb>=77)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condición, debe ser verdadera para que se cumpla.
                {//Inicio del if.
					SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
					printf("\n\tIngresa la edad adecuada para el trámite (a partir de los 17 años): ");//Texto que pide al usuario que ingrese la edad adecuada.
					system("pause");//Lo pausa para que el usuario pueda ver lo que está haciendo el programa.
				}//Fin del if.
			}//Fin del do (su fin es while).
			while (benef.edadb<=16||benef.edadb>=77);
		
			printf("\n\t» Parentesco (Hij@, Espos@, etc.): ");//Texto que pregunta al usuario que parentesco tiene con el beneficiario.	
			fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&benef.paren);//Lee la cadena de caracteres.
			printf("\n\t» Sexo (M;F): ");//Texto que pregunta al usuario que sexo tiene el beneficiario.
			fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&benef.sexob);//Lee el caracter.
		}//Fin del do (su fin es while).
		while(strcmp(benef.sexob,m)==0 || strcmp(benef.sexob,f)==0);
		
		printf("\n\n\tDIRECCIÓN:");//Texto que pide al usuario su dirección. 
		printf("\n\tIngresar los datos separados por una coma en formato: ");//Texto que especifica como debe ingresar los datos el usuario.
		printf("\n\tCalle/Cerrada,No.Interior,No.Exterior,Colonia,Municipio/Delegación.");//Texto que especifica (ejemplo) como debe ingresar los datos el usuario.
		printf("\n\n\t» Ingresa tu dirección actual: ");//Texto que pide al usuario que ingrese su dirección actual.
		fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
		gets(benef.direccion2);//Es un puntero al comienzo de la cadena y devuelve dicho puntero si tiene éxito o NULL si falla.
		printf("\n\n\t¿Ingresaste los datos correctos? (S;N): ");//Texto que pregunta si el usuario ingreso los datos correctos.
		fflush(stdin);//Antes de leer un carácter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la función fflush. A fflush hay que indicarle el buffer a limpiar.
		scanf("%s",&resp_b);//Lee el caracter.
	}//Fin del do (su fin es while).
	while(strcmp(resp_b,neg)==0);
	
}//Fin de la Función beneficiario.

int main()
{//Inicio de la Función principal (main).

	presentacion_equipo();//Invoca a la Función presentacion_equipo. 
	getch();//Retorna el carácter leído desde el teclado.
	system("cls");//Borra la pantalla.
	presentacion();//Invoca a la Función presentacion.
	system("cls");//Borra la pantalla.
	datos_personales();//Invoca a la Función datos_personales.
	beneficiario();//Invoca a la Función beneficiario.
	system("cls");//Borra la pantalla.
	verificacion();//Invoca a la Función verificacion.
	impresion_de_datos();//Invoca a la Función impresion_de_datos.
	
	printf("\n\t");//Da un salto de línea y tabula.
	system(" pause");//Lo pausa para que el usuario pueda ver lo que está haciendo el programa.
	
}//Fin de la Función principal (main).
