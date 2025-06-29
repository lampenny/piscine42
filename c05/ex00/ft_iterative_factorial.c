/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:08:46 by penlam            #+#    #+#             */
/*   Updated: 2025/06/17 12:24:46 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = nb - 1;
	while (i != 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(-4));
	printf("%d\n", ft_iterative_factorial(0));

	return (0);
}
*/
