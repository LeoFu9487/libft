# libft

This libft is slightly different form the 42 subject, I modified the prototype of ```ft_lstdelone()``` for the convenience of future usage.

Bonus function which is not in subject :

```t_list *ft_lstfind(t_list *head, void *target)```

description and uage : 

It will return the first element of which ```content == target```, if it doesn't exist, it will return ```NULL```

```void *ft_memory(size_t elem_cnt, size_t elem_size, void *del, t_memory type)```

description : 

Use this function instead of ```malloc``` and ```free```, then the program will be LEAKS-FREE

usage : (short version is below)

There are three modes for ```t_memory```, which is ```push```, ```pop```, and ```clear```

When I want to allocate memort, instead of using ```char *str = malloc(5 * sizeof(char))```, do ```char *str = ft_memory(5, sizeof(char), NULL, push)```

p.s : for the mode ```push```, the third variable doesn't matter, ```NULL``` or ```0``` or any address won't cause errors.

After calling ```ft_memory()```, you will get the well-allocated memory just like malloc, but it creates a list to record the address that needs to be ```free```-d. In other words, this function keeps track of every allocated memory to prevent any forgetten free or double free.



Next, when I finish using this memory ```str``` that I ```malloc```-ed and I want to ```free``` it right now (which is NOT NECESSARY, because we can FREE EVERY ALLOCATED MEMORY all at once with ```clear```, whcih will be mentioned right below), we can call ```ft_memory(0,0,str,pop)```

This will first check if ```str``` is malloced, if so, it will be ```free```-d.

Warning : If you use ```ft_memory()``` to allocate a memory, then DON'T FREE THIS MEMORY WITH ```free```, USE FT_MEMORY to free it can prevent many possible errors.



Last but not the least, the mode ```clear``` !! 

In the end of the project, just call ```ft_memory(0,0,0,clear)```. Then, every previous```malloc``` will be ```free```-d.



usage of ```ft_memory```(short version): 

```int *num = ft_memory(5, sizeof(int), NULL, push)``` is just like ```int *num = malloc(5 * sizeof(int))```


```ft_memory(0,0,num,pop)``` is like ```free(num)```


```ft_memory(0,0,NULL,clear)``` can free everything

If there are any advices or questions, please contact yfu@student.42lyon.fr
