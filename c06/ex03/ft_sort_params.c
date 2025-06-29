/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:57:10 by penlam            #+#    #+#             */
/*   Updated: 2025/06/24 15:58:37 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printparams(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s2;
	*s2 = *s1;
	*s1 = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j)
	{
		j = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				j = 1;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_printparams(argv[i]);
		i++;
	}
	return (0);
}
