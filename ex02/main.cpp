/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:05:46 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/28 21:00:19 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
int main(void)
{
	Fixed a(40);

	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}