#include "rule.hpp"

Rule::Rule(std::string file, std::string to_search, std::string replace_with, std::string filecopy) :
_file(file), _to_search(to_search), _replace_with(replace_with), _filecopy(filecopy)
{
}

Rule::~Rule()
{
}

std::string	Rule::get_file() const
{
	return this->_file;
}

std::string	Rule::get_to_search() const
{
	return this->_to_search;
}

std::string	Rule::get_replace_with() const
{
	return this->_replace_with;
}

std::string	Rule::get_filecopy() const
{
	return this->_filecopy;
}