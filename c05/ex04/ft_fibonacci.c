/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:26:41 by penlam            #+#    #+#             */
/*   Updated: 2025/06/19 15:02:19 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int main(){
    int n = 5;
    int z = 0;
    int result = ft_fibonacci(n);
    int result1 = ft_fibonacci(z);
    printf("%d\n", result);
    printf("%d\n", result1);
    return 0;
}
*/
