/* 
Proyecto Final.
Nombre del Proyecto: Seguro de Vida 'Heba Insurance'. 
Objetivo: Programa que calcula un Seguro de Vida, con todos los requerimientos de un seguro de vida.

Universidad Nacional Aut�noma de M�xico.
Facultad de Estudios Superiores Acatl�n.
Matem�ticas Aplicadas y Computaci�n.
Programaci�n II.
Profesor: Andr�s Orduz Ducuara.
Generaci�n 2018. Segundo Semestre. 
Grupo: 2203.  Matutino. 
 
Fecha de Inicio: 18/Marzo/2018.
Fecha Limite de Entrega: 23-25/Mayo/2018.

Alumna: 
- L�pez D�az Mar�a Fernanda.
*/

#include<stdio.h>//Est� librer�a contiene los archivos de cabecera, as� como sus definiciones, las constantes, las declaraciones de funciones de la biblioteca est�ndar para hacer operaciones est�ndar, de entrada y salida.
#include<stdlib.h>//Est� librer�a contiene prototipos de funciones para gesti�n de memoria din�mica, control de procesos, etc.
#include<locale.h>//Est� librer�a contiene a la funci�n setlocale() y las constantes relacionadas. Se utiliza para seleccionar el entorno local apropiado (configuraci�n regional), es decir, configura el idioma.
#include<windows.h>//Es un archivo cabecera espec�fico de Windows para la programaci�n en lenguaje C/C++ que contiene las declaraciones de todas las funciones de la biblioteca Windows API.
#include<string.h>//Contiene un conjunto de funciones para manipular cadenas: copiar, cambiar caracteres, comparar cadenas, etc.
#include<math.h>//Es un archivo de cabecera de la biblioteca est�ndar del lenguaje de programaci�n C dise�ado para operaciones matem�ticas b�sicas.

int ConfiguraIdioma()//Est� funci�n configura el idioma en espa�ol.
{//Inicio de la Funci�n que configura el idioma.
	struct lconv *lcPtr;
	setlocale(LC_ALL, "spanish");
	lcPtr = localeconv();
	lcPtr->decimal_point = ".";
	lcPtr->thousands_sep = ",";
	lcPtr->grouping = "3";	
}//Fin de la Funci�n que configura el idioma.

int gotoxy(int x,int y)//Mueve el cursor de la ventana de texto a la posici�n seg�n las coordenadas especificadas por los argumentos "x" y "y".
{//Inicio de la Funci�n gotoxy.
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X =x;
	dwPos.Y =y;
	SetConsoleCursorPosition(hCon,dwPos);
}//Fin de la Funci�n gotoxy.

int detalles1()//Marcos para detallar.
{//Inicio de la Funci�n detalles1.
	int i;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleHandle, 14);//Sirve para ponerle color al fondo y/o al texto.
	
	for(i=1;i<=42;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	{//Inicio del for.
		gotoxy(35+i,2);
		printf("*");
		gotoxy(35+i,4);
		printf("*");
	}//Fin del for.
}//Fin de la Funci�n detalles1.

int detalles2()//Marcos para detallar m�s grande.
{//Inicio de la Funci�n detalles2.
	int i;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleHandle, 12);//Sirve para ponerle color al fondo y/o al texto.
	
	for(i=1;i<=53;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	{//Inicio del for.
		gotoxy(30+i,2);
		printf("*");
		gotoxy(30+i,4);
		printf("*");
	}//Fin del for.
}//Fin de la Funci�n detalles2.

int presentacion_equipo()//Portada del proyecto.
{//Inicio de la Funci�n presentacion_equipo.
	int i,j;//Variables de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleHandle, 14);//Sirve para ponerle color al fondo y/o al texto.
   	
	for(i=3;i<=70;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	{//Inicio del for.
		gotoxy(3+i,3);
		printf("#");
	}//Fin del for.
	
	for(j=2;j<=29;j++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	{//Inicio del for.
		gotoxy(74,2+j);
		printf("#");
		gotoxy(5,2+j);
		printf("#");	
	}//Fin del for.
	
	for(i=3;i<=70;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	{//Inicio del for.
		gotoxy(3+i,31);
		printf("#");
	}//Fin del for.
	
	SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	ConfiguraIdioma();//Configura el idioma espa�ol.
	gotoxy(34,5);//Coordenadas.
	gotoxy(11,5);//Coordenadas.
	printf("\t\t\tPROYECTO FINAL");//Texto que escribe en las coordenadas dadas anteriormente.
	gotoxy(11,8);//Coordenadas.
	printf("Cotizaci�n de un Seguro de vida.");//Texto que escribe en las coordenadas dadas anteriormente.
	gotoxy(11,10);//Coordenadas.
	printf("Objetivo: Programa que calcula un Seguro de Vida,");//Texto que hace referencia al objetivo del proyecto, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,11);//Coordenadas.
	printf("con todos los requerimientos de un seguro de vida.");//Texto que hace referencia al objetivo del proyecto, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,13);//Coordenadas.
	printf("Universidad Nacional Aut�noma de M�xico");//Texto que hace referencia a la Universidad a la que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,14);//Coordenadas.
	printf("Facultad de Estudios Superiores Acatl�n");//Texto que hace referencia a la Facultad a la que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,15);//Coordenadas.
	printf("Matem�ticas Aplicadas y Computaci�n");//Texto que hace referencia a la Carrera a la que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,16);//Coordenadas.
	printf("Programaci�n II");//Texto que hace referencia a la materia a la que pertenece el proyecto en cuesti�n, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,17);//Coordenadas.
	printf("Profesor: Andr�s Orduz Ducuara");//Texto que hace referencia al profesor de dicha materia, lo escribe en las coordenadas dadas anteriormente 
	gotoxy(11,18);//Coordenadas.
	printf("Generaci�n 2018. Segundo Semestre. ");//Texto que hace referencia a la generaci�n y al semestre al que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,19);//Coordenadas.
	printf("Grupo: 2203.  Matutino.");//Texto que hace referencia al grupo y al turno al que pertenezco, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,21);//Coordenadas.
	printf("Fecha de Inicio: 18/Marzo/2018.");//Texto que hace referencia a la Fecha en la que se dejo y se inicio el proyecto, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,22);//Coordenadas.
	printf("Fecha L�mite de Entrega: 23-25/Mayo/2018.");//Texto que hace referencia a la Fecha l�mite del proyecto, lo escribe en las coordenadas dadas anteriormente. 
	gotoxy(11,24);//Coordenadas.
	printf("Alumna:");//Texto que hace referencia al n�mero del equipo, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,26);//Coordenadas.
	printf("-L�pez D�az Mar�a Fernanda.");//Texto que escribe en las coordenadas dadas anteriormente.
    printf("\n\n");//Da dos saltos de l�nea.
}//Fin de la Funci�n presentacion_equipo.

int presentacion()//Breve introducci�n de Seguros de Vida HEBA INSURANCE.
{//Inicio de la Funci�n presentacion.
	int i,j;//Variables de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
   	SetConsoleTextAttribute (hConsoleHandle, 11);//Sirve para ponerle color al fondo y/o al texto.
   	
	for(i=3;i<=110;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	{//Inicio del for.
		gotoxy(3+i,3);
		printf("#");
	}//Fin del for.
	
	for(j=2;j<=29;j++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	{//Inicio del for.
		gotoxy(114,2+j);
		printf("#");
		gotoxy(5,2+j);
		printf("#");	
	}//Fin del for.
	
	for(i=3;i<=110;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	{//Inicio del for.
		gotoxy(3+i,31);
		printf("#");
	}//Fin del for.
	
	SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	ConfiguraIdioma();//Configura el idioma espa�ol.
	gotoxy(34,5);//Coordenadas.
	gotoxy(18,5);//Coordenadas.
	printf("\t\t�Bienvenido a Seguros de Vida 'HEBA Insurance'! ");//Texto que da una breve introducci�n a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,8);//Coordenadas.
	printf("HEBA Insurance Seguros, cuenta con una ampl�o cat�logo de seguros de vida,");//Texto que da una breve introducci�n a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,9);//Coordenadas.
	printf("para nosotros su tranquilidad es muy importante, y que mejor que estar preparados");//Texto que da una breve introducci�n a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,10);//Coordenadas.
	printf("para ese tipo de situaciones.");//Texto que da una breve introducci�n a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,11);//Coordenadas.
	printf("Nosotros le brindaremos esa tranquilidad, nuestra calidad de trabajo");//Texto que da una breve introducci�n a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,12);//Coordenadas.
	printf("nos permite brindarle los mejores beneficios, logrando que tanto usted");//Texto que da una breve introducci�n a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,13);//Coordenadas.
	printf("como su familia, vivan felices y sin preocupaciones.");//Texto que da una breve introducci�n a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(17,15);//Coordenadas.
	printf("\t\t SI USTED ESTA INTERESADO POR FAVOR REVISE LO SIGUIENTE");//Texto que da una breve introducci�n a Seguros de Vida HEBA INSURANCE, y lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,17);//Coordenadas.
	printf("Requerimientos para poder ser asegurado:");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,18);//Coordenadas.
	printf("�Ser mayor de 17 a�os y menor de 75.");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,20);//Coordenadas.
	printf("�Le solicitamos que tenga sus datos y documentos personales a la mano");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,21);//Coordenadas.
	printf("para agilizar el proceso de cotizaci�n.");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,23);//Coordenadas.
    printf("�Es importante llenar ver�dica y correctamente los datos solicitados en el tr�mite.");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,25);//Coordenadas.
	printf("Al finalizar el tr�mite, se le asignar� un folio."); //Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,26);//Coordenadas.
	printf("Le pedimos amablemente que lo conserve para cualquier aclaraci�n.");//Texto que dice los requerimientos para poder ser asegurado, lo escribe en las coordenadas dadas anteriormente.
	gotoxy(11,28);//Coordenadas.
	printf("Gracias por su atenci�n. Presiona cualquier tecla para continuar...");//Texto que agradece por la atenci�n y dice que al dar un click podr� continuar, lo escribe en las coordenadas dadas anteriormente.
	getch();//Retorna el car�cter le�do desde el teclado.
}//Fin de la Funci�n presentacion.

struct datos_usuario //BASE QUE GUARDA LOS DATOS DEL USUARIO QUE QUIERE HACER EL TR�MITE DEL SEGURO.
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
	
	double monto;//Variable de tipo doble precisi�n.
	double prima_edad;//Variable de tipo doble precisi�n.
	double prima_basica;//Variable de tipo doble precisi�n.
	double porcentaje_cobertura;//Variable de tipo doble precisi�n.
	double prima_total;//Variable de tipo doble precisi�n.
	double prima_n_cobertura;//Variable de tipo doble precisi�n.
	double extra_fumar;//Variable de tipo doble precisi�n.
	double extra_beber;//Variable de tipo doble precisi�n.
	double extra_deportes;//Variable de tipo doble precisi�n.
	double extra_trabajos;//Variable de tipo doble precisi�n.
	double suma_extras;//Variable de tipo doble precisi�n.
	double prima_sam_cobertura;//Variable de tipo doble precisi�n.
	double modos_pago;//variable de tipo doble precisi�n.
	double subtotal;//variable de tipo doble precisi�n.
	double iva;//variable de tipo doble precisi�n.
	double total;//variable de tipo doble precisi�n.
	
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

int si_fumo()//Funci�n para cuando el usuario fuma.
{//Inicio de la Funci�n si_fumo.
	int opcionf;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
	{//Inicio del do.
	printf("\n\t>�Qu� tan seguido fumas a la semana?(Elige una opci�n)\n");//Texto que pregunta al usuario qu� tan seguido fuma.
	printf("\t 1-Muy seguido\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
	printf("\t 2-De vez en cuando\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
	printf("\t 3-Rara vez\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
	printf("\t 4-Casi nada\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
	printf("\t Opci�n: ");//Texto que pide al usuario que ingrese la opci�n que corresponda a sus h�bitos.
	scanf("%d",&opcionf);//Recibe el valor que el usuario ingreso. 
	if(!((opcionf==1)|| (opcionf==2)||(opcionf==3)||(opcionf==4)))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
		printf("\n\tDato inv�lido, ingrese nuevamente los datos.");//Texto que le dice al usuario que ingreso un dato inv�lido y que lo vuelva a intentar.
		getch();//Retorna el car�cter le�do desde el teclado.
		SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	}//Fin del if.
	}//Fin del do (su fin es while).
	while(!((opcionf==1)|| (opcionf==2)||(opcionf==3)||(opcionf==4)));
}//Fin de la Funci�n si_fumo.

int si_bebo()//Funci�n para cuando el usuario ingiera bebidas alcoh�licas.
{//Inicio de la Funci�n si_bebo.
	int opcionb;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
	{//Inicio del do.
		printf("\n\t>�Qu� tan seguido tomas alcohol a la semana?(Elige una opci�n)\n");//Texto que pregunta al usuario qu� tan seguido toma.
		printf("\t 1-Muy seguido\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
		printf("\t 2-De vez en cuando\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
		printf("\t 3-Rara vez\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
		printf("\t 4-Casi nada\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
		printf("\t Opci�n: ");//Texto que pide al usuario que ingrese la opci�n que corresponda a sus h�bitos.
		scanf("%d",&opcionb);//Recibe el valor que el usuario ingreso. 
		
		if(!((opcionb==1)|| (opcionb==2)||(opcionb==3)||(opcionb==4)))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
	    {//Inicio del if.
			SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
			printf("\n\tDato inv�lido, ingrese nuevamente los datos.");//Texto que le dice al usuario que ingreso un dato inv�lido y que lo vuelva a intentar.
			getch();//Retorna el car�cter le�do desde el teclado.
			SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
		}//Fin del if.
	}//Fin del do (su fin es while).
	while(!((opcionb==1)|| (opcionb==2)||(opcionb==3)||(opcionb==4)));
		
}//Fin de la Funci�n si_bebo.

int si_trabajo()//Funci�n cuando el usuario ejerce un trabajo.
{//Inicio de la Funci�n si_trabajo.
	char conf_trab[2],af[2]={'S'},af2[2]={'s'};//Variables de tipo caracter.
	
	printf("\n\t�Tu trabajo es alguno de los siguientes?(S;N): ");//Texto que dice al usuario si tiene alguno de los siguientes trabajos que a continuaci�n se muestran.
	printf("\n\t-Bomberos");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Polic�as");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Buzos");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Guardaespaldas");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Piloto de autos");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\t-Piloto de aviones");//Texto que dice al usuario un trabajo de riesgo.
	printf("\n\tRespuesta: ");//Texto que pregunta al usuario si ejerce alguno de los trabajos antes mencionados, debe escribir S si lo ejerce y N si no.
	scanf("%s",&usuario.conf_trab);//Recibe el valor que el usuario ingreso.
		
	if(strcmp(usuario.conf_trab,af)==0 || strcmp(usuario.conf_trab,af2)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		si_trabajos();//Invoca a la Funci�n si_trabajos.
	}//Fin del if
	
}//Fin de la Funci�n si_trabajo.

int si_hago_deporte()//Funci�n cuando el usuario pr�ctica deporte.
{//Inicio de la Funci�n si_hago_deporte.
	char conf_dep[2],af[2]={'S'},af2[2]={'s'};//Variables de tipo caracter.

	printf("\n\t�Practicas alguno de los siguientes deportes?(S;N): ");//Texto que dice al usuario si pr�ctica alguno de los siguientes deportes que a continuaci�n se muestran.
	printf("\n\t-Buceo");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Esqu�");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Paracaid�smo");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Espeleolog�a");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Torero");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\t-Alpinismo");//Texto que dice al usuario un deporte de riesgo.
	printf("\n\tRespuesta: ");//Texto que pregunta al usuario si ejerce alguno de los deportes antes mencionados, debe escribir S si lo ejerce y N si no.
	scanf("%s",&usuario.conf_dep);//Recibe el valor que el usuario ingreso.
					
	if(strcmp(usuario.conf_dep,af)==0 || strcmp(usuario.conf_dep,af2)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		si_deportes();//Invoca a la Funci�n si_deportes.
	}//Fin del if.
	
}//Fin de la Funci�n si_hago_deporte.

int si_deportes()//Funci�n para cuando el usuario hace uno de los deportes mostrados.
{//Inicio de la Funci�n si_deportes.
	int opciond;//Variable de tipo entero.
	
	printf("\n\t>�Qu� tan seguido lo practica?(Elige una opci�n)\n");//Texto que pregunta al usuario qu� tan seguido hace deporte.
	printf("\t 1-Muy seguido\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
	printf("\t 2-De vez en cuando\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
	printf("\t 3-Rara vez\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
	printf("\t 4-Casi nada\n");//Texto que dice la opci�n que hay a elegir dependiendo de sus h�bitos.
	printf("\t Opci�n: ");//Texto que pide al usuario que ingrese la opci�n que corresponda a sus h�bitos.
	scanf("%d",&opciond);//Recibe el valor que el usuario ingreso.
	
}//Fin de la Funci�n si_deportes.

int si_trabajos()//Funci�n para cuando el usuario tiene uno de los trabajos mostrados.
{//Inicio de la Funci�n si_trabajo.
	int opciont;//Varibale de tipo entero.
	
	printf("\n\t>�Cu�nto lleva en ese trabajo?(Elige una opci�n)\n");//Texto que pregunta al usuario cu�nto tiempo lleva en su trabajo.
	printf("\t 1-Menos de un mes\n");//Texto que dice la opci�n que hay del tiempo que lleva en su trabajo.
	printf("\t 2-Menos de seis meses\n");//Texto que dice la opci�n que hay del tiempo que lleva en su trabajo.
	printf("\t 3-Menos de un a�o\n");//Texto que dice la opci�n que hay del tiempo que lleva en su trabajo.
	printf("\t 4-M�s de un a�o\n");//Texto que dice la opci�n que hay del tiempo que lleva en su trabajo.
	printf("\t 5-M�s de tres a�os\n");//Texto que dice la opci�n que hay del tiempo que lleva en su trabajo.
	printf("\t 6-M�s de cinco a�os\n");//Texto que dice la opci�n que hay del tiempo que lleva en su trabajo.
	printf("\t 7-M�s de diez a�os\n");//Texto que dice la opci�n que hay del tiempo que lleva en su trabajo.
	printf("\t Opci�n: ");//Texto que pide al usuario que ingrese la opci�n que corresponda al tiempo que lleva en su trabajo.
	scanf("%d",&opciont);//Recibe el valor que el usuario ingreso.
	
}//Fin de la Funci�n si_trabajo.

char prima_segun_edad_M ()
{//Inicio de la Funci�n prima_segun_edad_M.
	int i;//Variable de tipo entero.
	float j;//Variable de tipo real.
	
	if(usuario.edad>=17 && usuario.edad<=46)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		j=3.00;//Inicializaci�n de la variable en tres.
		
		for(i=17;i<usuario.edad;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	    {//Inicio del for.
			j=j-0.01;
		}//Fin del for.
		usuario.prima_edad=j;
	}//Fin del if.
	
	if(usuario.edad>46 && usuario.edad<=75)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		j=2.72;//Inicializaci�n de la variable en dos punto setenta y dos.
		for(i=47;i<usuario.edad;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	    {//Inicio del for.
			j=j+0.01;
		}//Fin del for.
		usuario.prima_edad=j;
	}//Fin del if.
	
}//Fin de la Funci�n prima_segun_edad_M.

float prima_segun_edad_F()
{//Inicio de la Funci�n prima_segun_edad_F.
	int i;//Variable de tipo entero.
	float j;//Variable de tipo real.
	
	
	if(usuario.edad>=17 && usuario.edad<=46)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		j=2.00;//Inicializaci�n de la variable en dos.
		
		for(i=17;i<usuario.edad;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	    {//Inicio del for.
			j=j-0.01;
		}//Fin del for.
		usuario.prima_edad=j;
	}//Fin del if.
	
	if(usuario.edad>46 && usuario.edad<=75)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		j=1.72;//Inicializaci�n de la variable en uno punto setenta y dos. 
		for(i=47;i<usuario.edad;i++)//Este bucle o ciclo es una estructura de control en la que se puede indicar desde el pricipio el n�mero m�nimo de iteraciones que la instrucci�n realizar�.
	    {//Inicio del for.
			j=j+0.01;
		}//Fin del for.
		usuario.prima_edad=j;
	}//Fin del if.

}//Fin de la Funci�n prima_segun_edad_F.

int verificacion_sexo()
{//Inicio de la Funci�n verificacion_sexo.
	char m[2]={'M'},f[2]={'F'};//Variables de tipo caracter.
	
	if(strcmp(usuario.sexo,m)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		prima_segun_edad_M ();//Invoca a la Funci�n prima_segun_edad_M.
	}//Fin del if.
	
	if(strcmp(usuario.sexo,f)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		prima_segun_edad_F ();//Invoca a la Funci�n prima_segun_edad_F.
	}//Fin del if.
	
}//Fin de la Funci�n verificacion_sexo.

double menu_coberturas_samsem()//CALCULO DE LA COBERTURA CON EL MONTO.
{//Inicio de la Funci�n menu_coberturas_samsem.
	int opcion;//Variable de tipo entero.	
	double prima_sam_cobertura;//Variable de tipo doble precisi�n.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	printf("\n\n\n\t\t\t\t\t\tTIPOS DE COBERTURAS");//Tres saltos de l�nea y tabula seis veces, texto que dice tipos de coberturas.
	detalles2();//Invoca a la Funci�n detalles2.
	SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	printf("\n\n\tSeguros de vida 'HEBA INSURANCE' contiene coberturas como: ");//Texto que le dice al usuario que a continuaci�n le mostrar� el tipo de coberturas que tiene.
	printf("\n\n\n\t1.-Invalidez total y permanente.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t2.-Muerte accidental.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t3.-Muerte colectiva.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t4.-P�rdida de miembros.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t5.-Seguro de desempleo.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t6.-Estudios de los hijos.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\n\t�Qu� opci�n elije?: ");//Texto que pregunta al usuario que elija una opci�n.
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
	
}//Fin de la Funci�n menu_coberturas_samsem.

double menu_coberturas_n()//C�lculo del porcentaje de la cobertura dada el monto.
{//Inicio de la Funci�n menu_coberturas_n.
	int opcion;//Variable de tipo entero.
	double prima_n_cobertura;//Variable de tipo doble precisi�n.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	printf("\n\n\n\t\t\t\t\t\tTIPOS DE COBERTURAS");//Tres saltos de l�nea y tabula seis veces, texto que dice tipos de coberturas.
	detalles2();//Invoca a la Funci�n detalles2.
	SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
	printf("\n\n\tSeguros de vida 'HEBA INSURANCE' contiene coberturas como: ");//Texto que le dice al usuario que a continuaci�n le mostrar� el tipo de coberturas que tiene.
	printf("\n\n\n\t1.-Invalidez total y permanente.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t2.-Muerte accidental.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t3.-Muerte colectiva.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t4.-P�rdida de miembros.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t5.-Seguro de desempleo.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\t6.-Estudios de los hijos.");//Texto que dice al usuario el tipo de cobertura que tenemos.
	printf("\n\n\t�Qu� opci�n elije?: ");//Texto que pregunta al usuario que elija una opci�n.
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
	
}//Fin de la Funci�n menu_coberturas_n.

double prima_basica_y_porcentaje_de_cobertura()
{//Inicio de la Funci�n prima_basica_y_porcentaje_de_cobertura.
	double division;//Variable de tipo doble precisi�n.
		
	usuario.prima_basica= trunc(usuario.monto/1000) * usuario.prima_edad;//Operaci�n.
	usuario.porcentaje_cobertura= (usuario.prima_basica)*(usuario.prima_n_cobertura);//Operaci�n.
	usuario.prima_total= usuario.prima_basica+usuario.porcentaje_cobertura;//Operaci�n.
	
}//Fin de la Funci�n prima_basica_y_porcentaje_de_cobertura.

double extras_fumar()
{//Inicio de la Funci�n extras_fumar.
	char af[2]={'S'};//Variable de tipo caracter.
	
	if(strcmp(usuario.conf_fumar,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		usuario.extra_fumar= (usuario.prima_total)*(.30);//Operaci�n.
	}//Fin del if.
	else
	{//Inicio del else.
		usuario.extra_fumar=0;//Inicializaci�n en cero.
	}//Fin del else.
	
}//Fin de la Funci�n extras_fumar.

double extras_beber()
{//Inicio de la Funci�n extras_beber.
	char af[2]={'S'};//Variable de tipo caracter.
	
	if(strcmp(usuario.conf_beber,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		usuario.extra_beber= (usuario.prima_total)*(.20);//Operaci�n.
	}//Fin del if.
	else
	{//Inicio del else.
		usuario.extra_beber=0;//Inicializaci�n en cero.
	}//Fin del else.
	
}//Fin de la Funci�n extras_beber.

double extras_deportes()
{//Inicio de la Funci�n extras_deportes. 
	char af[2]={'S'};//Variable de tipo caracter.
	
	if(strcmp(usuario.conf_dep,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		usuario.extra_deportes= (usuario.prima_total)*(.50);//Operaci�n.
	}//Fin del if.
	else
	{//Inicio del else.
		usuario.extra_deportes=0;//Inicializaci�n en cero.
	}//Fin del else.
	
}//Fin de la Funci�n extras_deportes.

double extras_trabajos()
{//Inicio de la Funci�n extras_trabajos.
	char af[2]={'S'};//Variable de tipo caracter.
	
	if(strcmp(usuario.conf_trab,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
    {//Inicio del if.
		usuario.extra_trabajos= (usuario.prima_total)*(.60);//Operaci�n.
	}//Fin del if.
	else
	{//Inicio del else.
		usuario.extra_trabajos= 0;//Inicializaci�n en cero.
	}//Fin del else.
	
}//Fin de la Funci�n extras_trabajos. 

double modos_pago()
{//Inicio de la Funci�n modos_pago.
	double pago;//Variable de tipo doble precisi�n.
	int opcion_p;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	printf("\n\t Los modos de pago son: " );//Texto que le dice al usuario que tenemos algunos modos de pago y a continuaci�n se mostrar�n.
	printf("\n\t1.-Anual");//Texto que le dice al usuario que puede pagar anualmente.
	printf("\n\t2.-Semestral");//Texto que le dice al usuario que puede pagar semestralmente.
	printf("\n\t3.-Trimestral");//Texto que le dice al usuario que puede pagar trimestralmente.
	printf("\n\t4.-Mensual");//Texto que le dice al usuario que puede pagar mensualmente.
	printf("\n\n\t�Qu� opci�n elije?: ");//Texto que le dice al usuario que puede elegir un modo de pago.
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
	
}//Fin de la Funci�n modos_pago.

double extras()
{//Inicio de la Funci�n extras.
	double suma_extras;//Variable de tipo doble precisi�n.
	double subtotal;//Variable de tipo doble precisi�n.
	double iva;//Variable de tipo doble precisi�n.
	double total;//Variable de tipo doble precisi�n.
	
	extras_fumar();//Invoca a la Funci�n extras_fumar.
	extras_beber();//Invoca a la Funci�n extras_beber.
	extras_deportes();//Invoca a la Funci�n extras_deportes.
	extras_trabajos();//Invoca a la Funci�n extras_trabajos.
	modos_pago();//Invoca a la funcion modos_pago
	
	usuario.suma_extras= usuario.extra_beber + usuario.extra_deportes + usuario.extra_fumar + usuario.extra_trabajos + usuario.modos_pago;//Operaci�n.
	usuario.subtotal= usuario.suma_extras + usuario.prima_total;//Operaci�n.
	usuario.iva= usuario.subtotal*(.16);//Operaci�n.
	usuario.total= usuario.subtotal+usuario.iva;//Operaci�n.

}//Fin de la Funci�n extras.

double verificacion()/*FUNCI�N PARA DETERMINAR 2 DE LOS CAMINOS POSIBLES, CUANDO LA PRIMA EXCEDE EL MONTO DE 
$2,000,000 Y SI NO ES AS�, REALIZA LA PRIMA DE MANERA NORMAL*/
{//Inicio de la Funci�n verificacion.
	if(usuario.monto>2000000)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
	{//Inicio del if.
		calculo_de_prima_sam();//Invoca a la Funci�n calculo_de_prima_sam.
	}//Fin del if.
	else
	{//Inicio del else.
		calculo_de_prima_n();//Invoca a la Funci�n calculo_de_prima_n.
	}//Fin del else.
	
}//Fin de la Funci�n verificacion.

int calculo_de_prima_sam()//C�LCULO DE LA PRIMA EXCEDIDA DE LA SAMSEM.
{//Inicio de la Funci�n calculo_de_prima_sam.
	menu_coberturas_samsem();//Invoca a la Funci�n menu_coberturas_samsem.
}//Fin de la Funci�n calculo_de_prima_sam.

int calculo_de_prima_n()//C�LCULO DE LA PRIMA SIN EXCESO DE LA SAMSEM.
{//Inicio de la Funci�n calculo_de_prima_n.
	menu_coberturas_n();//Invoca a la Funcion menu_coberturas_n.
	verificacion_sexo();//Invoca a la Funci�n verificacion_sexo.
	prima_basica_y_porcentaje_de_cobertura();//Invoca a la Funci�n prima_basica_y_porcentaje_de_cobertura.
	extras();
	printf("\n\n\t ");//Da dos saltos de l�nea y tabula.
	system("pause");//Lo pausa para que el usuario pueda ver lo que est� haciendo el programa.
	
}//Fin de la Funci�n calculo_de_prima_n.

int tipo_de_cobertura_imp()
{//Inicio de la Funci�n tipo_de_coberturas_imp.
	switch(usuario.coberturas_opcion)
	{//Inicio del switch.
		case 1:
			printf("Inv�lidez total y permanente.");
		break;
		case 2:
			printf("Muerte accidental.");
		break;
		case 3:
			printf("Muerte colectiva.");
		break;
		case 4:
			printf("P�rdida de miembros.");
		break;
		case 5:
			printf("Seguro de desempleo.");
		break;
		case 6:
			printf("Estudios de los hijos.");
		break;
	}//Fin del switch.
	
}//Fin de la Funci�n tipo_de_coberturas_imp.

int impresion_de_datos()//IMPRIME LOS DATOS (COMPROBANTE).
{//Inicio de la Funci�n impresion_de_datos.
    system("cls");//Borra la pantalla.
	printf("\n\t\t\t\t\t\tVERIFICACI�N DE DATOS");//Texto que verifica datos.
	printf("\n\n\n\tNOMBRE: %s",usuario.nombre);//Texto que da el nombre.
	printf("\n\n\tSEXO: %s",usuario.sexo);//Texto que da el sexo.
	printf("\n\n\tEDAD: %d",usuario.edad);//Texto que da la edad.
	printf("\n\n\tFECHA DE NACIMIENTO: %s",usuario.fecha_de_nacimiento);//Texto que da la fecha de nacimiento.
	printf("\n\n\tRFC: %s",usuario.rfc);//Texto que da el RFC.
	printf("\n\n\tDIRECCION: %s",usuario.direccion1);//Texto que da la direcci�n.
	printf("\n\n\n\tNOMBRE DEL BENEFICIARIO: %s",benef.nombreb);//Texto que da el nombre del beneficiario. 
	printf("\n\n\tSEXO: %s",benef.sexob);//Texto que da el sexo del beneficiario.
	printf("\n\n\tEDAD: %d",benef.edadb);//Texto que da la edad del beneficiario.
	printf("\n\n\n\tTIPO DE COBERTURA: ");//Texto que da el tipo de cobertura que escogi� el usuario.
	tipo_de_cobertura_imp();//Invoca a la Funci�n tipo_de_cobertura_imp.
	printf("\n\n\tSUMA ASEGURADA: %.2lf",usuario.monto);//Texto que le da al usuario el monto que ingreso.
	printf("\n\n\tPRIMA B�SICA: %.2lf",usuario.prima_basica);//Texto que le da al usuario la prima b�sica. 
	printf("\n\n\tPORCENTAJE DE COBERTURA: %.2lf\n",usuario.porcentaje_cobertura);//Texto que le da al usuario el porcentaje de la cobertura.
	printf("\n\n\tPRIMA B�SICA TOTAL: %.2lf",usuario.prima_total);//Texto que le da al usuario la prima b�sica total.	
	printf("\n\n\tCOSTOS EXTRAS (ALCOHOL,FUMAR,ETC.): %.lf",usuario.suma_extras);//Texto que le da al usuario lo que pagar� de costos extra.
	printf("\n\n\tSUBTOTAL (PRIMA TOTAL + RECARGOS): %.2lf",usuario.subtotal);//Texto que le da al usuario el subtotal de la prima total m�s recargos.
	printf("\n\n\tIVA: %.2lf",usuario.iva);//Texto que le da al usuario el iva.
	printf("\n\n\tTOTAL: %.2lf\n",usuario.total);//Texto que le da al usuario el total del seguro que est� contratando.
	printf("\n\n\tPAGO QUE DEBER� EFECTUAR SEG�N LA OPCI�N ELEGIDA: %.2lf",(usuario.total)/(usuario.division_pago) );//Texto que le da al usuartio el pago que deber� hacer dependiendo del modo de pago que escogi�.
	printf("\n\n\n\n\t�GRACIAS POR CONTRATAR ESTE SERVICIO!");//Texto que agradece al usuario por contratar el seguro.
	printf("\n\n\t");//Da dos saltos de l�nea y tabula.
	
}//Fin de la Funci�n impresion_de_datos.

int datos_personales()//DATOS DEL USUARIO QUE INGRES�.
{//Inicio de la Funci�n datos_personales.
	char nombre[50],direccion1[100],a;//Variables de tipo caracter.
	char sexo[2],resp[2],fecha_de_nacimiento[10];//Variables de tipo caracter.
	char conf_fumar[2],conf_beber[2],dep[2],trab[2],enfer[2],enfermedad[20];//Variables de tipo caracter.
	char m[2]={'M'},f[2]={'F'},af[2]={'S'},neg[2]={'N'};//Variables de tipo caracter.
	
	int  edad;//Variable de tipo entero.
	
	double monto;//Variable de tipo doble precisi�n.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
    {//Inicio del do.
		do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
        {//Inicio del do.
			do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
            {//Inicio del do.
				do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
                {//Inicio del do.
					SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
					
					system("cls");//Borra la pantalla.
					
					do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
                    {//Inicio del do.
						ConfiguraIdioma();//Configura el idioma espa�ol.
						printf("\n\t");//Da un salto de l�nea y tabula.
						printf("\n\n\t\t\t\t\t CUESTIONARIO DE DATOS PERSONALES ");//Texto que dice cuestionario de datos personales.
						detalles1();//Invoca a la Funci�n detalles1.
						SetConsoleTextAttribute (hConsoleHandle, 15);//Sirve para ponerle color al fondo y/o al texto.
						printf("\n\n\n\n\tNOTA: Ingrese los datos con letra may�scula.");//Texto que especifica como debe ser llenado el cuestionario.
						printf("\n\n\n\tDATOS PERSONALES: ");//Texto que dice datos personales.
						printf("\n\n\t� Nombre completo: ");//Texto que pide al usuario que ingrese su nombre completo.
						fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
						gets(usuario.nombre);//Es un puntero al comienzo de la cadena y devuelve dicho puntero si tiene �xito o NULL si falla.
						
						do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
	                    {//Inicio del do.
							printf("\n\t�Ingresaste tu nombre correctamente?(S;N): ");//Texto que le pregunta al usuario si ningreso su nombre correctamente.
							scanf("%s",&resp);//Recibe el valor que el usuario ingreso.
							
							if(strcmp(resp,neg)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
	                        {//Inicio del if.
								system("cls");//Borra la pantalla.
							}//Fin del if.
							
							if(!((strcmp(resp,neg)==0) || (strcmp(resp,af)==0)))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
	                        {//Inicio del if.
								SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
								printf("\n\tDato inv�lido, ingrese nuevamente los datos.");//Texto que le dice al usuario que ingreso un dato inv�lido.
								getch();//Retorna el car�cter le�do desde el teclado.
								SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
							}//Fin del if.
						}//Fin del do (su fin es while).
						while(!((strcmp(resp,neg)==0) || (strcmp(resp,af)==0)));
					}//Fin del do (su fin es while).
					while(strcmp(resp,neg)==0);
					
					do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
                	{//Inicio del do.
					printf("\n\tFecha de Nacimiento(DD/MM/AAAA): ");//Texto que pide al usuario su fecha de nacimiento.
					fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
					scanf("%s",&usuario.fecha_de_nacimiento);//Lee el valor de la cadena de caracteres.
					if(!(strlen(usuario.fecha_de_nacimiento)==10))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
                    {//Inicio del if.
						SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
						printf("\n\tDato inv�lido, ingrese nuevamente los datos.");//Texto que dice al usuario que la edad es inv�lida.
						getch();//Retorna el car�cter le�do desde el teclado.
						SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
						printf("\n\t");
					}//Fin del if.
					}//Fin del do (su fin es while).
					while(!(strlen(usuario.fecha_de_nacimiento)==10));
					
					do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
                	{//Inicio del do.
						printf("\n\t� Edad: ");//Texto que pide al usuario que ingrese su edad.
						scanf("%d",&usuario.edad);//Lee la cadena de caracteres.	
						
						if(usuario.edad<=17 || usuario.edad>=75)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
	                    {//Inicio del if.
							SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
							printf("\n\tEdad inv�lida, ingrese nuevamente los datos.");//Texto que dice al usuario que la edad es inv�lida.
							getch();//Retorna el car�cter le�do desde el teclado.
							printf("\n\t");
							SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
						}//Fin del if.
					}//Fin del do (su fin es while).
					while(usuario.edad<=17 || usuario.edad>=75);
				}//Fin del do (su fin es while).
				while(usuario.edad<=17 || usuario.edad>=75);
				
				do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
                {//Inicio del do.
				printf("\n\t� Sexo (M;F): ");//Texto que pregunta al usuario su sexo.
				fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
				scanf("%s",&usuario.sexo);//Lee el caracter.
			    	if(!((strcmp(usuario.sexo,m)==0) || (strcmp(usuario.sexo,f)==0) ))//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
                    {//Inicio del if.
						SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
						printf("\n\t\aSexo inv�lido, ingrese nuevamente los datos.");//Texto que dice al usuario que la edad es inv�lida.
						getch();//Retorna el car�cter le�do desde el teclado.
						printf("\n\t");
						SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
					}//Fin del if.
				}//Fin del do (su fin es while).
				while(!((strcmp(usuario.sexo,m)==0 ) || (strcmp(usuario.sexo,f)==0 )));
			}//Fin del do (su fin es while).
			while(!((strcmp(usuario.sexo,m)==0 ) || (strcmp(usuario.sexo,f)==0 )));
			
			
			printf("\n\t�Ingrese su RFC: ");
			fflush(stdin);
			scanf("%s",&usuario.rfc);
			
			printf("\n\n\tDIRECCION:");//Texto que pide al usuario su direcci�n. 
			printf("\n\tIngresar los datos separados por una coma en formato: ");//Texto que especifica como debe ingresar los datos el usuario.
			printf("\n\tCalle/Cerrada,No.Interior,No.Exterior,Colonia,Municipio/Delegaci�n.");//Texto que especifica (ejemplo) como debe ingresar los datos el usuario.
			printf("\n\n\t� Ingresa tu direcci�n actual: ");//Texto que pide al usuario que ingrese su direcci�n actual.
			fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
			gets(usuario.direccion1);//Es un puntero al comienzo de la cadena y devuelve dicho puntero si tiene �xito o NULL si falla.
			
			printf("\n\t� �Usted fuma? (S;N): ");//Texto que pregunta al usuario si fuma.
			fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&usuario.conf_fumar);//Lee el caracter.
			
			if(strcmp(usuario.conf_fumar,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				si_fumo();//Invoca a la Funci�n si_fumo.
			}//Fin del if.
			
			printf("\n\t� �Ingiere bebidas alcoh�licas? (S;N): ");//Texto que pregunta al usuario si bebe.
			fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&usuario.conf_beber);//Lee el caracter.
			
			if(strcmp(usuario.conf_beber,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				si_bebo();//Invoca a la Funci�n si_bebo.
			}//Fin del if.
			
			printf("\n\t� �Practica alg�n deporte?(S;N): ");//Texto que pregunta al usuario si pr�ctica alg�n deporte.
			fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&dep);//Lee el cartacter.
			
			if (strcmp(dep,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				si_hago_deporte();//Invoca a la Funci�n si_hago_deporte.	
			}//Fin del if.
			
			printf("\n\t� �Ejerce alg�n trabajo?(S;N): ");//Texto que pregunta al usuario si trabaja.
			fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&trab);//Lee el caracter.
			
			if (strcmp(trab,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				si_trabajo();//Invoca a la Funci�n si_trabajo.
			}//Fin del if.
			
			printf("\n\t� �Padece alguna enfermedad?(S;N): ");//Texto que pregunta al usuario si padece alguna enfermedad.
			scanf("%s",&usuario.enfer);//Lee el caracter.
			
			if (strcmp(usuario.enfer,af)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
            {//Inicio del if.
				printf("\n\t �Cu�l?: ");//Teto que pregunta al usuario cu�l enfermedad padece.
				scanf("%s",&usuario.enfermedad);//Lee la cadena de caracteres.
			}//Fin del if.
			
			do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
        	{//Inicio del do.
			printf("\n\n\t>>�Cu�l es el monto que quiere tener(m�nimo $1,000),(maximo $2,000,000)?: $");//Texto que pide al usuario que ingrese la cantidad de dinero que desea.
			scanf("%lf",&usuario.monto);//Recibe el valor que el usuario ingreso.
			if(usuario.monto<1000 || usuario.monto>2000000)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
            {//Inicio del if.
               SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
				printf("\n\tMonto inv�lido, ingrese nuevamente los datos.");//Texto que dice al usuario que la edad es inv�lida.
				getch();//Retorna el car�cter le�do desde el teclado.
				SetConsoleTextAttribute (hConsoleHandle,15);//Sirve para ponerle color al fondo y/o al texto.
			}//Fin del if.
			}//Fin del do (su fin es while).
			while(usuario.monto<1000 || usuario.monto>2000000);
		}//Fin del do (su fin es while).
		while(usuario.monto<1000 || usuario.monto>2000000);
		printf("\n\n\t�Ingres� los datos correctos?(S;N): ");//TExto que pregunta al usuario si ingreso los datos correctos.
		fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
		scanf("%s",&resp);//Lee el car�cter.
	}//Fin del do (su fin es while).
	while(strcmp(resp,neg)==0);	
	
}//Fin de la Funci�n datos_personales.

int beneficiario()//CAPTURA DE DATOS DEL BENEFICIARIO.
{//Inicio de la Funci�n beneficiario.
	char nombreb[100],sexob[2],m[2]={'m'},f[2]={'f'};//Variables de tipo caracter.
	char direccion2[100],fecha_de_nacimiento2[10],paren[20];//Variables de tipo caracter.
	char resp_b[2],neg[2]={'N'};//Variables de tipo caracter.
	int edadb;//Variable de tipo entero.
	
	HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	
	do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
    {//Inicio del do.
		do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
        {//Inicio del do.
			do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
            {//Inicio del do.		
				system("cls");//Borra la pantalla.
				do //La instrucci�n ejecuta una instrucci�n o un bloque de instrucciones repetidamente hasta que una expresi�n especificada se eval�a como falsa.
                {//Inicio del do.
					printf("\n\t");//DA un salto de l�nea y tabula.
					printf("\n\n\t\t\t\t CUESTIONARIO DE DATOS PERSONALES DEL BENEFICIARIO");//Da dos saltos de l�nea y tabula 4 veces, texto que dice cuestionario de datos personales del beneficiario..
					detalles2();//Invoca a la Funci�n detalles2.
					SetConsoleTextAttribute (hConsoleHandle, 15);//Sirve para ponerle color al fondo y/o al texto.
					printf("\n\n\n\n\tDATOS PERSONALES:");//Texto que dice datos personales.
					printf("\n\n\t� Nombre completo: ");//Texto que pide al usuario que ingrese su nombre completo.
					fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
					gets(benef.nombreb);//Es un puntero al comienzo de la cadena y devuelve dicho puntero si tiene �xito o NULL si falla.
					printf("\n\t�Ingresaste su nombre correctamente?(S;N): ");//Texto que le pregunta al usuario si ningreso su nombre correctamente.
					scanf("%s",&resp_b);//Recibe el valor que el usuario ingreso.
						if(strcmp(resp_b,neg)==0)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
                        {//Inicio del if.
							system("cls");//Borra la pantalla.
						}//Fin del if.					
				}//Fin del do (su fin es while).
				while(strcmp(resp_b,neg)==0);
				
				printf("\n\tFecha de Nacimiento(DD/MM/AAAA): ");//Texto que pide al usuario su fecha de nacimiento.
				fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
				scanf("%s",&benef.fecha_de_nacimiento2);//Lee la cadena de caracteres.
				printf("\n\t� Edad: ");//Texto que pregunta al usuario la edad del beneficiario.
				scanf("%d",&benef.edadb);//Rcibe el valor que el usuario ingreso.
				
				if(benef.edadb<=16||benef.edadb>=77)//Sirve para ejecutar una serie de instrucciones si se cumple una determinada condici�n, debe ser verdadera para que se cumpla.
                {//Inicio del if.
					SetConsoleTextAttribute (hConsoleHandle,12);//Sirve para ponerle color al fondo y/o al texto.
					printf("\n\tIngresa la edad adecuada para el tr�mite (a partir de los 17 a�os): ");//Texto que pide al usuario que ingrese la edad adecuada.
					system("pause");//Lo pausa para que el usuario pueda ver lo que est� haciendo el programa.
				}//Fin del if.
			}//Fin del do (su fin es while).
			while (benef.edadb<=16||benef.edadb>=77);
		
			printf("\n\t� Parentesco (Hij@, Espos@, etc.): ");//Texto que pregunta al usuario que parentesco tiene con el beneficiario.	
			fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&benef.paren);//Lee la cadena de caracteres.
			printf("\n\t� Sexo (M;F): ");//Texto que pregunta al usuario que sexo tiene el beneficiario.
			fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
			scanf("%s",&benef.sexob);//Lee el caracter.
		}//Fin del do (su fin es while).
		while(strcmp(benef.sexob,m)==0 || strcmp(benef.sexob,f)==0);
		
		printf("\n\n\tDIRECCI�N:");//Texto que pide al usuario su direcci�n. 
		printf("\n\tIngresar los datos separados por una coma en formato: ");//Texto que especifica como debe ingresar los datos el usuario.
		printf("\n\tCalle/Cerrada,No.Interior,No.Exterior,Colonia,Municipio/Delegaci�n.");//Texto que especifica (ejemplo) como debe ingresar los datos el usuario.
		printf("\n\n\t� Ingresa tu direcci�n actual: ");//Texto que pide al usuario que ingrese su direcci�n actual.
		fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
		gets(benef.direccion2);//Es un puntero al comienzo de la cadena y devuelve dicho puntero si tiene �xito o NULL si falla.
		printf("\n\n\t�Ingresaste los datos correctos? (S;N): ");//Texto que pregunta si el usuario ingreso los datos correctos.
		fflush(stdin);//Antes de leer un car�cter con scanf, hay que vaciar (limpiar) el buffer del teclado. Para ello, se utiliza la funci�n fflush. A fflush hay que indicarle el buffer a limpiar.
		scanf("%s",&resp_b);//Lee el caracter.
	}//Fin del do (su fin es while).
	while(strcmp(resp_b,neg)==0);
	
}//Fin de la Funci�n beneficiario.

int main()
{//Inicio de la Funci�n principal (main).

	presentacion_equipo();//Invoca a la Funci�n presentacion_equipo. 
	getch();//Retorna el car�cter le�do desde el teclado.
	system("cls");//Borra la pantalla.
	presentacion();//Invoca a la Funci�n presentacion.
	system("cls");//Borra la pantalla.
	datos_personales();//Invoca a la Funci�n datos_personales.
	beneficiario();//Invoca a la Funci�n beneficiario.
	system("cls");//Borra la pantalla.
	verificacion();//Invoca a la Funci�n verificacion.
	impresion_de_datos();//Invoca a la Funci�n impresion_de_datos.
	
	printf("\n\t");//Da un salto de l�nea y tabula.
	system(" pause");//Lo pausa para que el usuario pueda ver lo que est� haciendo el programa.
	
}//Fin de la Funci�n principal (main).
