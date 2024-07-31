//Calificado
#include <iostream>

int main() {
    int opcion;

    std::cout << "Ingrese una opcion (1-4): ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Seleccionaste la opcion 1." << std::endl;
            break;
        case 2:
            std::cout << "Seleccionaste la opcion 2." << std::endl;
            break;
        case 3:
            std::cout << "Seleccionaste la opcion 3." << std::endl;
            break;
        case 4:
            std::cout << "Seleccionaste la opcion 4." << std::endl;
            break;
        default:
            std::cout << "Opcion no valida. Por favor, selecciona un numero entre 1 y 4." << std::endl;
            break;
    }

    return 0;
}
