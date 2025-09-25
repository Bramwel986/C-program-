/*
Name:Bramwel Vitalis
Date:22/09/2025
Reg No:CT101/G/36519/25
Description:Program to compute volume and surface area of a cylinder
*/

#include<stdio.h>

int main(){
    //variable declaration
    float radius,height,π =3.142,area,volume;
    
    //prompt the user to enter radius
    printf("Enter radius: ");
    scanf("%f",&radius);
    
    //prompt the user to enter height 
    printf("Enter height:\n");
    scanf("%f",&height);
    
    //display surface area and volume
    area= 2 * π * radius * radius + 2 * π *radius * height;
    volume= π * radius * radius * height;
    printf("Surface area of cylinder is %f\n cm^2\n", area);
    printf("volume of cylinder if %f\n cm^3", volume);
    return 0;
    }