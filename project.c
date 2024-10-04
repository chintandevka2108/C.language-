#include <stdio.h>

int main() {


    ///***********************Q.1***********************///

    // int n;

    // printf("Enter the array's size: ");
    // scanf("%d", &n);

    // int array[n];  

    // printf("Enter array's elements:\n");
    // for (int i = 0; i < n; i++) {
        // printf("a[%d] = ", i);
        // scanf("%d", &array[i]);
    // }

    // printf("Negative elements from the array: ");
    // int found_negative = 0;
    // for (int i = 0; i < n; i++) {
        // if (array[i] < 0) {
            // if (found_negative == 0) {
                // printf("%d", array[i]);  
            // } else {
                // printf(", %d", array[i]);  
            // }
            // found_negative = 1;
        // }
    // }

    // if (found_negative == 0) {
        // printf("None");  
    // }

    // printf("\n");



    ///***********************Q.2***********************///

// 
    //  int rows, cols, largest;
// 
    // printf("Enter the array's row size: ");
    // scanf("%d", &rows);
    // printf("Enter the array's column size: ");
    // scanf("%d", &cols);
// 
    // int a[rows][cols];
// 
    // printf("Enter array's elements:\n");
    // for (int i = 0; i < rows; i++) {
        // for (int j = 0; j < cols; j++) {
            // printf("a[%d][%d] = ", i, j);
            // scanf("%d", &a[i][j]);
        // }
    // }
    // largest = a[0][0];
    // for (int i = 0; i < rows; i++) {
        // for (int j = 0; j < cols; j++) {
            // if (a[i][j] > largest) {
                // largest = a[i][j];
            // }
        // }
    // }
    // printf("The largest element is: %d\n", largest);




        ///***********************Q.3***********************///
// 
            // int rows, cols;
// 
    // printf("Enter the array's row & column size: ");
    // scanf("%d", &rows);
    // cols = rows; 
// 
    // int a[rows][cols], transpose[cols][rows];
// 
    // printf("Enter array's elements:\n");
    // for (int i = 0; i < rows; i++) {
        // for (int j = 0; j < cols; j++) {
            // printf("a[%d][%d] = ", i, j);
            // scanf("%d", &a[i][j]);
        // }
    // }
    // for (int i = 0; i < rows; i++) {
        // for (int j = 0; j < cols; j++) {
            // transpose[j][i] = a[i][j];
        // }
    // }
    // printf("The transpose matrix of an array:\n");
    // for (int i = 0; i < cols; i++) {
        // for (int j = 0; j < rows; j++) {
            // printf("%d ", transpose[i][j]);
        // }
        // printf("\n");
    // }

        ///***********************Q.4***********************///

            // int rows, cols, rowNum, colNum;
    // printf("Enter the array's row size: ");
    // scanf("%d", &rows);
    // printf("Enter the array's column size: ");
    // scanf("%d", &cols);

    // int a[rows][cols];

    // printf("Enter array's elements:\n");
    // for (int i = 0; i < rows; i++) {
        // for (int j = 0; j < cols; j++) {
            // printf("a[%d][%d] = ", i, j);
            // scanf("%d", &a[i][j]);
        // }
    // }

    // printf("Enter row number: ");
    // scanf("%d", &rowNum);

    // int rowSum = 0;
    // printf("Elements of row %d: ", rowNum);
    // for (int j = 0; j < cols; j++) {
        // printf("%d", a[rowNum][j]);
        // if (j < cols - 1) {
            // printf(", ");
        // }
        // rowSum += a[rowNum][j];
    // }
    // printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    // printf("Enter column number: ");
    // scanf("%d", &colNum);

    // int colSum = 0;
    // printf("Elements of column %d: ", colNum);
    // for (int i = 0; i < rows; i++) {
        // printf("%d", a[i][colNum]);
        // if (i < rows - 1) {
            // printf(", ");
        // }
        // colSum += a[i][colNum];
    // }
    // printf("\nThe sum of column %d: %d\n", colNum, colSum);
    
return 0;
  
}

