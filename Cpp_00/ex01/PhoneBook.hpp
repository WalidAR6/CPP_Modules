/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:29:10 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/11 12:46:28 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact arr[8];
	public:
		PhoneBook();
		~PhoneBook();
	
		void	set_contact_id();
		void	search();
		void	add(int *i);
		void	exit();
};

void eof_handler();
void cin_fail();
#endif