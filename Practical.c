/*******************///1. C Program to Calculate Average and Grade///********************* */

// #include <stdio.h>
// 
// int main() {
    // int marks[5], sum = 0;
    // float average;
    // char grade;
// 
    // for (int i = 0; i < 5; i++) {
        // printf("Enter marks for subject %d (out of 100): ", i + 1);
        // scanf("%d", &marks[i]);
        // sum += marks[i];
    // }
// 
    // average = sum / 5.0;
// 
    // if (average >= 90) grade = 'A';
    // else if (average >= 75) grade = 'B';
    // else if (average >= 50) grade = 'C';
    // else if (average >= 35) grade = 'D';
    // else grade = 'F';
// 
    // printf("Average Marks: %.2f\n", average);
    // printf("Grade: %c\n", grade);
// 
    // return 0;
// }
// 

/****************///2. C Program to Find the Average of All Elements in a 2D Array///********************* */


// #include <stdio.h>
// 
// float calculateAverage(int rows, int cols, int arr[rows][cols]) {
    // int sum = 0;
    // int count = rows * cols;
// 
    // for (int i = 0; i < rows; i++) {
        // for (int j = 0; j < cols; j++) {
            // sum += arr[i][j];
        // }
    // }
    // return (float)sum / count;
// }
// 
// int main() {
    // int rows = 2, cols = 3;
    // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
// 
    // printf("Average of all elements: %.2f\n", calculateAverage(rows, cols, arr));
// 
    // return 0;
// }

/**********************///3. C Program to Print Odd Elements from 1D Array///**************************** */

// #include <stdio.h>
// 
// void printOddElements(int arr[], int size) {
    // printf("Odd elements: ");
    // for (int i = 0; i < size; i++) {
        // if (arr[i] % 2 != 0) {
            // printf("%d ", arr[i]);
        // }
    // }
    // printf("\n");
// }
// 
// int main() {
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);
// 
    // printOddElements(arr, size);
// 
    // return 0;
// }


/*******************///4. C Program to Find Even Elements from 1D Array Using Pointers///********************/

// #include <stdio.h>
// 
// void findEvenElements(int *arr, int size) {
    // printf("Even elements: ");
    // for (int i = 0; i < size; i++) {
        // if (*(arr + i) % 2 == 0) {
            // printf("%d ", *(arr + i));
        // }
    // }
    // printf("\n");
// }
// 
// int main() {
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int size = sizeof(arr) / sizeof(arr[0]);
// 
    // findEvenElements(arr, size);
// 
    // return 0;
// }

/**************///5. C Program to Represent Laptop Details Using Structures///****************/

// #include <stdio.h>
// #include <string.h>
// 
// struct Laptop {
    // char company_name[50];
    // char processor[50];
    // float price;
// };
// 
// int main() {
    // int n;
// 
    // printf("Enter the number of laptops: ");
    // scanf("%d", &n);
    // struct Laptop laptops[n];
// 
    // for (int i = 0; i < n; i++) {
        // printf("Enter details of laptop %d\n", i + 1);
        // printf("Company Name: ");
        // scanf("%s", laptops[i].company_name);
        // printf("Processor: ");
        // scanf("%s", laptops[i].processor);
        // printf("Price: ");
        // scanf("%f", &laptops[i].price);
    // }
// 
    // printf("\nLaptop Details:\n");
    // for (int i = 0; i < n; i++) {
        // printf("Laptop %d:\n", i + 1);
        // printf("Company Name: %s\n", laptops[i].company_name);
        // printf("Processor: %s\n", laptops[i].processor);
        // printf("Price: %.2f\n\n", laptops[i].price);
    // }
// 
    // return 0;
// }


/*****************////7. C Program to Print Pattern Using Nested For Loop///*******************/

// #include <stdio.h>
// 
// int main() {
    // int n = 5; 
    // int num = 10;
// 
    // for (int i = n; i >= 1; i--) {
        // for (int j = 1; j < i; j++) {
            // printf("_ ");
        // }
        // for (int k = i; k <= n; k++) {
            // printf("%d ", num - (n - k));
        // }
        // printf("\n");
    // }
// 
    // return 0;
// }



