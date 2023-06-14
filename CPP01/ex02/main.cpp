/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:57:27 by amaso             #+#    #+#             */
/*   Updated: 2023/06/06 16:57:28 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string brain;
    std::string *pointer;
    std::string &reference = brain;

    brain = "HI THIS IS BRAIN";
    pointer = &brain;
    std::cout << "memory address of the string : " << &brain << std::endl;
    std::cout << "memory address of the pointer : " << pointer << std::endl;
    std::cout << "memory address of the reference : " << &reference << std::endl;
    std::cout << "value of the string : " << brain << std::endl;
    std::cout << "value the pointer points to : " << *pointer << std::endl;
    std::cout << "value of the reference : " << reference << std::endl;
}