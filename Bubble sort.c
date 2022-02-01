#include <stdio.h>

int main(){
    int arr[50], num, x, y, temp;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &num);
    printf("Please Enter the Value of Elements: ");
    for(x = 0; x < num; x++){
        scanf("%d", &arr[x]);
    }
    for(x = 0; x < num - 1; x++){
        for(y = 0; y < num - x - 1; y++){
            if(arr[y] > arr[y + 1]){
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");

    for(x = 0; x < num; x++){
        printf("%d  ", arr[x]);
    }

    return 0;
}

//OUTPUT
Please Enter the Number of Elements you want in the array: 6
Please Enter the Value of Elements: 1
2
12
44
34
100
Array after implementing bubble sort: 1  2  12  34  44  100
Process returned 0 (0x0)   execution time : 22.028 s
Press any key to continue.

