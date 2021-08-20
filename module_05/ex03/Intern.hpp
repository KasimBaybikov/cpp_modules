#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& ref);
		Intern& operator = (const Intern& ref);

		Form* makeForm(std::string& nameForm, std::string& target);
};
#endif
