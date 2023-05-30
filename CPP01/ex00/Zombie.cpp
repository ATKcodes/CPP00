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

#include <iostream>

void    Zombie(){

}

void    ~Zombie(){
    std::cout << this->_name << std::endl;
}

void    announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}