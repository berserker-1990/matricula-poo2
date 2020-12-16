#include <string>
using namespace std;
#include "Persona.cpp";

class Alumno : virtual public Persona { // @suppress("Class has a virtual method and non-virtual destructor")
	private:
	string numeroRegistro;

	public:
	//constructores
		virtual Alumno();

		virtual Alumno(string nroRegistro){
			numeroRegistro=nroRegistro;
		}

	//Métodos get y set
		string getNumeroRegistro() {
			return numeroRegistro;
		}

		void setNumeroRegistro(string nroRegistro) {
			numeroRegistro = nroRegistro;
		}

		virtual string toString(){
			return "Identidad: " + identidad + "\nNombre: " + nombre + " " + apellido + "\nNro registro: " + numeroRegistro;
		}

		virtual string saludar(string nombre){
			return "Hola soy el ingeniero " + nombre;
		}
};




