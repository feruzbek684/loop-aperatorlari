#include <stdio.h>
int main () {
    int a, b, k;
    scanf("%d", &a);
    b = a % 10;
    for (size_t i = 10; i <= a;)
    {
        a = a / 10;
    

    }
    if (a > b)
    {
        printf("\n boshidagi katta %d\n", a);
    }
    else if (b == a)
    {
        printf("\nteng %d %d\n", b, k);
    }else
    {
        printf("\n\n oxiridagi katta %d\n", b);
    }
    
    return 0;
    
    
    
}