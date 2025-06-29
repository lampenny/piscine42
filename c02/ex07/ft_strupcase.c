/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:50:26 by penlam            #+#    #+#             */
/*   Updated: 2025/06/11 14:38:03 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if ('a' <= *temp && *temp <= 'z')
			*temp = *temp & ~ ' ';
		temp++;
	}
	return (str);
}
