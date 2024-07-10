/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:42:29 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/22 23:50:20 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		del (lst->content);
		free (lst);
	}
}

// #include<stdio.h>
//  void    ft_del(void *ali)
//     {
//         free(ali);
//     }
// int main()
// {
//     t_list *a , *b;

//     a = malloc(sizeof(t_list));
//     b = malloc(sizeof(t_list));

//     a->content = ft_strdup("hello");
//     b->content = ft_strdup("1337");
//     a->next = b;
//     b->next = NULL;

//     ft_lstdelone(a, &ft_del);
//     while(a)
//     {
//     printf("%s\n",a->content);
//     a = a->next;
//     }
// }