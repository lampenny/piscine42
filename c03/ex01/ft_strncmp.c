/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:48:15 by penlam            #+#    #+#             */
/*   Updated: 2025/06/14 20:46:22 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}
/*
#include <stdio.h>
int main(void)
{
        printf("ret: %d\n", ft_strncmp("ABCD", "ABCD", 4));
        printf("ret: %d\n", ft_strncmp("ABC", "AB", 3));
        printf("ret: %d\n", ft_strncmp("ABA", "ABZ", 2));
        printf("ret: %d\n", ft_strncmp("ABJ", "ABC", 3));
        return 0;
 }
*/
