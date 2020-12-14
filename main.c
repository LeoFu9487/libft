#include "libft.h"

typedef t_list* node;

void *f(void *a){
	unsigned char * c;;
	c = (unsigned char*) a;
	c[0]++;
	return c;
}

void d(void *a){
	return ;
}

int main(){
	//test sort
	//test lstmap
	node head, temp;
	char	*val;
	val = (char*)malloc(2 * sizeof(char));
	val[0] = 'a';
	val[1] = 0;
	head = ft_lstnew((void*)val++);
	int	i = 0;
	while (i++ < 10){
		char	*new;
		new = (char*)malloc(2 * sizeof(char));
		new[0] = 'a' + i;
		new[1] = '\0';
		temp = ft_lstnew((void*)new);
		ft_lstadd_back(&head, temp);
	}
	node new = ft_lstmap(head, f, d);
	while (new){
		ft_putendl_fd((char*)(new->content), 1);
		new = new->next;
	}
	return 0;
}
