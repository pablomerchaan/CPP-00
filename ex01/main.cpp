#include "contacts.hpp"
#include "phonebook.hpp"
#include <string>

int	main()
{
	Phonebook	phonebook;
	std::string command;

	std::cout << "You can enter one of three commands, ADD, SEARCH and EXIT" << std::endl;
	while (true)
	{
		if (!getline(std::cin, command))
			break ;
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
