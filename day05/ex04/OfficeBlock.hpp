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
#include <string>

class OfficeBlock{
    Intern *    _intern;
    Bureaucrat* _signer;
    Bureaucrat* _executer;

    OfficeBlock(OfficeBlock const & copy);
    OfficeBlock& operator=(OfficeBlock const & copy);

public:
    OfficeBlock(void);
    OfficeBlock(Intern *, Bureaucrat *, Bureaucrat *);
    ~OfficeBlock();
    
    class NoInternException : public std::exception
		{
			public:
				
				NoInternException(void);
				NoInternException(NoInternException const &obj);
				virtual ~NoInternException(void) throw();
				NoInternException &operator=(NoInternException const &r);
				virtual const char* what() const throw();
		};

		class NoSignerException : public std::exception
		{
			public:
				
				NoSignerException(void);
				NoSignerException(NoSignerException const &obj);
				virtual ~NoSignerException(void) throw();
				NoSignerException &operator=(NoSignerException const &r);
				virtual const char* what() const throw();
		};

		class NoExecuterException : public std::exception
		{
			public:
				
				NoExecuterException(void);
				NoExecuterException(NoExecuterException const &obj);
				virtual ~NoExecuterException(void) throw();
				NoExecuterException &operator=(NoExecuterException const &r);
				virtual const char* what() const throw();
		};

        class NoFormException : public std::exception
		{
			public:
				
				NoFormException(void);
				NoFormException(NoFormException const &obj);
				virtual ~NoFormException(void) throw();
				NoFormException &operator=(NoFormException const &r);
				virtual const char* what() const throw();
		};

    void    setIntern(Intern &);
    void    setSigner(Bureaucrat &);
    void    setExecutor(Bureaucrat &);

    void doBureaucracy(std::string, std::string);
};


#endif