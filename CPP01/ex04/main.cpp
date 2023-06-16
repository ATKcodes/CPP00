#include "rule.hpp"

void	replace_string(std::string &text,const std::string first,const std::string second)
{
	std::string::size_type start_pos = 0;

	while ((start_pos = text.find(first, start_pos)) != std::string::npos)
	{
		text.erase(start_pos, first.length());
		text.insert(start_pos, second);
		start_pos += second.length();
	}
}

std::string	getFilePath(const std::string &fileName)
{
	return fileName;
}

void	Search_and_replace(Rule *rule)
{
	std::string text;
	std::ifstream input_file(getFilePath(rule->get_file()).c_str());
	if (!input_file.good())
	{
		std::cout << "Error: Input file does not exist" << std::endl;
		return;
	}
	std::ofstream output_file(getFilePath(rule->get_filecopy()).c_str());
	if (!output_file.good())
	{
		std::cout << "Error: Output file error" << std::endl;
		return;
	}

	if (input_file.is_open() && output_file.is_open())
	{
		while (std::getline(input_file, text))
		{
			replace_string(text, rule->get_to_search(), rule->get_replace_with());
			output_file << text << std::endl;
		}
		input_file.close();
		output_file.close();
	}
	else
		std::cout << "Error: file" << std::endl;

}

int	main(int argc, char	*argv[])
{
	if (argc != 4)
	{
		std::cout << "wrong input idiot " << std::endl;
		return 1;
	}
	std::string file = argv[1];
	std::string	to_search = argv[2];
	std::string	replace_with = argv[3];
	std::string	filecopy = file + ".replace";
	Rule rule(file, to_search, replace_with, filecopy);
	Search_and_replace(&rule);
}