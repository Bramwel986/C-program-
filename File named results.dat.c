/*
Name:Bramwel Vitalis
Adm No:CT101/G/26519/25
Description:Student examination results in file named results.dat
*/

#include <stdio.h>
#include <string.h>

// Define structure for student information
struct Student {
    char name[50];
    int regNumber;
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    
    // Open binary file for reading
    file = fopen("results.dat", "rb");
    
    if (file == NULL) {
        printf("Error opening file! File may not exist.\n");
        return 1;
    }
    
    printf("Student Examination Results:\n");
    printf("----------------------------\n");
    
    // Read and display all student records
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", student.name);
        printf("Registration Number: %d\n", student.regNumber);
        printf("Total Marks: %.2f\n", student.totalMarks);
        printf("----------------------------\n");
    }
    
    fclose(file);
    return 0;
}

#include <stdio.h>

struct Student {
    char name[50];
    int regNumber;
    float totalMarks;
};

void createSampleFile() {
    FILE *file;
    struct Student students[3];
    
    // Sample data
    strcpy(students[0].name, "Nathaniel Ouma");
    students[0].regNumber = JQW197V;
    students[0].totalMarks = 90.5;
    
    strcpy(students[1].name, "Alexander Mutiso");
    students[1].regNumber = QFT709Z;
    students[1].totalMarks = 72.0;
    
    strcpy(students[2].name, "Mary Sankare");
    students[2].regNumber = GQ103;
    students[2].totalMarks = 78.5;
    
    file = fopen("results.dat", "wb");
    if (file != NULL) {
        fwrite(students, sizeof(struct Student), 3, file);
        fclose(file);
        printf("Sample data file created successfully.\n");
    }
}