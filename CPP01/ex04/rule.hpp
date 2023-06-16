#ifndef RULE_HPP
# define RULE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Rule
{
	private :
		std::string	_file;
		std::string	_to_search;
		std::string	_replace_with;
		std::string	_filecopy;
	public :
		Rule(std::string file, std::string to_search, std::string replace_with, std::string filecopy);
		~Rule();
		std::string	get_file() const;
		std::string	get_to_search() const;
		std::string	get_replace_with() const;
		std::string	get_filecopy() const;
};

#endif