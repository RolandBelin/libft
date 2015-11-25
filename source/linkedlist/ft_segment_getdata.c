/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_getData.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:44 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 19:21:34 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void			*ft_segment_getdata(t_segment *seg)
{
	if (seg != NULL)
		return (seg->data);
	else
		return (NULL);
}
