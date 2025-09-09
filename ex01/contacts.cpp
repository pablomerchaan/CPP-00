#include "contacts.hpp"

#include <iostream>

Contact::Contact() {};

void	Contact::setcontact()
{
	std::cout << "Name: ";
	std::getline(std::cin, name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phonenumber);
}

void	Contact::show_contact() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phonenumber << std::endl;
}
