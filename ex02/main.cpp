/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axgimene <axgimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:18:35 by axgimene          #+#    #+#             */
/*   Updated: 2026/04/14 13:19:22 by axgimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // const AAnimal* meta = new AAnimal(); // <--- SI DESCOMENTAS ESTO, NO DEBERÍA COMPILAR

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // Miau
    j->makeSound(); // Guau

    delete j;
    delete i;

    return 0;
}