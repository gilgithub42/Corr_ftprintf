#include "include/ft_printf.h"
#include <stdio.h>
int main()
{
	ft_printf("%-8s\n", "toto");
	printf("%-8s\n", "toto");
	printf("****************************\n");
	ft_printf("%-8.2s\n", "toto");
	printf("%-8.2s\n", "toto");
	printf("****************************\n");	
	ft_printf("%-8.2-10s \n", "toto");
	printf("%-8.2-10s\n", "toto");
	printf("****************************\n");	
}
