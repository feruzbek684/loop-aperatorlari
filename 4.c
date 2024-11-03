#include <stdio.h>
int main () {
    int a, b = 0, c = 0;
    scanf("%d", &a);
    b = a % 10;
    for (size_t i = a; i > 0; )
    {
        i = i / 10;
        c = i % 10;
        if (c < b)
        {
            
        }else
        {
            b = c;
        }
        
        

    }
    printf("eng kattasi %d", b);

    return 0;

}