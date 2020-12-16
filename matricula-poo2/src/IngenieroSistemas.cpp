#include <string>
using namespace std;
#include "Persona.cpp";

class IngenieroSistemas : virtual public Persona { // @suppress("Class has a virtual method and non-virtual destructor")
	private:
	string numeroColegiado;

	public:
	//constructores
		virtual IngenieroSistemas();
		virtual IngenieroSistemas(string nroColegiado){
			numeroColegiado= nroColegiado;
		};
	//Métodos get y set
		string getNumeroColegiado() {
			return numeroColegiado;
		}

		void setNumeroColegiado(string nroColegiado) {
			numeroColegiado = nroColegiado;
		}

		//Implementando el método de la clase absgtracta
		virtual string toString(){
			return "Identidad: " + identidad + "\nNombre: " + nombre + " " + apellido + "\nNro colegiado: " + numeroColegiado;
		}

		virtual string saludar(string nombre){
			return "Hola soy el ingeniero " + nombre;
		}
};



