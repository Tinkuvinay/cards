#include <stdio.h>
 int main()
 {
     int arr[]={2,13,24,33,43};
     int key = 13;

     int low = 0;
     int high = 4;
     int mid;
     int found = 0;

    while (low <= high)
    { 
         mid = (low+high) / 2;
         if (arr[mid] == key)
        {
            printf("Enter found at position %d\n", mid + 1);
            found = 1;
         break ;
        } 
 
         else if (arr[mid]< key)
        {
            low = mid + 1 ;
        }
         else
        {
            high = mid - 1;
        }
    }
 
     if (found == 0 )
    {
        printf("Element not found\n");
    }
    return 0;
}
 
