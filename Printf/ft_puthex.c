/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:57:15 by iizquier          #+#    #+#             */
/*   Updated: 2024/06/11 15:39:29 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, char *base)
{
	int		nbr_base[16];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (nbr == 0)
		result += ft_putchar('0');
	while (nbr)
	{
		nbr_base[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[nbr_base[i]]);
	return (result);
}
