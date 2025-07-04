#include <unistd.h>
void ft_putchar(char c);

void rush(int x, int y){
    for(int i= 1; i<=y; i++){
        if(i==1 || i==y){
            for(int j= 1; j<=x; j++){
                if(j==1) ft_putchar('A');
                else if(j==x) ft_putchar('C');
                else ft_putchar("B");
            }
            ft_putchar('\n');
        }
        else {
            for(int j= 1; j<=x; j++){
                if(j==1 || j==x) ft_putchar('B');
                else ft_putchar(' ');
            }
            ft_putchar('\n');
        }
    }
}