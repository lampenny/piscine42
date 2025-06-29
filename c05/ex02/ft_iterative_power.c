/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:47:18 by penlam            #+#    #+#             */
/*   Updated: 2025/06/19 15:46:21 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 2)); // 0
	printf("%d\n", ft_iterative_power(1, 0)); // 1
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(-2, 4));
	printf("%d\n", ft_iterative_power(5, 3)); // 125
	printf("%d\n", ft_iterative_power(2, 4)); // 16
	return (0);
}
*/
