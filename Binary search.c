#include <stdio.h>
#include <stdlib.h>

int binarySearch(int data[], int arraySize, int key)
{
    int l = 0;
    int r = arraySize - 1;
    //           index: 0  1  2  3  4
    // int numbers[] = {1, 2, 3, 4, 5};

    while (l <= r)
    {
          int mid = (l + r) / 2;
            if (key == data[mid]) // Check if key is present at mid
                return mid;
            else if (key < data[mid]) // If key is smaller, ignore right hald
                r = mid - 1;
            else
                l = mid + 1; // If key greater, ignore left half
    }

     return -1; // not present
}

int main()
{


  return 0;
}
