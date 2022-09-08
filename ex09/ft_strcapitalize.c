/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:57:32 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/08 21:26:10 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		retour;
	char	c;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 97 || c > 122)
		{
			retour = 0;
		}
		i++;
	}
	return (retour);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		a;
	char	c;

	i = 0;
	next = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (a == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (a == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			a = 1;
		else
			a = 0;
		i++;
	}
	return (str);
}

	
