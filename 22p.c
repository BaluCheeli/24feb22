#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE];
    int ele, flag = 0;
    
    printf("Enter array elements: "); //2 3 4 6 1
    for(int i = 0;i < SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter search element: ");//4
    scanf("%d", &ele);
    int j;
    for(j = 0;j < SIZE;j++)
    {
        if((arr[j] ^ ele) == 0)// 4 ^ 4 0100 ^ 0100 == 0
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element %d found in %d position\n", ele, j);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}

