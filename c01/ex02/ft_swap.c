/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:10:46 by penlam            #+#    #+#             */
/*   Updated: 2025/06/08 16:15:31 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int a;
	int b;

	int *ptr1;
	int *ptr2;

	a = 2;
	b = 10;

	ptr1 = &a;
	ptr2 = &b;

	ft_swap(ptr1, ptr2);
	printf("%d\n%d", a, b);

	return (0);
}
*/
