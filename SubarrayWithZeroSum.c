#include <stdio.h>

int subsetSum0(int set[], int arrayLength, int sum, int index);

int main()
{
    int set[] = { 888, -222, -2222, -444};
    int n = sizeof(set)/sizeof(int);

    printf("[");
    for(int i=0; i<n; i++)
    {
        printf(" %d ", set[i]);
    }
    printf("]\n");

    if(subsetSum0(set, n, 0, 0) == 1)
    {
        printf("\nFound a subset with sum of 0\n");
    }
    else
        printf("\nNo subset with sum of 0\n");

    return 0;
}

int subsetSum0(int set[], int arrayLength, int sum, int index)
{
    if(sum == 0 && index != 0)
    {
        return 1;
    }

    for( int i = index; i<arrayLength; ++i)
    {
        if(((subsetSum0(set, arrayLength, sum+set[i], i+1))) == 1)
        {
            return 1;
        }
    }

    return 0;
}
