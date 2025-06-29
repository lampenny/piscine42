/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:12:48 by penlam            #+#    #+#             */
/*   Updated: 2025/06/15 16:26:43 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
  char * haystack = "sdharenjhellosadsa";
  char * needle = "ello";
  char * haystack1 = "alphabetalphabet";
  char * needle1 = "tal";
  char * haystack2 = "cal";
  char * needle2 = "pra";

  printf("%s \n", ft_strstr(haystack, needle));
  printf("%s \n", ft_strstr(haystack1, needle1));
  printf("%s \n", ft_strstr(haystack2, needle2));

  return (0);
}
*/
