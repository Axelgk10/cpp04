#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "WrongCat constructor" << std::endl;
}
void WrongCat::makeSound() const {
    std::cout << "Wrong Meow!" << std::endl;
}