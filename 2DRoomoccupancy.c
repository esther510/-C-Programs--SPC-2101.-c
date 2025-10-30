/*
Name:Esther were
reg no:PA106/G/28753/25
*/

#include<stdio.h>


int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    srand(time(NULL)); // Seed random number generator

    // Generate random occupancy data
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
        }
    }

    // Display results per floor
    printf("Room Occupancy Report\n");
    printf("---------------------\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}