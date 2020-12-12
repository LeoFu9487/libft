#include "libft.h"

t_list			*ft_lstnew(void *content)
{
	t_list*	nw;

	if (!(nw = (t_list*)malloc(1 * sizeof(t_list))))
		return (NULL);
	nw->content = content;
	nw->next = NULL;
	return (nw);
}
