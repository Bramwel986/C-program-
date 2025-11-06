/*
Name:Bramwel Vitalis
Adm No:CT101/G/26519/25
Description:Store titles in text file named borrowed_books.txt
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char title[100];
    char choice;
    
    // Open file in append mode to preserve existing records
    file = fopen("borrowed_books.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    do {
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin);
        
        // Remove newline character
        title[strcspn(title, "\n")] = 0;
        
        // Write title to file
        fprintf(file, "%s\n", title);
        
        // Display confirmation message
        printf("Title '%s' successfully stored in borrowed_books.txt\n", title);
        
        printf("Do you want to enter another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Clear input buffer
        
    } while (choice == 'y' || choice == 'Y');
    
    fclose(file);
    printf("All titles have been saved successfully.\n");
    
    return 0;
}