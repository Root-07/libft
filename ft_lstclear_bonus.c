/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:20:53 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/17 16:06:03 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (lst && del)
	{
		node = *lst;
		while (node != 0)
		{
			del(node->content);
			*lst = node;
			node = node->next;
			free(*lst);
		}
		*lst = NULL;
	}
}

// #include<stdio.h>
// void    ft_del(void *node)
// {
//     node =  NULL;
// }
// int main()
// {
//     t_list *a, *b, *c;
//     a = malloc(sizeof(t_list));
//     b = malloc(sizeof(t_list));
//     c = malloc(sizeof(t_list));
// 
//     a->content = ft_strdup("salam");
//     b->content = ft_strdup("hello");
//     c->content = ft_strdup("salut");
//     a->next = b;
//     b->next = c;
//     c->next = NULL;
//
//     ft_lstclear (&a , &ft_del);
//     while(a)
//     {
//         printf("%s\n", a->content);
//         a = a->next;
//     }
// }