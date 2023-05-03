#include <stdio.h>

int ft_isalpha(int c) {
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int ft_isdigit(int c) {
	return (c >= 0 && c <= 9);
}
int ft_isalnum(int c) {
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return(1);
	else if (c >= 0 && c <= 9)
		return(1);
	return(0);
}
int ft_isascii(int c) {
	return (c >= 0 && c <= 127);
}
int ft_isprint(int c) {
	return (0);
}
int ft_strlen(char *str) {
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void *ft_memset(char *str, int c, size_t len) {
	while (len > 0)
		str[--len] = c;
	return(str);
}
void ft_bzero(char *str, size_t n) {
	while (n > 0)
		str[--n] = 0;
}







#include <ctype.h>
#include <assert.h>
#include <string.h>

int main() {

	/*
	int c = 'A';
	while (c <= 'Z') {
		printf("Character: %c correct\n", c);
		assert(ft_isalpha(c) == isalpha(c++));
	}
	c = 'a';
	while (c <= 'z') {
		printf("\nCharacter: %c correct", c);
		assert(ft_isalpha(c) == isalpha(c++));
	}
	*/
	char str[50];

	strcpy(str,"Hello World");
	printf("%s\n", str);

	bzero(str, 7);
	printf("%s", str);

	return 0;
}
