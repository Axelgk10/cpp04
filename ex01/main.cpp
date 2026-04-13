#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int size = 4;
    Animal* array[size];

    // 1. Crear mitad perros, mitad gatos
    for (int i = 0; i < size; i++) {
        if (i < size / 2)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }

    // 2. Probar Copia Profunda
    std::cout << "\n--- TEST DE COPIA PROFUNDA ---" << std::endl;
    Dog basic;
    {
        Dog tmp = basic; // Aquí se llama al constructor de copia
    } // Aquí tmp se destruye. Si la copia fuera superficial, borraría el cerebro de basic.
    // Si basic sigue vivo y funcional aquí, la copia fue PROFUNDA.

    // 3. Limpieza total
    std::cout << "\n--- LIMPIEZA DEL ARRAY ---" << std::endl;
    for (int i = 0; i < size; i++) {
        delete array[i];
    }

    return 0;
}