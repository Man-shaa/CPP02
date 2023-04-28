/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:53:29 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/28 14:33:16 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int			_nb;
		static int	_bits;

	public:
		Fixed(void);
		Fixed(Fixed &toCopy);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif