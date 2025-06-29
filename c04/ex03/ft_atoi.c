/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 08:43:04 by penlam            #+#    #+#             */
/*   Updated: 2025/06/17 16:11:00 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign_minus;
	int	res;

	i = 0;
	sign_minus = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign_minus *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + (str[i] - '0');
		i++;
	}
	return (res * sign_minus);
}
/*
#include <stdio.h>
int	main(void)
{
	char s[] = " ---+--+1234ab567"; // -1234
	char s1[] = "++42";
	char s2[] = "-999 123";
	char s3[] = "";
	char overflow[] = "300000000000";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", ft_atoi(s1));
	printf("%d\n", ft_atoi(s2));
	printf("%d\n", ft_atoi(s3));
	printf("Over flow %d\n", ft_atoi(overflow));
	
	return (0);
}
*/
