Time Complexity : O(n2). 
Only two nested loops are required, so the time complexity is O(n2).
Auxiliary Space : O(1), no extra space is required, so the time complexity is constant.

                                                                                     //Working

Algorithm: 

Sort the array in ascending order.
Traverse the array from start to end.
For every index i, create two variables l = i + 1 and r = n – 1
Run a loop until l is less than r if the sum of array[l], array[r] is equal to zero then print the triplet and break the loop
If the sum is less than zero then increment the value of l, by increasing the value of l the sum will increase as the array is sorted, so array[l+1] > array [l]
If the sum is greater than zero then decrement the value of r, by increasing the value of l the sum will decrease as the array is sorted, so array[r-1] < array [r].
 
                                                                                     //CODE

void findTriplets(int arr[], int n)
{
    bool found = false;
 
    // sort array elements
    sort(arr, arr+n);
 
    for (int i=0; i<n-1; i++)
    {
        // initialize left and right
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];
        while (l < r)
        {
            if (x + arr[l] + arr[r] == 0)
            {
                // print elements if it's sum is zero
                printf("%d %d %d\n", x, arr[l], arr[r]);
                l++;
                r--;
                found = true;
                  break;
            }
 
            // If sum of three elements is less
            // than zero then increment in left
            else if (x + arr[l] + arr[r] < 0)
                l++;
 
            // if sum is greater than zero than
            // decrement in right side
            else
                r--;
        }
    }
 
    if (found == false)
        cout << " No Triplet Found" << endl;
}
