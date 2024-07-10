/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:49:03 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/17 16:39:27 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {
//     t_list *p , *t;
//     p = malloc(sizeof(t_list));
//     t = malloc(sizeof(t_list));

//     p->content = "hello";
//     t->content = "world";
//     p->next = t;

//     printf("%s", ft_lstlast(p)->content);
// }