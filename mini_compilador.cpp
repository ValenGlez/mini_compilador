#include <iostream>
#include <string>
using namespace std;

string miniCompilador(const string& secretMessage) {
    int valorNumerico = 0;
    string resultado;

    for (char simbolo : secretMessage) {
        switch (simbolo) {
            case '#':
                valorNumerico += 1;
                break;
            case '@':
                valorNumerico -= 1;
                break;
            case '*':
                valorNumerico *= 2;
                break;
            case '&':
                resultado += to_string(valorNumerico);
                break;
            default:
                // Con el default ignoro cualquier simbolo no reconocido
                break;
        }
    }

    return resultado;
}

int main() {
    string secretMessage;
    cout << "Ingrese el mensaje secreto: ";
    cin >> secretMessage;

    string resultado = miniCompilador(secretMessage);
    cout << "El resultado es: " << resultado << endl;

    return 0;
}
