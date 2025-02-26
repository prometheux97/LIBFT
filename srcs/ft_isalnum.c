/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:08:48 by jmartore          #+#    #+#             */
/*   Updated: 2025/02/19 12:14:21 by jmartore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int	main(void)
{
    printf("isalnum('A'): %d\n", ft_isalnum('A')); // Espera 1
    printf("isalnum('z'): %d\n", ft_isalnum('z')); // Espera 1
    printf("isalnum('0'): %d\n", ft_isalnum('0')); // Espera 1
    printf("isalnum('9'): %d\n", ft_isalnum('9')); // Espera 1
    printf("isalnum('!'): %d\n", ft_isalnum('!')); // Espera 0
    printf("isalnum(' '): %d\n", ft_isalnum(' ')); // Espera 0
    return(0);
}*/
