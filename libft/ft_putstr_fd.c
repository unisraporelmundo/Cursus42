<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:32:43 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/08 17:11:37 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


=======
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
>>>>>>> 33ee0c15845ddd21dd14f2bf2a42ee9d9340125d
