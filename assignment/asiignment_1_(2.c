#include <stdio.h>

int main()
{
    int n, rem, quo;

    printf("Enter no for binary conv ");
    scanf("%d", &n);

    quo = n;

    printf("Binary = ");

    if (n == 0) {
        printf("0");
    }

    while (quo != 0)
    {
        rem = quo % 2;  
        quo = quo / 2;   

        printf("%d", rem);   
    }

    return 0;
}

