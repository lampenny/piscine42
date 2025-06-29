/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:39:19 by penlam            #+#    #+#             */
/*   Updated: 2025/06/11 15:52:10 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if ('A' <= *temp && *temp <= 'Z')
			*temp = *temp | ' ';
		temp++;
	}
	return (str);
}
