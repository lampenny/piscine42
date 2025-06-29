/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penlam <penlam@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 20:16:26 by penlam            #+#    #+#             */
/*   Updated: 2025/06/13 21:45:56 by penlam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char s)
{
	return ((s >= 'a' && s <= 'z')
		|| (s >= 'A' && s <= 'Z')
		|| (s >= '0' && s <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || !is_alphanumeric(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] & ~ ' ';
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] | ' ';
			}
		}
		i++;
	}
	return (str);
}
