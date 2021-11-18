/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:17:27 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/18 18:17:29 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*fin_elem;

	if (!alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	else
	{
		fin_elem = *alst;
		while (fin_elem->next)
			fin_elem = fin_elem->next;
		fin_elem->next = new;
	}
}
