/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_isEmpty.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:17 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:05:26 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool	ft_linkedlist_isempty(t_linkedlist *ll)
{
	if (ll == NULL || ll->Count == 0)
		return (TRUE);
	return (FALSE);
}
