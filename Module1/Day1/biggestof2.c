#include <stdio.h>

int biggest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    int result= biggest(a,b);

    printf("biggest number:%d\n", result);

    return 0;
}