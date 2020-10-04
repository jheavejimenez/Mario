#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int height;
     
    do
    {
        //Ask the user to input a number
        height = get_int("height: ");
    }
    //Repeat if the the number is not between 1 to 8
    while (height < 1 || height > 8);
    // outer loops
    for (int row = 1; row <= height; row++)
    {
        //inner loop
        for (int j = height - 1; j >= row; j--)
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
}