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

# include "Contact.hpp"

class Phonebook {
	private:
		Contact contacts[8];
		int		oldest_index;

	public:
		Phonebook();
		~PhoneBook();
		void	addContact(const Contact &c);
		void	displayContacts();
		void	searchContact(int index);
		int		get_oldest_index() const;
}:

#endif
