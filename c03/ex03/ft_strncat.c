/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:36:06 by penlam            #+#    #+#             */
/*   Updated: 2025/06/14 16:17:46 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	i = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[50] = "efghijkl";
	char dest[50]= "abcd";
	printf("%s", ft_strncat(dest, src, 6));
	return (0);
}
*/
