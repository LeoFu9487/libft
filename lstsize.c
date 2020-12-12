#include "libft.h"

int				ft_lstsize(t_list *lst)
{
	int		ans;
	t_list	*temp;

	ans = 0;
	temp = lst;
	while (temp)
	{
		ans++;
		temp = temp->next;
	}
	return (ans);
}
