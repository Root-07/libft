/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:58:54 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/22 23:42:06 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new ->next = *lst;
	*lst = new;
}

// void	ft_printlist(t_list *p)
// {
// 	while(p)
// 	{
// 		printf("%s\n", p->content);
// 		p = p->next;
// 	}
// }
// int main()
// {
// 	t_list *a, *b, *c;
// 	a = malloc(sizeof(t_list));
// 	b = malloc(sizeof(t_list));
// 	c = malloc(sizeof(t_list));

// 	a = ft_lstnew("ali");
// 	b = ft_lstnew("elamine");
// 	c = ft_lstnew("eagles");

// 	a->next = b;
// 	b->next = c;
// 	c->next = NULL;

// 	ft_printlist(a);
// 	printf("-----\n");
// 	t_list *head;
// 	head = malloc (sizeof(t_list));
// 	head = ft_lstnew("ultras");
// 	ft_lstadd_front(&a , head);
// 	ft_printlist(head);
// }