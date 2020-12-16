#include <string>
using namespace std;
#include "Persona.cpp"

class IngenieroSistemas : public Persona { // @suppress("Class has a virtual method and non-virtual destructor")
	private:
	string numeroColegiado;

	public:
	//constructores
		IngenieroSistemas();
		IngenieroSistemas(string nroColegiado){
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
		string saludar(string nombre){
			return "Hola soy el ingeniero " + nombre;
		}
};



