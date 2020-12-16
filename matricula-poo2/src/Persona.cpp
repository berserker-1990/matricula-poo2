#include <string>
using namespace std;

class Persona{ // @suppress("Class has a virtual method and non-virtual destructor")
	private:
		string identidad;
		string nombre;
		string apellido;

		//Método virtual para la clase abstracta Persona
		virtual string saludar(string nombre) = 0;

	public:
		//COnstructores
		Persona();
		Persona (string id, string name, string ap){
			identidad = id;
			nombre = name;
			apellido = ap;
		};

		//Métodos get y set
		string getIdentidad() {
			return identidad;
		};

		void setIdentidad(string id) {
			identidad = id;
		}

		string getNombre() {
			return nombre;
		}
		void setNombre(string name) {
			nombre = name;
		}

		string getApellido() {
			return apellido;
		}

		void setApellido(string ap) {
			apellido = ap;
		}
};
