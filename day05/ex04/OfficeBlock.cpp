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

Bureaucrat::Bureaucrat(Bureaucrat const &){}


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
            throw OfficeBlock::UnknownFormException();
        try
        {
            _signer->signForm(*form);
            _executer->executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            delete form;
            throw OfficeBlock::BolckLowGradeException();
        }
    }