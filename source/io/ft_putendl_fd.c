/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:05:22 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:03:51 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		ft_putendl_fd(const INT8 *str, INT32 fd)
{
	if (str)
	{
		write(fd, str, ft_strlen(str));
		write(fd, "\n", 1);
	}
}
