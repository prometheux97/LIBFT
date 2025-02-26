/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:55:20 by jmartore          #+#    #+#             */
/*   Updated: 2025/02/26 12:49:21 by jmartore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstack, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	if (*ndl == '\0')
	{
		return ((char *)hstack);
	}
	i = 0;
	while (hstack[i] && i < len)
	{
		j = 0;
		while (ndl[j] && hstack[i + j] && i + j < len
			&& hstack[i + j] == ndl[j])
		{
			j++;
		}
		if (ndl[j] == '\0')
		{
			return ((char *)(hstack + i));
		}
		i++;
	}
	return (NULL);
}
