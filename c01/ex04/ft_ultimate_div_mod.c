/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:47:52 by penlam            #+#    #+#             */
/*   Updated: 2025/06/09 12:58:42 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
int	main(void)
{
	int	*ptr1;
	int	*ptr2;

	int	a;
	int	b;
	
	a = 5;
	b = 2;

	ptr1 = &a;
	ptr2 = &b;

	ft_ultimate_div_mod(ptr1, ptr2);

	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
*/
