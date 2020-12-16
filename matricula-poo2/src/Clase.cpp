#include <string>
using namespace std;

class Clase { // @suppress("Class has a virtual method and non-virtual destructor")
	private:
		string codigo;
		string nombre;

	public:
	//constructores
		Clase();

		Clase(string c, string n){
			codigo = c;
			nombre = n;
		}

	//Métodos get y set
		string getCodigo() {
			return codigo;
		}

		void setCodigo(string c) {
			codigo = c;
		}

		string geNombre() {
			return nombre;
		}

		void setNombre(string n) {
			nombre = n;
		}

		string toString(){
			return "Código: " + codigo + "\nNombre: " + nombre;
		}
};



