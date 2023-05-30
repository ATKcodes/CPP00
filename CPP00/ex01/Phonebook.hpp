/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:46:30 by amaso             #+#    #+#             */
/*   Updated: 2023/05/23 12:55:52 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {
	private:
		Contact	_contacts[8];
		int		_oldestIndex;

	public:
		Phonebook();
		~Phonebook();
	
		void	addContact(const Contact &c);
		void	searchContact(std::string string);
		int		getOldestIndex();
		void    nokiaSearch();
};

#endif
