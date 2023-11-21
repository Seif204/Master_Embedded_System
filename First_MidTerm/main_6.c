#include <stdio.h>
int findUniqueNumber(int arr[], int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            } }
        if (count == 1) {
            unique = arr[i];
            break;
        } } return unique;
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int uniqueNumber = findUniqueNumber(arr, size);
    if (uniqueNumber == 0) {
        printf("No unique number found in the array.\n");
    } else {
           printf("The unique number in the array is: %d\n", uniqueNumber);
    }
    return 0;
}
