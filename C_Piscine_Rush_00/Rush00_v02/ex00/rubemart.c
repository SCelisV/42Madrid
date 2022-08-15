#include<stdio.h>
#include<unistd.h>
int 	fn_length(char str[]);
void	rush(int x, int y);

int	main(int argc, char *argv[])
{
    if (argc == 3)
    {
        //write(1, argv[1], sizeof(argv[1]));
        write(1, argv[1], fn_length(argv[1]));
        write(1, "\n", 1);
        write(1, argv[2], fn_length(argv[2]));
        write(1, &"\n", 1);
        //printf("argv[1]) -> *char %s, int %d",argv[1], *argv[1]);
        printf("argv[1]) -> *char %s, int %d",argv[1], fn_atoi(argv[1]));
        //rush03((int)argv[1], (int)argv[2]);
        rush03(fn_atoi(argv[1]), fn_atoi(argv[2]));
    }
    else
    {
        //rush03(5, 3);
        write(1, "error", 5);
    }
    return (0);
}


int fn_atoi(char *str)
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


int fn_length(char *str)
{    
	int length;
    
	length = 0;
	while( str[length]!='\0' )
	{        
		length++;
	}    
	return (length);
}
