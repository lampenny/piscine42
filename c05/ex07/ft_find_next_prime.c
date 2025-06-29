/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:48:17 by penlam            #+#    #+#             */
/*   Updated: 2025/06/18 15:44:00 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("0: %d (Exp: 2)\n", ft_find_next_prime(0));
	printf("4: %d (Exp: 5)\n", ft_find_next_prime(4));
	printf("10: %d (Exp: 11)\n", ft_find_next_prime(10));
	printf("98: %d (Exp: 101)\n", ft_find_next_prime(98));
	return (0);

}
*/
