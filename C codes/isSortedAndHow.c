#include <stdio.h>

const char *isSortedAndHow(const int array[], int arrayLength) 
{

    if(arrayLength < 2){return "yes, ascending";}
    
    int ascending =1,descending = 1;

    for (int i = 1; i < arrayLength; i++)
    {
        if (array[i] < array[i-1])
        {ascending = 0;}
        if (array[i] > array[i-1])
        {descending = 0;}
    }

    if(ascending)
    {return "yes, ascending";}
    else if (descending)
    {return "yes, descending";}
    else {return "no";}
}

// Main function to test the implementation
int main() {
    int array1[] = {1, 1, 2, 3};
    int array2[] = {9, 9, -5, -7};
    int array3[] = {-6, -6, 5, -9};
    int array4[] = {1, 3, 9, 4};
    int array5[] = {50, 40, 30, 10, 20};

    printf("Array1 is sorted: %s\n", isSortedAndHow(array1, sizeof(array1) / sizeof(array1[0])));
    printf("Array2 is sorted: %s\n", isSortedAndHow(array2, sizeof(array2) / sizeof(array2[0])));
    printf("Array3 is sorted: %s\n", isSortedAndHow(array3, sizeof(array3) / sizeof(array3[0])));
    printf("Array4 is sorted: %s\n", isSortedAndHow(array4, sizeof(array4) / sizeof(array4[0])));
    printf("Array5 is sorted: %s\n", isSortedAndHow(array5, sizeof(array5) / sizeof(array5[0])));

    return 0;
}
