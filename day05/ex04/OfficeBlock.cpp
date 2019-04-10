// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OfficeBlock.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 22:29:03 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 22:29:04 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

OfficeBlock::OfficeBlock(void): _intern(NULL), _signer(NULL), _executer(NULL){}

OfficeBlock::OfficeBlock(OfficeBlock const &){}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *bureau_sign, Bureaucrat *bureau_execute):
_intern(intern), _signer(bureau_sign), _executer(bureau_execute){}

OfficeBlock::~OfficeBlock(void){}

OfficeBlock& OfficeBlock::operator=(OfficeBlock const &){
    return *this;
}

    void    OfficeBlock::setIntern(Intern &intern){
        _intern = &intern;
    }
    void    OfficeBlock::setSigner(Bureaucrat & bureaucrat){
        _signer = &bureaucrat;
    }

    void    OfficeBlock::setExecutor(Bureaucrat & bureaucrat){
        _executer = &bureaucrat;
    }

    void OfficeBlock::doBureaucracy(std::string form_name, std::string name){
        Form * form = NULL;

        if (!this->_intern)
	    	throw OfficeBlock::NoInternException();
    	if (!this->_signer)
			throw OfficeBlock::NoSignerException();
		if (!this->_executer)
			throw OfficeBlock::NoExecuterException();
        if (!(form = _intern->makeForm(form_name, name)))
            throw OfficeBlock::NoFormException();
        try
        {
            _signer->signForm(*form);
            _executer->executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            delete form;
            throw Form::GradeTooLowException();
        }
    }


/**//**//**//**//**//**/

OfficeBlock::NoFormException::NoFormException(void) {}

OfficeBlock::NoFormException::NoFormException(NoFormException const &obj){
	*this = obj;}

OfficeBlock::NoFormException::~NoFormException(void) throw() {}

OfficeBlock::NoFormException &OfficeBlock::NoFormException::operator=(NoFormException const &) {
	return (*this);}

const char* OfficeBlock::NoFormException::what() const throw()
{
	return ("unknown form");
}


OfficeBlock::NoInternException::NoInternException(void){}

OfficeBlock::NoInternException::NoInternException(NoInternException const &){}

OfficeBlock::NoInternException::~NoInternException(void) throw(){}

OfficeBlock::NoInternException &OfficeBlock::NoInternException::operator=(NoInternException const &) {
	return (*this);
}
const char* OfficeBlock::NoInternException::what() const throw()
{
	return ("OfficeBlock error: no intern presents");
}
OfficeBlock::NoSignerException::NoSignerException(void){}

OfficeBlock::NoSignerException::NoSignerException(NoSignerException const &){}

OfficeBlock::NoSignerException::~NoSignerException(void) throw(){}

OfficeBlock::NoSignerException &OfficeBlock::NoSignerException::operator=(NoSignerException const &){
	return (*this);
}
const char* OfficeBlock::NoSignerException::what() const throw(){
	return ("OfficeBlock error: no signer Presents");
}
OfficeBlock::NoExecuterException::NoExecuterException(void){}

OfficeBlock::NoExecuterException::NoExecuterException(NoExecuterException const &){}

OfficeBlock::NoExecuterException::~NoExecuterException(void) throw(){}

OfficeBlock::NoExecuterException &OfficeBlock::NoExecuterException::operator=(NoExecuterException const &){
	return (*this);
}

const char* OfficeBlock::NoExecuterException::what() const throw()
{
	return ("OfficeBlock error: no interns presents");
}