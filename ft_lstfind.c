#include "libft.h"

t_list			*ft_lstfind(t_list *head, void *target)
{
	while (head)
	{
		if (head->content == target)
			return (head);
		head = head->next;
	}
	return (NULL);
}
