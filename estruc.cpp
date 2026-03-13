//Kleber Jesus Montes Compañ
//Ing Animacion Digital
//ID: 00623774
/* estructura(clase) string*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string nombre, apellidos;

	cout << "Ingresa tu nombre: ";
	cin >> nombre;
	cin.ignore();

	cout << "Ingresa tus apellidos: ";
	getline(cin,apellidos); //cin >> apellidos

	cout << "Hola " << nombre << " " << apellidos << " mucho gusto " << endl;

    //CONCATENAR CADENAS
    string descripcion, lugar;
    int tiempo;
    cout << "Ingresa el lugar de origen: ";
    getline(cin, lugar);
    cout << "Ingresa el tiempo que has vivido ahi: ";
    cin >> tiempo;

    descripcion = "No conozco " + lugar + " pero creo que seria muy bonito visitarlo porque has vivido " + to_string(tiempo) + " años";
    cout << descripcion << endl;

    //MEDIR LA LONGITUD DE UN TEXTO LENGTH()
    cout << "Tu nombre " << nombre << " tiene " << nombre.length() << " caracteres\n";
    cout << "Tu apellido " << apellidos << " tiene " << apellidos.length() << " caracteres\n";
    cout << "La descripción tiene " << descripcion.length() << " caracteres \n";

    //Separar los caracteres de una cadena
    cout << nombre[0] << endl;
    cout << nombre[1] << endl;
    cout << nombre[2] << endl;

    //Utilizando
    for (int i = 0; i < lugar.length(); i++) {
        cout << lugar[i] << endl;
    }
    cout << endl;

    //Impriemiendo invertido
    for (int i = lugar.length() - 1; i >= 0; i--) {
        cout << lugar[i] << endl;
    }
    cout << endl;

	return 0;
}