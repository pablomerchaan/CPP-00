#include "contacts.hpp"
#include "phonebook.hpp"
#include <string>

int	main()
{
	Phonebook Phonebook;
	std::string str;

	str = "EXIT";
	phonebook.i = 0;
	while (strcmp(std::cin, str))
	{
		if (!(strcmp(std::cin, "ADD")))
			phonebook.addcontact();
		else if (!(strcmp(std::cin, "SEARCH")))
			phonebook.searchcontact();
	}
	return (0);
}
