/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_setData.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:07:03 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 19:40:56 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_segment	*ft_segment_setdata(t_segment *seg, void *data)
{
	if (seg != NULL)
		seg->data = data;
	return (seg);
}
