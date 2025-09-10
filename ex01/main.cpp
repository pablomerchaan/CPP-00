#include "contacts.hpp"
#include "phonebook.hpp"
#include <string>

int	main()
{
	Phonebook	phonebook;
	std::string command;

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
