#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
    Brain* _brain;

public:
    Cat();
    Cat(const Dog& other);
    Cat& operator=(const Cat& other);
    virtual ~Cat();

    void makeSound() const;
};

#endif