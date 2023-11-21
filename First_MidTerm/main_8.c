#include <stdio.h>
void reversearr(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }}
int main() {
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); }
    reversearr(arr, size);
    printf("Reversed array:");
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
