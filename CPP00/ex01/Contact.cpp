/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:44:28 by amaso             #+#    #+#             */
/*   Updated: 2023/05/23 17:37:26 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setfirstname(std::string firstname)
{
	this->_firstname = firstname;
	return;
}

void	Contact::setlastname(std::string lastname)
{
	this->_lastname = lastname;
	return ;
}

void	Contact::setnickname(std::string nickname)
{
	this->_nickname = nickname;
	return;
}

void	Contact::setphonenumber(std::string phonenumber)
{
	this->_phonenumber = phonenumber;
	return ;
}

void	Contact::setdarkestsecret(std::string darkestsecret)
{
	this->_darkestsecret = darkestsecret;
	return ;
}

std::string	Contact::getfirstname()const
{
	return this->_firstname;
}

std::string	Contact::getlastname() const
{
	return this->_lastname;
}

std::strinh	Contact::getnickname() const
{
	return this->_nickname;
}

std::string	Contact::getphonenumber() const
{
	return this->_phonenumber()const;
}

std::string	Contact::getdarkestsecret() const
{
	return this->_darkestsecret;
}
