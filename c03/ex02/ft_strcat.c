/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:34:36 by penlam            #+#    #+#             */
/*   Updated: 2025/06/14 16:05:51 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[i] != '\0')
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
	char string1[20]="Penny";
	char string2[20]=" Lam";
	char *str1;
	char *str2;
	str1=string1;
	str2=string2;
  printf("%s",ft_strcat(str1,str2));
}
*/
