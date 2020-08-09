/* C program for Merge Sort */
#include <stdio.h> 
#include <stdlib.h> 
  
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6, 7,9, 19, 70, 102, 126, 129, 133, 144, 162, 178, 180, 181, 201, 223, 238, 294, 302, 305, 383, 387, 405, 410, 414, 451, 471, 516, 538, 611, 614, 638, 654, 656, 676, 775, 818, 891, 903, 922, 933, 941, 943, 963, 972, 986, 1008, 1010, 1014, 1087, 1090, 1099, 1114, 1115, 1143, 1173, 1231, 1276, 1279, 1346, 1354, 1378, 1456, 1476, 1490, 1518, 1526, 1574, 1590, 1591, 1594, 1600, 1608, 1651, 1661, 1667, 1673, 1686, 1688, 1689, 1711, 1743, 1765, 1776, 1777, 1808, 1895, 1896, 1904, 1908, 1909, 1915, 1962, 1964, 1966, 2003, 2026, 2034, 2037, 2071, 2105, 2108, 2113, 2119, 2130, 2138, 2167, 2174, 2176, 2179, 2182, 2195, 2236, 2238, 2277, 2294, 2323, 2336, 2350, 2374, 2378, 2382, 2403, 2410, 2412, 2433, 2453, 2465, 2469, 2477, 2478, 2546, 2559, 2580, 2616, 2632, 2655, 2656, 2737, 2785, 2847, 2880, 2881, 2888, 2909, 2916, 2931, 2956, 2963, 2964, 2966, 2971, 2979, 2998, 3012, 3025, 3033, 3037, 3049, 3055, 3070, 3120, 3154, 3224, 3267, 3274, 3276, 3287, 3290, 3301, 3341, 3373, 3379, 3425, 3450, 3465, 3467, 3468, 3496, 3499, 3504, 3546, 3583, 3589, 3627, 3631, 3657, 3658, 3669, 3681, 3726, 3802, 3844, 3857, 3885, 3896, 3923, 3924, 3930, 3941, 3946, 3950, 3952, 3972, 3991, 4021, 4041, 4077, 4084, 4102, 4120, 4125, 4136, 4151, 4164, 4171, 4232, 4262, 4278, 4323, 4338, 4353, 4354, 4378, 4391, 4401, 4475, 4481, 4486, 4519, 4545, 4555, 4577, 4632, 4644, 4667, 4685, 4694, 4711, 4715, 4767, 4775, 4844, 4869, 4892, 4916, 4931, 4955, 4967, 4968, 4970, 4972, 4993, 5000, 5011, 5039, 5043, 5105, 5118, 5125, 5171, 5236, 5267, 5294, 5316, 5317, 5347, 5349, 5353, 5387, 5435, 5479, 5488, 5500, 5505, 5513, 5515, 5548, 5552, 5576, 5580, 5593, 5594, 5610, 5617, 5642, 5703, 5730, 5738, 5794, 5836, 5853, 5879, 5909, 5927, 5931, 5938, 5942, 5946, 5949, 5955, 5960, 5969, 6012, 6055, 6056, 6065, 6071, 6099, 6113, 6135, 6146, 6176, 6180, 6238, 6240, 6288, 6306, 6330, 6333, 6336, 6347, 6349, 6414, 6425, 6444, 6473, 6489, 6551, 6553, 6573, 6575, 6583, 6619, 6626, 6670, 6696, 6710, 6727, 6729, 6730, 6747, 6760, 6764, 6771, 6773, 6785, 6798, 6811, 6884, 6948, 6972, 7009, 7020, 7031, 7056, 7063, 7067, 7094, 7112, 7120, 7128, 7134, 7187, 7191, 7229, 7235, 7245, 7252, 7257, 7280, 7294, 7314, 7323, 7334, 7415, 7458, 7474, 7506, 7512, 7529, 7542, 7555, 7557, 7578, 7586, 7613, 7618, 7690, 7714, 7726, 7730, 7779, 7788, 7791, 7815, 7822, 7846, 7853, 7858, 7919, 7954, 7968, 7988, 8008, 8030, 8038, 8062, 8082, 8096, 8123, 8125, 8130, 8132, 8136, 8154, 8181, 8189, 8243, 8276, 8284, 8293, 8314, 8333, 8342, 8353, 8379, 8403, 8412, 8414, 8420, 8421, 8428, 8447, 8558, 8562, 8604, 8633, 8675, 8733, 8797, 8819, 8854, 8862, 8863, 8947, 8952, 8967, 8989, 8997, 9002, 9028, 9053, 9131, 9149, 9152, 9180, 9183, 9187, 9191, 9198, 9225, 9285, 9300, 9316, 9342, 9353, 9360, 9369, 9390, 9392, 9413, 9442, 9445, 9487, 9488, 9499, 9535, 9563, 9617, 9633, 9660, 9668, 9673, 9738, 9750, 9754, 9824, 9838, 9848, 9863, 9870, 9887, 9921, 9922, 9923, 9925, 9958, 9980, 9981, 9991, 9997}; 
    int arr_size = sizeof(arr) / sizeof(arr[0]); 
  
    printf("Given array is \n"); 
    printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
  
    printf("\nSorted array is \n"); 
    printArray(arr, arr_size); 
    return 0; 
} 
