#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ans;
	t_list	*cur1;
	t_list	*re;

	ans = NULL;
	re = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		if (!re)
			re = ans;
		cur1 = ans;
		if (!(ans = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&ans, del);
			break ;
		}
		if (cur1)
			cur1->next = ans;
		lst = lst->next;
	}
	return (re);
}
