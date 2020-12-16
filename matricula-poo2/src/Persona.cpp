#include <string>
using namespace std;

class Persona{ // @suppress("Class has a virtual method and non-virtual destructor")
	private:
		string identidad;
		string nombre;
		string apellido;

		//Método virtual para la clase abstracta Persona
		virtual string toString() = 0;
		virtual string saludar(string nombre) = 0;

	public:
		//COnstructores
		virtual Persona();
		virtual Persona (string id, string name, string ap){
			identidad = id;
			nombre = name;
			apellido = ap;
		};

		//Métodos get y set
		virtual string getIdentidad() {
			return identidad;
		};

		virtual void setIdentidad(string id) {
			identidad = id;
		}

		virtual string getNombre() {
			return nombre;
		}

		virtual void setNombre(string name) {
			nombre = name;
		}

		virtual string getApellido() {
		 	return apellido;
		}

		void setApellido(string ap) {
			apellido = ap;
		}
};
