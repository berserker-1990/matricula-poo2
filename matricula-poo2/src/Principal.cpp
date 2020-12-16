//============================================================================
// Name        : Principal.cpp
// Author      : Kelvin Ortiz
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Programa para matricula
//============================================================================
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "ProfesorIS.cpp";
#include "Alumno.cpp"
#include "Clase.cpp"
#include "Seccion.cpp";
#include "IngenieroSistemas.cpp"

int main() {
	//Declarando Variables
	list <ProfesorIS> listProfesores;
	list <Alumno> listAlumnos;
	list<Clase> listClases;
	list<Seccion> listSecciones;

	int opcion;//Variable que almacena la opcion seleccionada  del menu principal(DEBE SER UN ENTERO)
	int opcionRegistrar;//Variable que almacena la opcion seleccionada  del menu registrar
	int opcionMatricular;//Variable que almacena la opcion seleccionada  del menu matricular
	bool salir = false;//Variable para validar la opcion salir

	//Creando el administrador del programa
	//IngenieroSistemas administradorPrograma = new IngenieroSistemas("123456", "Juan", "Pérez", "56789");

	cout << "Menú" << endl; // prints !!!Hello World!!!
	return 0;
}
