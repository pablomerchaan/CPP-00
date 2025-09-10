#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

Phonebook::Phonebook() : i(0) {}

void	Phonebook::add_contact()
{
	contacts[i % 8].setcontact();
	i++;
}

static std::string truncate(const std::string &str)
{
	if (str.size() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Phonebook::display_contacts()
{
	int	j;

	j = 0;
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
while (j < i && j < 8)
	{
		std::cout << std::setw(10) << j << "|";
		std::cout << std::setw(10) << truncate(contacts[j].show_firstname()) << "|";
		std::cout << std::setw(10) << truncate(contacts[j].show_lastname()) << "|";
		std::cout << std::setw(10) << truncate(contacts[j].show_nickname()) << std::endl;
		j++;
	}
}
void	Phonebook::search_contact()
{
	int choice;

	display_contacts();
	std::cout << "Enter index to view details: ";
	if (!(std::cin >> choice)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input!" << std::endl;
		return;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (choice >= 0 && choice < 8 && !contacts[choice].show_firstname().empty())
		contacts[choice].show_contact();
	else
		std::cout << "Invalid index!" << std::endl;
}
