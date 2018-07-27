#include <stdio.h>

int BSearch(int arr[], int size, int target){
    int first, last;
    first =0;
    last = size-1;
    int mid;
    
    while(first <= last){
        mid = (first + last) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else{
            if(arr[mid] >= target){
                last = mid -1;
            }
            else
                first = mid +1;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = {1,3,5,9,11};
    
    printf("%d", BSearch(arr, sizeof(arr)/sizeof(int), 11));




    return 0;
}
