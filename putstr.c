#include "libft.h"

void			ft_putstr_fd(char *s, int fd)
{
	if (!s || *s == '\0')
		return ;
	ft_putchar_fd(*s,fd);
	ft_putstr_fd(s + 1, fd);
}

