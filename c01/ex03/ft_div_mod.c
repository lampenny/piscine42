/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:17:26 by penlam            #+#    #+#             */
/*   Updated: 2025/06/09 10:44:09 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main(void)
{
	int x;
	int y;

	x = 5;
	y = 2;

	int *ptr1;
	int *ptr2;

	ptr1 = &x;
	ptr2 = &y;

	ft_div_mod(x, y, ptr1, ptr2);

	printf("%d\n%d", *ptr1, *ptr2);

	return (0);
}
*/
