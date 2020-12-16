#include <iostream>
#include <list>
using namespace std;
#include "ProfesorIS.cpp";
#include "Alumno.cpp"
#include "Clase.cpp"
#include "Seccion.cpp"

class Registro{
	public:

	//Método para crear profesor
	virtual ProfesorIS CrearProfesorIs(string identidad, string nombre, string apellido, string numeroColegiado,string numeroEmpleado,float sueldo) = 0;

	//Método para crear un alumno
	virtual Alumno CrearAlumno(string identidad, string nombre, string apellido, string numeroRegistro) = 0;

	//Método para crear una clase
	virtual Clase CrearClase(string codigo, string nombre) = 0;

	//Método para crear una sección
	virtual Seccion CrearSeccion(string seccionId, string hora, ProfesorIS profesorIs, Clase clase) = 0;

	//Método para eliminar
	virtual bool EliminarSeccion(string seccionId,  list<Seccion> listSecciones)=0;
};
