#include <stdio.h>

int main() {

    ///**********Q.1**********///
    // int rows, cols;
    // int sum = 0;
    // float average;
    // printf("Enter the array's row size: ");
    // scanf("%d", &rows);
    // printf("Enter the array's column size: ");
    // scanf("%d", &cols);
    // 
    // int arr[rows][cols]; 

    // printf("Enter array's elements:\n");
    // for (int i = 0; i < rows; i++) {
        // for (int j = 0; j < cols; j++) {
            // printf("a[%d][%d] = ", i, j);
            // scanf("%d", &arr[i][j]);
            // sum += arr[i][j]; 
        // }
    // }

    // average = (float)sum / (rows * cols);

    // printf("Average of an Array: %.2f\n", average);


     ///**********Q.2**********///


    //   int rows, cols;
//   printf("Enter the array's row size: ");
//   scanf("%d", &rows);
//   printf("Enter the array's column size: ");
//   scanf("%d", &cols);
//   int a[rows][cols], b[rows][cols], c[rows][cols];
//   printf("Enter array A's elements:\n");
//   for (int i = 0; i < rows; i++) {
    //   for (int j = 0; j < cols; j++) {
        //   printf("a[%d][%d] = ", i, j);
        //   scanf("%d", &a[i][j]);
    //   }
//   }
//   printf("Enter array B's elements:\n");
//   for (int i = 0; i < rows; i++) {
    //   for (int j = 0; j < cols; j++) {
        //   printf("b[%d][%d] = ", i, j);
        //   scanf("%d", &b[i][j]);
    //   }
//   }
//   for (int i = 0; i < rows; i++) {
    //   for (int j = 0; j < cols; j++) {
        //   c[i][j] = a[i][j] + b[i][j];
    //   }
//   }
//   printf("Array C is:\n");
//   for (int i = 0; i < rows; i++) {
    //   for (int j = 0; j < cols; j++) {
        //   printf("%d ", c[i][j]);
    //   }
    //   printf("\n");
//   }


//  int rows, cols;
//   printf("Enter the array's row size: ");
//   scanf("%d", &rows);
//   printf("Enter the array's column size: ");
//   scanf("%d", &cols);
//   int a[rows][cols], b[rows][cols], c[rows][cols];
//   printf("Enter array A's elements:\n");
//   for (int i = 0; i < rows; i++) {
    //   for (int j = 0; j < cols; j++) {
        //   printf("a[%d][%d] = ", i, j);
        //   scanf("%d", &a[i][j]);
    //   }
//   }
//   printf("Enter array B's elements:\n");
//   for (int i = 0; i < rows; i++) {
    //   for (int j = 0; j < cols; j++) {
        //   printf("b[%d][%d] = ", i, j);
        //   scanf("%d", &b[i][j]);
    //   }
//   }
//   for (int i = 0; i < rows; i++) {
    //   for (int j = 0; j < cols; j++) {
        //   c[i][j] = a[i][j] + b[i][j];
    //   }
//   }
//   printf("Array C is:\n");
//   for (int i = 0; i < rows; i++) {
    //   for (int j = 0; j < cols; j++) {
        //   printf("%d ", c[i][j]);
    //   }
    //   printf("\n");
//   }




     ///**********Q.3**********///

    //  int size, sum = 0;
    // printf("Enter the array's row & column size: ");
    // scanf("%d", &size);
    // int a[size][size];
    // printf("Enter array's elements:\n");
    // for (int i = 0; i < size; i++) 
    // {
    //     for (int j = 0; j < size; j++) 
    //     {
    //         printf("a[%d][%d] = ", i, j);
    //         scanf("%d", &a[i][j]);
    //     }
    // }
    // for (int i = 0; i < size; i++) 
    // {
    //     sum += a[i][i];  
    // }
    // printf("The sum of diagonal elements of the array: %d\n", sum);


     ///**********Q.4**********///
    // int a[5][5], sum = 0;

    // printf("Enter array's elements:\n");
    // for (int i = 0; i < 5; i++) {
        // for (int j = 0; j < 5; j++) {
            // printf("a[%d][%d] = ", i, j);
            // scanf("%d", &a[i][j]);
        // }
    // }

    // printf("Boundary elements are:\n");
    // for (int j = 0; j < 5; j++) {
        // printf("%d ", a[0][j]);
        // sum += a[0][j];
    // }
    // printf("\n");

    // for (int i = 1; i < 4; i++) {
        // printf("%d ", a[i][0]);
        // sum += a[i][0]; 
        // printf("%d\n", a[i][4]);
        // sum += a[i][4];  
    // }

    // for (int j = 0; j < 5; j++) {
        // printf("%d ", a[4][j]);
        // sum += a[4][j];
    // }
    // printf("\n");

    // printf("The sum of boundary elements of the array: %d\n", sum);

    return 0;
}
