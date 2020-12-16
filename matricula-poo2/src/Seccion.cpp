#include <string>
#include <list>
using namespace std;
#include "ProfesorIS.cpp";
#include "Alumno.cpp"
#include "Clase.cpp"

class Seccion { // @suppress("Class has a virtual method and non-virtual destructor")
	private:
		string seccionId;
		string hora;
		ProfesorIS profesorIs;
		Clase clase;
		list <Alumno> listaAlumnos;

	public:
	//constructores
		Seccion();

		Seccion(string seccionid, string h, ProfesorIS profesoris, Clase c){
			seccionId = seccionid;
			hora = h;
			profesorIs = profesoris;
			clase = c;
		}

	//Métodos get y set
		string getSeccionId() {
				return seccionId;
			}

			void setSeccionId(string seccionid) {
				seccionId = seccionid;
			}

			string getHora() {
				return hora;
			}

			void setHora(string h) {
				hora = h;
			}

			ProfesorIS getProfesorIs() {
				return profesorIs;
			}

			void setProfesorIs(ProfesorIS profesoris) {
				profesorIs = profesoris;
			}

			list<Alumno> getListaAlumnos() {
				return listaAlumnos;
			}

			void setListaAlumnos(list<Alumno> listalumnos) {
				listaAlumnos = listalumnos;
			}

			Clase getClase() {
				return clase;
			}

			void setClase(Clase c) {
				clase = c;
			}

			//Agregando el alumno a la lista de laumnos de la sección
			void addAlumno(Alumno alumno) {
				listaAlumnos.push_back(alumno);
			}

};



