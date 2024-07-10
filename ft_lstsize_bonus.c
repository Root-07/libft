/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:08:23 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/17 15:58:18 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     t_list *p, *t, *r;
//     p = malloc(sizeof(t_list));
//     t = malloc(sizeof(t_list));
//     r = malloc(sizeof(t_list));
//
//     p->next = t;
//     t->next = r;
//     r->next = NULL;
//     printf("%d", ft_lstsize(p));    
// }