/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:40 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:06:11 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_segment_free(t_segment **seg, bool alsodata)
{
	if (seg != NULL)
	{
		if (*seg != NULL)
		{
			(*seg)->next = NULL;
			(*seg)->back = NULL;
			if (alsodata == TRUE && (*seg)->data != NULL)
				free((*seg)->data);
			(*seg)->data = NULL;
			free(*seg);
		}
		*seg = NULL;
	}
	seg = NULL;
}
