void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size){
	int a=0;
	int c;
	while( a<size){
		c = tab[a];
		tab[a] = tab [size];
		tab[size] = c;
		a++;
		size--;
	}
}


	
