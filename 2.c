#include <stdio.h>
int main () {
    int son, m = 0;
    scanf("%d", &son);
    m = son * 2;
    for (size_t i = son; i <= m; i++)
    {
        printf("%d ", i);
    }

    return 0;

    
}