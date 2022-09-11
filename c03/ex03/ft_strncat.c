/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:58:18 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/11 16:06:33 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int m;

	i = 0;
	m = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i] != '\0' && i < nb)
	{
		dest[i + m ] = src[m];
		m++;
	}
	dest[i + m] = '\0';
