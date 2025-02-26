/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:51:58 by jmartore          #+#    #+#             */
/*   Updated: 2025/02/19 12:00:46 by jmartore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int	main(void)
{
	printf("isalpha('A'): %d\n", ft_isalpha('A'));
	printf("isalpha('1'): %d\n", ft_isalpha('1'));
	return (0);
}*/
