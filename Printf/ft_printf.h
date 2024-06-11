/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:55:56 by iizquier          #+#    #+#             */
/*   Updated: 2024/06/11 17:16:28 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_putchar(int c);
void	ft_putchar_fd(char c, int fd);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int nbr, char *base);
int		ft_putnbr(int nbr);
int		ft_printf(const char *format, ...);
int		ft_putptr(uintptr_t ptr);
int		ft_putunsigned(unsigned int num);
int		fr_strlen(const char *str);

#endif
