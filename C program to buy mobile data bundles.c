/*
Name:Bramwel Vitalis
Adm No:CT101/G/26519/25
Description:C program to purchase mobile data bundle 
*/

#include <stdio.h>

int main( ){
    int choice;
    
    //internet bundles offered
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES \n");
    printf("2. 500MB @ 200 KES \n");
    printf("3. 1GB   @ 350 KES \n");
    printf("4. 2GB   @ 600 KES \n");
    
    //prompt user input 
    printf("Enter data choice (1-4):");
    scanf("%d",&choice);
    
    //switch to process choice 
    switch(choice){
        case 1:
            printf("You selected 100MB.
Cost=50 KES\n");
        break;
        case 2:
            printf("You selected 500MB.
Cost=200 KES\n");
        break;
        case 3:
            printf("You selected 1GB.
Cost=350 KES\n");
        break;
        case 4:
            printf("You selected 2GB.
Cost=600 KES\n");
        
        default:
        printf("Invalid choice\n");
        }
        
        return 0;
        
}    