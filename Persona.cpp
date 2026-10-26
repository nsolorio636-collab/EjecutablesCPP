#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Declaracion de la clase Persona
class Persona {
public:
    string nombre;
    int edad;
    string sexo;
};

// Funcion que imprime los datos de una persona
void imprimir(Persona persona_imp) {
    cout << "\n=== DATOS DE LA PERSONA ===\n";
    cout << "Nombre: " << persona_imp.nombre << "\n";
    cout << "Edad: " << persona_imp.edad << " anios\n";
    cout << "Sexo: " << persona_imp.sexo << "\n";
}

int main() {
    Persona persona;

    cout << "Escribe el nombre completo: ";
    getline(cin, persona.nombre);

    cout << "Escribe la edad: ";
    cin >> persona.edad;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Escribe el sexo: ";
    getline(cin, persona.sexo);

    imprimir(persona);

    return 0;
}
