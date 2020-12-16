#include <string>
using namespace std;

class Persona{
	private:
		string identidad;
		string nombre;
		string apellido;

		//Método virtual para la clase abstracta Persona
		virtual string saludar(string nombre) = 0;
	public:
		//COnstructores
		Persona();
		Persona (string identidad, string nombre, string apellido);

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
