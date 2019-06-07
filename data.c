
#include<string.h>
#include<stdio.h>
#include<stdbool.h>

//--------------------------------------------------------
// FUNCTION populatedata
//--------------------------------------------------------
bool populatedata(double independent[8], double dependent[8], int dataset)
{
    bool success = true;

    switch(dataset)
    {
        case 1:
            memcpy(independent, (double[8]){10,20,40,45,60,65,75,80}, sizeof(double[8]));
            memcpy(dependent, (double[8]){32,44,68,74,92,98,110,116}, sizeof(double[8]));
            break;

        case 2:
            memcpy(independent, (double[8]){10,20,40,45,60,65,75,80}, sizeof(double[8]));
            memcpy(dependent, (double[8]){40,40,60,80,90,110,100,130}, sizeof(double[8]));
            break;

        case 3:
            memcpy(independent, (double[8]){10,20,40,45,60,65,75,80}, sizeof(double[8]));
            memcpy(dependent, (double[8]){100,10,130,90,40,80,180,50}, sizeof(double[8]));
            break;

        default:
            puts("Invalid dataset requested");
            success = false;
            break;
    }

    return success;
}
