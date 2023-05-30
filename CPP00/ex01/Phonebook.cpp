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

void    Phonebook::nokiaSearch()
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    int input;
    std::cout << "     index | first name |  last name |  nickname" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (!this->_contacts[i].getfirstname().empty())
        {
            firstname = this->_contacts[i].getfirstname();
            firstname = firstname.substr(0, 10);
            lastname = this->_contacts[i].getlastname();
            lastname = lastname.substr(0, 10);
            nickname = this->_contacts[i].getnickname();
            nickname = nickname.substr(0, 10);
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
    std::cout << "Which contact would you like to see more details?" << std::endl;
    std::cin >> input;
    if (input > 0 && input < 9 && !this->_contacts[input - 1].getfirstname().empty())
    {
        std::cout << "First name : " << this->_contacts[input - 1].getfirstname() << std::endl;
        std::cout << "Last name : " << this->_contacts[input - 1].getlastname() << std::endl;
        std::cout << "Nickname : " << this->_contacts[input - 1].getnickname() << std::endl;
        std::cout << "Phone number : " << this->_contacts[input - 1].getphonenumber() << std::endl;
        std::cout << "Darkest secret : " << this->_contacts[input - 1].getdarkestsecret() << std::endl;
    }
    else
        std::cout << "Invalid input, try again with ADD, SEARCH or EXIT" << std::endl;
}