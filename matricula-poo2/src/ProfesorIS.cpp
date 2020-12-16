#include <string>
using namespace std;
#include "Profesor.cpp";
#include "IngenieroSistemas.cpp";

class ProfesorIS : public Persona, IngenieroSistemas { // @suppress("Class has a virtual method and non-virtual destructor")
	private:
	string area;

	public:
	//constructores
		ProfesorIS();
		ProfesorIS(string a){
			area = a;
		};
	//Métodos get y set
		string getArea() {
			return area;
		}

		void setArea(string a) {
			area = a;
		}

		//Implementando el método de la clase absgtracta
		string toString(){
			return "Identidad: " + identidad + "\nNombre: " + nombre + " " + apellido + "\nNro colegiado: " + numeroColegiado;
		}

		string saludar(string nombre){
			return "Hola soy el profesor de IS " + nombre + " " + apellido;
		}
};



