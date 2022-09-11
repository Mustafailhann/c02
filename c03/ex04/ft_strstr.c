/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:45:14 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/11 18:42:52 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[a] == '\0')
		return(str);
	while (str[a] != '\0')
	{
		b = 0;
		while(str[a+b] == to_find[b] && str[a+b] != '\0')
			b++;
		if(to_find[b] == '\0')
			return(str + a);
		b = 0;
		a++;
	}
	return(0);
}
