/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axgimene <axgimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:50:45 by axgimene          #+#    #+#             */
/*   Updated: 2026/04/14 12:50:45 by axgimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
public:
    std::string ideas[100];

    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();
};

#endif