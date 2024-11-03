#include <stdio.h>
int main () {
    int a, b = 0, s = 0;
    scanf("%d", &a);
    for (size_t i = a; i > 0;)
    {
        s =  i % 10;
        if (s % 2 != 0)
        {
            b = b + s;
        }
        i = i / 10;
        
    }
    printf("%d", b);


    return 0;

    
}