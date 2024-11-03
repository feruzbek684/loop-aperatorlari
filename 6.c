#include <stdio.h>
int main () {
    int  a, b = 1;
    scanf("%d", &a);
    for (size_t i = b; i < ((a - 1)/ 2);)
    {
        i ++;
        if (a % i == 0)
        {
            printf("tub son emas"); break;
            
        }else
        {
            printf("tub son"); break;
        }
        
        
        
    }

    return 0;

}

