#include "libft.h"

typedef t_list* node;

void *f(void *a){
	unsigned char * c;;
	c = (unsigned char*) a;
	*c *= 2;
	return c;
}

void d(void *a){
	return ;
}

int main(){
	//test sort
	//test lstmap
	node head, temp;
	int val = 0;
	head = ft_lstnew((void*)val++);
	int	i = 0;
	while (i++ < 10){
		temp = ft_lstnew((void*)val++);
		ft_lstadd_back(&head, temp);
	}
	node new = ft_lstmap(head, f, d);
	while (new){
		ft_putnbr_fd((int)(new->content), 1);
		ft_putendl_fd("", 1);
		new = new->next;
	}
	return 0;
}
