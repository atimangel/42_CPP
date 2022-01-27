/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:00:08 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 21:45:52 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void execute(const Bureaucrat &executor) const
			throw (std::exception, Form::GradeTooLowException, Form::FileOpenExcption, Form::FileOpenExcption);
	private:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &copy);

};
#define TREE "                                                        \
                                              .         ;  \
                 .              .              ;%     ;;   \
                   ,           ,                :;%  %;   \
                    :         ;                   :;%;'     .,   \
           ,.        %;     %;            ;        %;'    ,;\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \
               ;%;      %;        ;%;        % ;%;  ,%;'\
                `%;.     ;%;     %;'         `;%%;.%;'\
                 `:;%.    ;%%. %@;        %; ;@%;%'\
                    `:%;.  :;bd%;          %;@%;'\
                      `@%:.  :;%.         ;@@%;'   \
                        `@%.  `;@%.      ;@@%;         \
                          `@%%. `@%%    ;@@%;        \
                            ;@%. :@%%  %@@%;       \
                              %@bd%%%bd%%:;     \
                                #@%%%%%:;;\
                                %@@%%%::;\
                                %@@@%(o);  . '         \
                                %@@@o%;:(.,'         \
                            `.. %@@@o%::;         \
                               `)@@@o%::;         \
                                %@@(o)::;        \
                               .%@@@@%::;         \
                               ;%@@@@%::;.          \
                              ;%@@@@%%:;;;. \
                          ...;%@@@@@%%:;;;;,..    Gilo97" 
#endif
