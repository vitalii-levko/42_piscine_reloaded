/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:05:41 by vlevko            #+#    #+#             */
/*   Updated: 2017/11/02 14:54:08 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_strcpy(char *a, char *b)
{
	while (*a)
	{
		*b = *a;
		a++;
		b++;
	}
	*b = '\0';
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		length;

	length = ft_strlen(src);
	dst = (char*)malloc(sizeof(char) * (length + 1));
	ft_strcpy(src, dst);
	return (dst);
}
