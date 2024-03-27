#include <stdio.h>
#include <stdlib.h>

int sequentialSearch(int data[], int n, int key)
{
    int found = 0;
    int pos;

    for (pos = 0; (pos < n) && (!found); pos++)
    {
        if (data[pos] == key)
            found = 1;
    }

    if (found)
        return --pos;
    else
        return -1;
}

// Or we can use:

int seqSearch(int x[], int n, int value)
{

    int i;
    for (i = 0; i < n; i++)
    {

        if (x[i] == value)
            return i;
    }

    return(-1);
}





int main()
{

    return 0;
}
