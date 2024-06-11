/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:57:32 by iizquier          #+#    #+#             */
/*   Updated: 2024/06/11 17:05:53 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd);

int	ft_ptrlen(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_putptrhex(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptrhex(num / 16);
		ft_putptrhex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_putptr(uintptr_t ptr)
{
	int	lenght;

	lenght = 0;
	lenght += write(1, "0x", 2);
	if (ptr == 0)
		lenght += write(1, "0", 1);
	else
	{
		ft_putptrhex(ptr);
		lenght += ft_ptrlen(ptr);
	}
	return (lenght);
}
