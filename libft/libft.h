/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:21:22 by iizquier          #+#    #+#             */
/*   Updated: 2024/04/18 14:01:24 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char	*dest, const char *src, size_t size);

#endif
