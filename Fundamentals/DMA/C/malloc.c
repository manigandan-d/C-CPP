#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    
    int *ptr = (int *)malloc(n * sizeof(int));

    for(i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }

    free(ptr);

    ptr = NULL;

    return 0;
}