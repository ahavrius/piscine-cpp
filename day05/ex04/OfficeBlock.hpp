// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OfficeBlock.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 22:29:08 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 22:29:08 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

class OfficeBlock{
    Intern *    _intern;
    Bureaucrat* _signer;
    Bureaucrat* _executer;

    OfficeBlock(Intern const & copy);
    OfficeBlock& operator=(OfficeBlock const & copy);

public:
    OfficeBlock(void);
    OfficeBlock(Intern *, Bureaucrat *, Bureaucrat *);
    ~OfficeBlock();
    
    class BolckLowGradeException: public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("grade is too low ! ! !");
            }
    };

    class UnknownFormException: public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("unknown form");
            }
    };
    class NoInternException: public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("no intern");
            }
    };
    class NoSignerException: public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("no signer bureaucrat");
            }
    };
    class NoExecuterException: public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("no executer bureaucrat");
            }
    };

    void    setIntern(Intern &);
    void    setSigner(Bureaucrat &);
    void    setExecutor(Bureaucrat &);

    void doBureaucracy(std::string, std::string);
};


#endif