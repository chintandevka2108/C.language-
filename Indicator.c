///***********************Q-1*************************///

// #include <stdio.h>
// 
// int stringLength(char *str) {
    // char *ptr = str;
    // int length = 0;
// 
    // while (*ptr != '\0') {
        // length++;
        // ptr++;
    // }
// 
    // return length;
// }
// 
// int main() {
    // char str[100];
// 
    // printf("Enter any string: ");
    // fgets(str, sizeof(str), stdin);
// 
    // if (str[stringLength(str) - 1] == '\n') {
        // str[stringLength(str) - 1] = '\0';
    // }
// 
    // int length = stringLength(str);
    // printf("The length of the string is: %d\n", length);
// 
    // return 0;
// }

///***********************Q-2*************************///

// #include <stdio.h>
// 
// void calculateCubes(int *arr, int size) {
    // for (int i = 0; i < size * size; i++) {
        // printf("%d ", (*(arr + i)) * (*(arr + i)) * (*(arr + i)));
        // if ((i + 1) % size == 0) {
            // printf("\n"); 
        // }
    // }
// }
// 
// int main() {
    // int size;
// 
    // printf("Enter array's size: ");
    // scanf("%d", &size);
// 
    // int array[size][size];
// 
    // printf("Enter array elements:\n");
    // for (int i = 0; i < size; i++) {
        // for (int j = 0; j < size; j++) {
            // printf("a[%d][%d] = ", i, j);
            // scanf("%d", &array[i][j]);
        // }
    // }
// 
    // printf("Cubes of all elements:\n");
    // calculateCubes(&array[0][0], size);
// 
    // return 0;
// }
// 