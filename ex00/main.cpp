#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

return 0;
}*/
int main()
{
    std::cout << "--- PRUEBAS CORRECTAS ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Type: " << j->getType() << std::endl;
    std::cout << "Type: " << i->getType() << std::endl;
    
    i->makeSound(); // Imprime Meow! (Gracias a virtual)
    j->makeSound(); // Imprime Woof! (Gracias a virtual)
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "\n--- PRUEBAS INCORRECTAS (WRONG) ---" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "Type: " << wrongCat->getType() << std::endl;
    
    // Al NO ser virtual, C++ ejecuta la función de la clase del PUNTERO
    // ignorando que el objeto en memoria es un WrongCat.
    wrongCat->makeSound(); 
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}