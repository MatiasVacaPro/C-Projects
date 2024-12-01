// Programa que valida el uso de los tipos correctos de datos ingresados por teclado dentro de una ejecucion
// Version 1.0.1.0

#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
using namespace std;

int main() {

    string entrada;
    cout << "Ingrese un numero definido: ";
    cin >> entrada;

    try {
        // Verificar si todos los caracteres son digitos
        for (char c : entrada) {
            if (!isdigit(c)) {
                throw invalid_argument("Error: el valor ingresado no es un numero.");
            }
        }

        // Convertir la entrada a un entero
        int numero = stoi(entrada);

        // Verificar si el numero es par o impar
        if (numero % 2 == 0) {
            cout << "Es par\n";
        } else {
            cout << "No es par\n";
        }

    } catch (const invalid_argument &e) {
        cout << "El mensaje de error capturado fue: " << e.what() << endl;
    } catch (const out_of_range &e) {
        cout << "Error: el numero ingresado es demasiado grande." << endl;
    }

    cout << "El programa ha terminado.";
    return 0;
}
