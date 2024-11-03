#include <stdio.h>
int main () {
    int sum = 0;
    for (size_t i = 40; i < 180; i++)
    {
        if (i % 7 == 0 && i % 2 == 0 && i % 6 == 0 && i % 4 == 0)
        {
            
            sum = sum + i;
            printf("%d ", i);
        }
        
    }
    printf("\n%d ", sum);

    return 0;

}