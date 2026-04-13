#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = NULL;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}