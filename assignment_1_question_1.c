#include<stdio.h>

int main()
{
    int arr[4];
    int cnt = 0; 
    int i;

    for(i = 0; i < 4; i++){
        printf("Enter the array value: ");
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 4; i++){
        if(arr[i] == 1){
            cnt++;
        }
    }

    printf("The cnt is : %d\n", cnt);

    return 0;
}