/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:12:52 by amaso             #+#    #+#             */
/*   Updated: 2023/05/30 17:13:02 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie(){

}

void    ~Zombie(){
    std::cout << this->_name << "ded" << std::endl;
}

void    announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

std::string    getname()
{
    return(this->_name);
}

void    setname(std::string name)
{
    this->_name = name;
}