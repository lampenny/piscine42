/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 17:46:41 by penlam            #+#    #+#             */
/*   Updated: 2025/06/20 10:53:00 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	strlen;

	strlen = 0;
	if (argc > 0)
	{
		while (argv[0][strlen])
		{
			write(1, &argv[0][strlen], 1);
			strlen++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
