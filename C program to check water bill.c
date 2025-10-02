/*
Name:Bramwel Vitalis 
Adm No:CT101/G/26519/25
Description:C program to calculate water bill
*/

#include<stdio.h>

int main(){
    int units;
    float bill;
     //prompt user to enter units
     printf("Enter units of water used:");
     scanf("%d",&units);
     
     //calculate bill using if-else
     if(units <=30);{
     bill=units*20.0;
     }
     "else if";(units<=60);{
     bill=units*25.0;
     }
     "else";{bill=units*30.0;
     }
     
     //results in 2.dp
     printf("Total water bill:%2.f KES",bill);
     
    return 0;
    
    }