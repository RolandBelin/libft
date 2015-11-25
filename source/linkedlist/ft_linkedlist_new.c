/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:20 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 18:55:10 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_linkedlist		*ft_linkedlist_new(void)
{
	t_linkedlist	*new_list;

	new_list = NULL;
	if ((new_list = (t_linkedlist *)malloc(sizeof(t_linkedlist))) != NULL)
	{
		new_list->Count = 0;
		new_list->First = NULL;
		new_list->Last = NULL;
	}
	return (new_list);
}
