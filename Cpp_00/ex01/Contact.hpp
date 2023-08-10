/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:49:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/10 20:15:19 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{
	private:
		int			_id;
		std::string _first_name;
		std::string _last_name;
		std::string	_nickname;
		std::string _darkest_sec;
		std::string	_phone_number;
	public:
		Contact();
		~Contact();
		
		void set_id(int id);
		void set_f_name(std::string f_name);
		void set_l_name(std::string l_name);
		void set_n_name(std::string n_name);
		void set_d_sec(std::string d_sec);
		void set_p_number(std::string p_num);

		int			get_id() const;
		std::string get_f_name() const;
		std::string get_l_name() const;
		std::string get_n_name() const;
		std::string get_d_sec() const;
		std::string	get_p_number() const;
		
};


#endif