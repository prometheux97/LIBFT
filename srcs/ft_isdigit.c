/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:01:42 by jmartore          #+#    #+#             */
/*   Updated: 2025/02/19 12:08:26 by jmartore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*int	main(void)
{
	printf("isdigit('0'): %d\n", ft_isdigit('0'));
	printf("isdigit('9'): %d\n", ft_isdigit('9'));
	printf("isdigit('a'): %d\n", ft_isdigit('a'));
	printf("isdigit(' '): %d\n", ft_isdigit(' '));
	return (0);
}*/
