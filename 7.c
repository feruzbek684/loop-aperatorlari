#include <stdio.h>
int main () {
    int a, b, toq = 0, juft = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for (size_t i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            juft = juft + i;
        }else if(i % 2 != 0){
            toq = toq + i;
        }
        
    }

    printf("juft %d\n", juft);
    printf("toq %d\n", toq);

    



    return 0;
    
}