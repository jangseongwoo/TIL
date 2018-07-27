#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (target == ar[mid])
        {
            return mid;
        }
        else
        {
            if (target < ar[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 6, 7, 8, 9, 11};
    int index;

    index = BSearch(arr, sizeof(arr) / sizeof(int), 6);
    if (index == -1)
        printf("fail");
    else
        printf("%d", index);

    return 0;
}