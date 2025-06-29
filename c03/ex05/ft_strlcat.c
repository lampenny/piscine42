/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:58:20 by penlam            #+#    #+#             */
/*   Updated: 2025/06/14 20:41:30 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	room;

	dest_length = 0;
	while (dest_length < size && dest[dest_length] != '\0')
		dest_length++;
	if (dest_length < size)
	{
		room = size - dest_length;
	}
	else
	{
		room = 0;
	}
	src_length = ft_strlcpy(dest + dest_length, src, room);
	return (dest_length + src_length);
}
