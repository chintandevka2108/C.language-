///*****************************Q-1***********************************///

// #include <stdio.h>
// 
// int main() {
    // FILE *evenFile, *oddFile; 
// 
    // evenFile = fopen("even_file.txt", "w");
    // oddFile = fopen("odd_file.txt", "w");
// 
    // if (evenFile == NULL || oddFile == NULL) {
        // printf("Error opening file!\n");
        // return 1;
    // }
// 
    // for (int i = 50; i <= 70; i++) {
        // if (i % 2 == 0) {
            // fprintf(evenFile, "%d", i); 
            // if (i != 70) {
                // fprintf(evenFile, ", ");  
            // }
        // }
    // }
// 
    // for (int i = 50; i <= 70; i++) {
        // if (i % 2 != 0) {
            // fprintf(oddFile, "%d", i);
            // if (i != 69) {
                // fprintf(oddFile, ", ");  
            // }
        // }
    // }
// 
    // fclose(evenFile);
    // fclose(oddFile);
// 
    // printf("Even numbers written to even_file.txt:\n");
    // evenFile = fopen("even_file.txt", "r");
    // char c;
    // while ((c = fgetc(evenFile)) != EOF) {
        // putchar(c);  
    // }
    // fclose(evenFile);
// 
    // printf("\n\nOdd numbers written to odd_file.txt:\n");
    // oddFile = fopen("odd_file.txt", "r");
    // while ((c = fgetc(oddFile)) != EOF) {
        // putchar(c); 
    // }
    // fclose(oddFile);
// 
    // return 0;
// }
// 
///*****************************Q-2***********************************///

// #include <stdio.h>
// #include <string.h>

// struct Student {
//     int roll_no;
//     char name[50];
//     int chem_marks;
//     int maths_marks;
//     int phy_marks;
// };

// int main() {
//     int N = 5; 
//     struct Student students[N];

//     for(int i = 0; i < N; i++) {
//         printf("Enter details of Student %d:\n", i + 1);
        
//         printf("Roll no => ");
//         scanf("%d", &students[i].roll_no);
        
//         printf("Name => ");
//         getchar(); 
//         fgets(students[i].name, 50, stdin);
//         students[i].name[strcspn(students[i].name, "\n")] = '\0'; 
        
//         printf("Chemistry => ");
//         scanf("%d", &students[i].chem_marks);
        
//         printf("Mathematics => ");
//         scanf("%d", &students[i].maths_marks);
        
//         printf("Physics => ");
//         scanf("%d", &students[i].phy_marks);
        
//         printf("\n");
//     }

//     printf("----- Marksheet -----\n");
//     for(int i = 0; i < N; i++) {
//         int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
//         float percentage = (total / 300.0) * 100;

//         printf("%s (%d)\n", students[i].name, students[i].roll_no);
//         printf("Chemistry => %d\n", students[i].chem_marks);
//         printf("Mathematics => %d\n", students[i].maths_marks);
//         printf("Physics => %d\n", students[i].phy_marks);
//         printf("Total => %d/300\n", total);
//         printf("Percent => %.2f%%\n\n", percentage);
//     }

//     return 0;
// }