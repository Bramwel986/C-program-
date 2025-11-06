/*
Name:Bramwel Vitalis
Adm No:CT101/G/26519/25
Description:Daily sales transactions in file named sales.txt
*/

#include <stdio.h>

int main() {
    FILE *file;
    float transaction, totalSales = 0.0;
    int count = 0;
    
    // Open file
    file = fopen("sales.txt", "r");
    
    if (file == NULL) {
        printf("Error opening sales.txt file!\n");
        printf("The file may not exist or cannot be accessed.\n");
        return 1;
    }
    
    printf("Reading transactions from sales.txt...\n");
    
    // Read all transactions from the file
    while (fscanf(file, "%f", &transaction) != EOF) {
        totalSales += transaction;
        count++;
        printf("Transaction %d: $%.2f\n", count, transaction);
    }
    
    // Close the file
    fclose(file);
    
    // Display results
    printf("\nDaily Sales Summary:\n");
    printf("Total number of transactions: %d\n", count);
    printf("Total sales for the day: $%.2f\n", totalSales);
    
    return 0;
}