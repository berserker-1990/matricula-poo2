#include <string>
using namespace std;
#include "Persona.cpp"

class Profesor : public Persona { // @suppress("Class has a virtual method and non-virtual destructor")
	private:
	string numeroEmpleado;
	float sueldo = 0.0;

	public:
	//constructores
		Profesor();
		Profesor(string nroEmpleado, float s){
			numeroEmpleado = nroEmpleado;
			sueldo = s;
		};
	//Métodos get y set
		string getNumeroEmpleado() {
			return numeroEmpleado;
		}

		void setNumeroEmpleado(string nroEmpleado) {
			numeroEmpleado = nroEmpleado;
		}

		float getSueldo() {
			return sueldo;
		}

		void setSueldo(float s) {
			sueldo = s;
		}

		//Implementando el método de la clase absgtracta
		string saludar(string nombre){
			return "Hola soy el profesor: " + nombre;
		}
};



