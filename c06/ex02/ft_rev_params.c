/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:09:28 by penlam            #+#    #+#             */
/*   Updated: 2025/06/19 17:36:40 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		while (*argv[argc])
		{
			write(1, argv[argc], 1);
			argv[argc]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
