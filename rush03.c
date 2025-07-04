#include <unistd.h>
void ft_putchar(char c);

void rush(int x, int y){
    for (int j = 1; j <= y; j++) {
        for (int i = 1; i <= x; i++) {
            if (j==1 || j==y) {
                if (i==1) ft_putchar('A');
                else if (i == x) ft_putchar('C');
                else ft_putchar('B');
            }
            else {
                if (i==1 || i==x) ft_putchar('B');
                else ft_putchar(' ');
            }
        }
        ft_putchar('\n');
    }
}