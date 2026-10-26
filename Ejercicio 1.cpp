
#include <iostream>
#include <iomanip>
using namespace std;

// Area del triangulo
double area(double base, double altura) {
    return (base * altura) / 2.0;
}

// Area del cuadrado
double area(double lado) {
    return lado * lado;
}

// Area del circulo
double area(int tipo, double radio) {
    const double PI = 3.141592653589793;
    return PI * radio * radio;
}

// Area del trapecio
double area(double baseMayor, double baseMenor, double altura) {
    return ((baseMayor + baseMenor) * altura) / 2.0;
}

int main() {
    int opcion;
    double b, h, lado, radio, B, bMenor;

    cout << fixed << setprecision(2);

    do {
        cout << "\n=== CALCULO DE AREAS ===\n";
        cout << "1. Triangulo\n";
        cout << "2. Cuadrado\n";
        cout << "3. Circulo\n";
        cout << "4. Trapecio\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Base del triangulo: ";
            cin >> b;
            cout << "Altura del triangulo: ";
            cin >> h;

            if (b > 0 && h > 0)
                cout << "Area del triangulo = "
                     << area(b, h) << "\n";
            else
                cout << "Las medidas deben ser mayores que cero.\n";
            break;

        case 2:
            cout << "Lado del cuadrado: ";
            cin >> lado;

            if (lado > 0)
                cout << "Area del cuadrado = "
                     << area(lado) << "\n";
            else
                cout << "La medida debe ser mayor que cero.\n";
            break;

        case 3:
            cout << "Radio del circulo: ";
            cin >> radio;

            if (radio > 0)
                cout << "Area del circulo = "
                     << area(3, radio) << "\n";
            else
                cout << "El radio debe ser mayor que cero.\n";
            break;

        case 4:
            cout << "Base mayor del trapecio: ";
            cin >> B;
            cout << "Base menor del trapecio: ";
            cin >> bMenor;
            cout << "Altura del trapecio: ";
            cin >> h;

            if (B > 0 && bMenor > 0 && h > 0)
                cout << "Area del trapecio = "
                     << area(B, bMenor, h) << "\n";
            else
                cout << "Las medidas deben ser mayores que cero.\n";
            break;

        case 0:
            cout << "Programa finalizado.\n";
            break;

        default:
            cout << "Opcion no valida. Intenta de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}
