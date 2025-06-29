/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 17:27:12 by penlam            #+#    #+#             */
/*   Updated: 2025/06/09 12:40:48 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	counter1;
	int	counter2;

	counter1 = 0;
	while (counter1 < size - 1)
	{
		counter2 = counter1 + 1;
		while (counter2 < size)
		{
			if (tab[counter1] > tab[counter2])
			{
				temp = tab[counter1];
				tab[counter1] = tab[counter2];
				tab[counter2] = temp;
			}
			counter2++;
		}
		counter1++;
	}
}
/*
int	main(void)
{
    int tab[] = {7, 3, 9, 1, 5};
    int size = sizeof(tab) / sizeof(tab[0]);
    int i = 0;

    printf("Before sorting:\n");
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    ft_sort_int_tab(tab, size);

    i = 0;
    printf("After sorting:\n");
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return 0;
}
*/
