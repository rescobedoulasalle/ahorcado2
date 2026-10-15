#include <iostream>

using namespace std;

void dibujarAhorcado(int errores) {

    /*
    Imprime a el ahorcado en base a la cantidad de  errores
    */
    cout << "\n  +---+     " << endl;
    cout << "  |   |     " << endl;
    cout << "  |   " << (errores >= 1 ? "O" : " ") << "     " << endl;
    cout << "  |  " << (errores >= 3 ? "/" : " ") << (errores >= 2 ? "|" : " ") << (errores >= 4 ? "\\" : " ") << "    " << endl;
    cout << "  |   " << (errores >= 5 ? "|" : " ") << "     " << endl;
    cout << "  |  " << (errores >= 6 ? "/ \\" : "   ") << "    " << endl;
    cout << " ===" << endl << endl;
}

int main() {

    dibujarAhorcado(0);
    dibujarAhorcado(1);
    dibujarAhorcado(2);
    dibujarAhorcado(3);
    dibujarAhorcado(4);
    dibujarAhorcado(5);
    dibujarAhorcado(6);

    return 0;

}
