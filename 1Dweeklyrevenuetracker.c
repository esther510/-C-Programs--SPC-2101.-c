/*
Name:Esther were
Reg no: PA106/G/28753/25
*/
#include <stdio.h>

int main() {
    float revenue[7];  
    float total = 0, average;
    int i;

    // Input revenue for each day
    printf("Enter the revenue for each day of the week:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Add to total
    }

    // Calculate average daily revenue
    average = total / 7;

    // Display results
    printf("\n--- Weekly Revenue Report ---\n");
    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}