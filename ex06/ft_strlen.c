int ft_strlen(char *str);

int ft_strlen(char *str){
	int i=0;
	int count =0;
	while(str[i]){
		count++;
		i++;
	}
	return count;
}
