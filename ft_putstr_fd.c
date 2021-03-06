/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 02:07:45 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 02:07:46 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putstr_fd(const INT8 *str, INT32 fd)
{
	if (str)
		write(fd, str, ft_strlen(str));
}
