#include <iostream>
#include <string>

using namespace std;

class Jugador {
private:
    string nombre;
    string opcion;
    int puntaje;

public:
    Jugador() : puntaje(0) {}

    void setOpcion() {
        cout << "Ingrese la opcion para el jugador" << nombre << " (piedra, papel o tijera): ";
        cin >> opcion;
    }

    void setPuntaje(int nuevoPuntaje) {
        puntaje = nuevoPuntaje;
    }

    int getPuntaje() const {
        return puntaje;
    }

    void setNombre(const string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    string getNombre() const {
        return nombre;
    }
    void comparar(const Jugador& otroJugador) const {
        if (puntaje > otroJugador.getPuntaje()) {
            cout << nombre << " tiene un puntaje mayor." << endl;
        }
        else if (puntaje < otroJugador.getPuntaje()) {
            cout << otroJugador.getNombre() << " tiene un puntaje mayor." << endl;
        }
        else {
            cout << "Ambos jugadores tienen el mismo puntaje." << endl;
        }
    }
};

int main() {
    Jugador jugador1, jugador2;
    cout << "Ingrese el nombre del jugador 1: ";
    string nombreJugador1;
    cin >> nombreJugador1;
    jugador1.setNombre(nombreJugador1);
    jugador1.setOpcion();

    cout << "Ingrese el nombre del jugador 2: ";
    string nombreJugador2;
    cin >> nombreJugador2;
    jugador2.setNombre(nombreJugador2);
    jugador2.setOpcion();
    jugador1.setPuntaje(0);
    jugador2.setPuntaje(0);
    jugador1.comparar(jugador2);

    return 0;
}

