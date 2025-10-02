/*
Name:Bramwel Vitalis
Adm No:CT101/G/26519/25
Description: C program to check eligibility to do exam
*/

#include <stdio.h>

int main(){
    float attendance,average_marks;
    
    //User to enter inputs
    printf("Enter your attendance:");
    scanf("%f", &attendance);
    
    printf("Enter your average_marks:\n");
    scanf("%f", &average_marks);
    
    //confirm if eligible or not eligible 
    if(attendance >= 75 & average_marks >= 40){
    printf("You are eligible for final exams.\n");
    } "else";{
    printf("Not eligible.\n");}
    
    return 0;
    }