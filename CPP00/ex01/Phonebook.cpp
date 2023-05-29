/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:19:51 by amaso             #+#    #+#             */
/*   Updated: 2023/05/23 17:59:30 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"


Phonebook::Phonebook():_oldestIndex(0)
{
}

Phonebook::~Phonebook()
{
}

void    Phonebook::addContact(const Contact &c)
{
    this->_oldestIndex %= 8;
    this->_contacts[_oldestIndex] = c;
    this->_oldestIndex++;
}

int     Phonebook::getOldestIndex()
{
    return this->_oldestIndex;
}

void    nokiaSearch()
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::cout << "     index | first name |  last name |  nickname" << std::endl;
    for (int i = 0; i < this->getOldestIndex(); i++)
    {
        firstname = this->_contacts[i].getfirstname();
        lastname = this->_contacts[i].getlastname();
        nickname = this->_contacts[i].getnickname();
        if (firstname.length() > 9)
            firstname[9] = '.';
        if (lastname.length() > 9)
            lastname[9] = '.';
        if (nickname.length() > 9)
            nickname[9] = '.';
        std::cout << std::right << std::setw(10) << (i + 1) << " | " << std::right << std::setw(10) << firstname << " | "
            << std::right << std::setw(10) << lastname << " | " << std::right << std::setw(10) << nickname << std::endl;
    }
}