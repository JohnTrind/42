#include <unistd.h>
#include "ft_putchar.c"

	int i = 1;
        int t = 1;
        char corner = 'o';
        char vert = '|';
        char horiz = '-';
        char space = ' ';
	char enter = '\n';

void	topo(int x){
	while(i<=x)
        {       
                if(i==1)
                ft_putchar(corner);
                if(i==x && x!=1)
                ft_putchar(corner);
                if(i!=1 && i!=x)
                ft_putchar(horiz);
                i++;
        }
	i=1; 
	ft_putchar(enter);
}

void centro(int x){
while(i<=x)
        {
                if(i==1)
                ft_putchar(vert);
                if(i==x && x!=1)
                ft_putchar(vert);
                if(i!=1 && i!=x)
                ft_putchar(space);
                i++;
        }
        i=1;
        ft_putchar(enter);
}

void rush00(int x, int y)
{
	if(y==1)
	{
		topo(x);
	}
	else
	{
		topo(x);
		while(t<=y-2){
		centro(x);
		t++;
		}
		if(y>1)
		topo(x);
	}
}
