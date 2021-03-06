#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::AMateria()
{
	this->type = "Null";
};

AMateria::~AMateria(){}

AMateria::AMateria(const AMateria& ref)
{
	this->type = ref.type;
}

AMateria & AMateria::operator=(const AMateria &ref) {
	this->type = ref.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "cure")
		 std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
	else
		 std::cout << "Wrong Materia!" << std::endl;
}
