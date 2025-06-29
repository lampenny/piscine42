/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:00:16 by penlam            #+#    #+#             */
/*   Updated: 2025/06/15 16:13:43 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>
int main(void)
{
	printf("ret: %d\n", ft_strcmp("ABCD", "ABCD"));
	printf("ret: %d\n", ft_strcmp("ABC", "AB"));
	printf("ret: %d\n", ft_strcmp("ABA", "ABZ"));
	printf("ret: %d\n", ft_strcmp("ABJ", "ABC"));
	return 0;
 }
*/
