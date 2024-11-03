#include <stdio.h>
int main (){
    int a, b, k = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for (size_t i = a; i <= b; i++)
    {
        k = i * i;
        printf("%2d", i);
        printf("-ni kvadrati %d x %2d = %3d\n",i, i, k);
    }


    

}