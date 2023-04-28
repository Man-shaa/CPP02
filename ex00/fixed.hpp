/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:53:29 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/28 15:13:20 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_nb;
		static const int	_bits;

	public:
		Fixed(void);
		Fixed(Fixed &toCopy);
		~Fixed(void);

		Fixed& operator = (Fixed const &toCopy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif