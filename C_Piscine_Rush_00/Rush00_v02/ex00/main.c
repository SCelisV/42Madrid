#include<stdio.h>
#include<unistd.h>
int 	fn_length(char str[]);
int 	fn_atoi(char *str);
void	rush(int x, int y);

int	main(int argc, char *argv[])
{

	
	int i;
	int x_argv;

	i = 0;
	x_argv = 0;
	if (argc == 3){
		while(i < argc)
		{
			printf("argv[%d]: %s; \n" , i, argv[i]);
			x_argv = fn_length(argv[i]);
			printf("x_argv: %d\n" , x_argv);
        		write(1, "\n", 1);
			i++;
		}	

        //write(1, argv[1], sizeof(argv[1]));
        //write(1, argv[1], fn_length(argv[1]));
        //write(1, "\n", 1);
        //write(1, argv[2], fn_length(argv[2]));
        //write(1, &"\n", 1);
        //printf("argv[1]) -> *char %s, int %d",argv[1], *argv[1]);
        //printf("argv[1]) -> *char %s, int %d",argv[1], fn_atoi(argv[1]));

        	rush(fn_atoi(argv[1]), fn_atoi(argv[2]));
    	}
    	else
    	{
        	write(1, "error", 5);
    	}
    		return (0);
		

}

int 	fn_atoi(char str[])
{
    	int i;
    	int num;

    	i = 0;
    	num = 0;
    	while (str[i] != '\0')
    	{
        	if ((int)str[i] < 48 || (int)str[i] > 57)
        	{
            		return (0);
        	}
        num = num * 10 + (int)str[i] - 48;
        i += 1;
    }
    return (num);
}

int 	fn_length(char str[])
{
	int length;

	length = 0;
	while(	str[length]!='\0' )
	{
		length++;	
	}
	printf("length: %d\n", length);
	return	(length);
}

// para ejecutarlo: clear;gcc main.c rush01.c ft_putchar.c -Wall -Werror -Wextra && ./a.out 5 3
