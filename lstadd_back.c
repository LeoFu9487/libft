#include "libft.h"

void			ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = ft_lstlast(*lst);
	if (!temp)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	temp->next = new;
}
