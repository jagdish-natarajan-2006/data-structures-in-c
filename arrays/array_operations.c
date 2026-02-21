/*
File: array_operations.c
Description: Basic array operations (Insertion, Deletion, Display)
*/

#include <stdio.h>

#define MAX 100

int arr[MAX];
int size = 0;

// Insert element at position
void insert(int value, int position) {
    if (size >= MAX) {
        printf("Array Overflow\n");
        return;
    }

    if (position < 0 || position > size) {
        printf("Invalid Position\n");
        return;
    }

    for (int i = size; i > position; i--)
        arr[i] = arr[i - 1];

    arr[position] = value;
    size++;
}

// Delete element at position
void delete(int position) {
    if (position < 0 || position >= size) {
        printf("Invalid Position\n");
        return;
    }

    for (int i = position; i < size - 1; i++)
        arr[i] = arr[i + 1];

    size--;
}

// Display array
void display() {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    insert(10, 0);
    insert(20, 1);
    insert(15, 1);

    display();

    delete(1);
    display();

    return 0;
}
