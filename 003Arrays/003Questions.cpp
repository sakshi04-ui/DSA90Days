#include <iostream>
#include <climits>
using namespace std;
//For printing array 

void printarr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

//Que-1]Print each element and its index in an array.

void printarrandindex(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "<<i<<endl;
    }
}

//Que-2]Print elements of an array in reverse order.
void revprintarr(int arr[], int n){
    for(int i = n-1; i >=0; i--){
        cout<<arr[i]<<" ";
    }
}

//Que-3]Print alternate elements of an array.
void alterprintarr(int arr[], int n){
    for(int i=0; i<n; i=i+2){
        cout<<arr[i]<<" ";
    }
}

//Que-4]Create a duplicate of an array.
void duplicatearr(int arr[], int n){
    int dup[n];
    for(int i = 0; i < n ; i++){
        dup[i]= arr[i];
    }
    printarr(dup, n);
}

//Que-5]Create two arrays: one for odd elements and one for even elements.
void oddevenarr(int arr[], int n) {
    int odd[n], even[n]; 
    int oddIndex = 0, evenIndex = 0;

    // Separate odd and even elements
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex++] = arr[i];
        } else {
            odd[oddIndex++] = arr[i];
        }
    }

    // Print results
    cout << "Odd array: ";
    printarr(odd, oddIndex);
    cout << endl;

    cout << "Even array: ";
    printarr(even, evenIndex);
}

//Que-6]Calculate sum and product of array elements.
void sumproductarr(int arr[], int n){
    int sum = 0, product =1;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout<<sum<<" "<<product;
}

//Que-7]Count occurrences of a target number in an array.
int countocc(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){    
            return i;
        }
    }
    return -1;
}

//Que-8]Check if an array is sorted forward, backward, or not at all.
void sortedornot(int arr[], int n) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            increasing = false;
        } 
        if (arr[i] < arr[i + 1]) {
            decreasing = false;
        }
    }

    if (increasing) {
        cout << "Sorted in Increasing Order" << endl;
    } else if (decreasing) {
        cout << "Sorted in Decreasing Order" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }
}

//Que-9]Count unique and duplicate elements in an array (1-100)
void countuniqueandduplicate(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }
    cout << "Count of duplicate elements: " << count << endl;
    cout << "Count of unique elements: " << n - count << endl;
}

//Que-10]Check if two elements exist with a sum equal to a target value bnvcḍśā.
void checksum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}

//Que-11]Check if three elements exist with a sum equal to a target value.
void checkthreesum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = i +2; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                cout << "Yes" << endl;
                return;
                }   
            }
        }
    }
}

//Que-12]Find the maximum element in an array.
int findmax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

//Que-13]Find the minimum element in an array.
int findmin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
//Que-14]Find the 2nd maximum element; if none, print -1
int find2ndmax(int arr[], int n) {
    int max = findmax(arr, n);
    int secondMax = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

//Que - 15]Find the 2nd minimum element; if none, print -1.
int find2ndmin(int arr[], int n) {
    int min = findmin(arr, n);  // Get the minimum element
    int secondMin = INT_MAX;    // Initialize secondMin as a very large value

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }

    // If secondMin is still INT_MAX, that means there was no second minimum value
    return (secondMin == INT_MAX) ? -1 : secondMin;
}

//Que-16]Insert an element at the Xth position, shifting right the existing elements.
void insertatx(int arr[], int n, int x, int element) {
    for (int i = n - 1; i >= x; i--) {
        arr[i + 1] = arr[i];
    }
    arr[x] = element;
    printarr(arr, n);
}

//Que-17]Delete an element at the Xth position, shifting left.
void deleteatx(int arr[], int n, int x) {
    for (int i = x; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = 0;
    printarr(arr, n);
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {5,4,3,2,1};
    int arr2[5] = {8,8,8,8,8};
    printarrandindex(arr, 5);
    cout<<endl;
    revprintarr(arr, 5);
    cout<<endl;
    alterprintarr(arr, 5);
    cout<<endl;
    duplicatearr(arr, 5);
    cout<<endl;
    oddevenarr(arr, 5);
    cout<<endl;
    sumproductarr(arr, 5);
    cout<<endl;
    cout<<countocc(arr, 5, 7)<<endl;
    sortedornot(arr, 5);
    cout<<endl;
    sortedornot(arr1, 5);
    cout<<endl;
    sortedornot(arr2, 5);
    cout<<endl;
    countuniqueandduplicate(arr2, 5);
    cout<<endl;
    checksum(arr, 5, 10);
    cout<<endl;
    checkthreesum(arr, 5, 10);
    cout<<endl;
    cout<<findmax(arr2, 5)<<endl;
    cout<<findmin(arr, 5)<<endl;
    cout<<find2ndmax(arr, 5)<<endl;
    cout<<find2ndmin(arr, 5)<<endl;
    insertatx(arr, 5, 2, 6);
    cout<<endl;
    deleteatx(arr, 5, 2);
    return 0;
}