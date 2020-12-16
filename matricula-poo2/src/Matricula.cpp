#include <iostream>
#include <list>
using namespace std;
#include "Clase.cpp"
#include "Seccion.cpp"

class Matricula {
	public:
		virtual void AgregarAlumno(Seccion seccion, Alumno alumno) = 0;
		virtual void CancelarAlumno(Seccion seccion, Alumno alumno) = 0;
};
