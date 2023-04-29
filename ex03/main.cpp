/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:05:46 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/29 17:32:28 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include "point.hpp"

int main(void)
{
	Point point(-2.5, 0.5);
	Point A(5, 0);
	Point B(-5, 0);
	Point C(5, 5);
	// Point B(2.2, 5);
	// Point C(2, 1);
	// Point m(3, 0.5);
	// Point n(0, 2);

	std::cout << point.bsp(A, B, C, point) << std::endl;
	// std::cout << (bsp(z, B, C, m) ? "IN" : "OUT") << std::endl;
	// std::cout << (bsp(z, B, C, n) ? "IN" : "OUT") << std::endl;
	return (0);
}