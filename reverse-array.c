#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,*rev_arr;
    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));
    rev_arr=(int * ) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);

    }
    i=i-1;

    /* Write the logic to reverse the array. */
    for (int j = 0; j < num; j++)
    {
        rev_arr[j]=arr[i];
        i--;
    }
    

    for(i = 0; i < num; i++){
        printf("%d ", *(rev_arr + i));
    }
    return 0;
}
