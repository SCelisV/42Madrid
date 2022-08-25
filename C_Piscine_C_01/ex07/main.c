void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int size;
    int tab [10];
    int i;

    size = 10;
    i = 0;
    while(i < size)
    {
        tab[i] = i;
        i++;
    }
    ft_rev_int_tab(tab, size);
    return(0);
}


