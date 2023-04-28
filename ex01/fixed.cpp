/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:04:12 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/28 16:09:53 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _nb(42)
{
	(void)_nb;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(const Fixed &toCopy)
{
	*this = toCopy;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

Fixed	&Fixed::operator = (const Fixed &toCopy)
{
	_nb = toCopy.getRawBits();
	return (*this);
}
