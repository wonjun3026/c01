void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size){
	int a=0;
	int b=0;
	int c;
	while (a<size-1){
		while (b-1){
			if (tab[b] > tab[b+1]){
				c = tab[b];
				tab [b] = tab[b+1];
				tab[b+1] = c;
			}
			b++;
		}
		a++;
		b = a;
	}
