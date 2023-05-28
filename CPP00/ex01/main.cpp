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

int main ()
{
    Phonebook   Phonebook;
    std::string command;

    Phonebook.oldest_index = 0;
    std::cout<<"Enter command : ADD, SEARCH, EXIT";
    while (std::getline(std::cin, command))
    {
        if (command == "ADD")
        {
            addContact(&Phonebook.contacts[PhoneBook.oldest_index]);
            Phonebook.oldest_index++;
        }
        else if (command == "SEARCH")
            searchContact(command);
        else if (command == "EXIT")
            break ;
        else
            std::cout<<"Wrong input, try again";
    }
}