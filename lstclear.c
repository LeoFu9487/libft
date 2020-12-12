#include "libft.h"

void			ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*dd;

	temp = *lst;
	*lst = NULL;
	while (temp)
	{
		if (del)
			del(temp->content);
		dd = temp;
		temp = temp->next;
		free(dd);
	}
}
