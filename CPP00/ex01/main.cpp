/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:59:23 by amaso             #+#    #+#             */
/*   Updated: 2023/05/25 15:59:34 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp" 

std::string	get_line()
{
	std::string line;

	while (line.empty() && std::cin.good())
		getline(std::cin, line);
	return (line);
}

void    nokiaAdd(Phonebook *Nokia)
{
    Contact c;
    std::string input;
        std::cout << "What's his first name? : ";
    input = get_line();
    std::cout << std::endl;
    c.setfirstname(input);
        std::cout << "What's his last name? : ";
    input = get_line();
    std::cout << std::endl;
    c.setlastname(input);
        std::cout << "What's his nickname? : ";
    input = get_line();
    std::cout << std::endl;
    c.setnickname(input);
        std::cout << "What's his Number? : ";
    input = get_line();
    std::cout << std::endl;
    c.setphonenumber(input);
        std::cout << "What's his darkest secret? : ";
    input = get_line();
    std::cout << std::endl;
    c.setdarkestsecret(input);
    Nokia->addContact(c);
}

int main ()
{
    Phonebook Nokia;
    std::string line;
    std::cout << "ADD, SEARCH, EXIT" << std::endl;
    while(std::cin >> line)
    {
        if (std::cin.eof())
            break ;
        if (line.compare("ADD") == 0)
            nokiaAdd(&Nokia);
        else if (line.compare("SEARCH") == 0)
        {
            if (Nokia.getOldestIndex() == 0)
                std::cout << "No contacts have been saved" << std::endl;
            else
                Nokia.nokiaSearch();
        }
        else if (line.compare("EXIT") == 0)
            break ;
        else
            std::cout << "Wrong input, try again." << std::endl;
        std::cout << "ADD, SEARCH, EXIT" << std::endl;
    }
    std::cout << "Exit" << std::endl;
}