//12.Write C code to print all Perfect numbers between 1 to n.

#include <stdio.h>

int main(){
    int i, j, n, sum;
    printf("Enter n for limit: ");
    scanf("%d", &n);

    printf("All Perfect numbers between 1 to %d:\n", n);
    for(i=1; i<=n; i++){
        sum = 0;
        for(j=1; j<i; j++){
            if(i % j == 0)
                sum += j;
        }
        if(sum == i)
            printf("%d ", i);
    }
    return 0;
}
