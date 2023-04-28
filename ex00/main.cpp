/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:58:06 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/28 17:04:48 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	// b.setRawBits(30);
	// c = b;

	// std::cout << "a : " << a.getRawBits() << std::endl;
	// std::cout << "b : " << b.getRawBits() << std::endl;
	// std::cout << "c : " << c.getRawBits() << std::endl;
	
	a.setRawBits(24);

	std::cout << std::endl << "After a.setRawBits(24)" << std::endl << std::endl;

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	b.setRawBits(-12);

	std::cout << std::endl << "After b.setRawBits(-12)" << std::endl << std::endl;

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	c.setRawBits(35);

	std::cout << std::endl << "After c.setRawBits(35)" << std::endl << std::endl;

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	return (0);
}
