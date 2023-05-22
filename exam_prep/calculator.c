//  Question (4) (c)
#include <stdio.h>
#include <cs50.h>

//  Pre-declaration of function
void calculation(int amount);

int main(void)
{
    int amount = get_int("Enter amount: "); //  This is the number that will be used for the amount of times it will loop

    calculation(amount);    //  This calls the function.
}

void calculation(int amount)    //  My Calculator :)
{
    int numbers[amount];    //  Create an array, the size is the amount because i want to store each of the numbers in it.
    int total = 0;  //  I create the total here because it needs to be outside the loop. Otherwise the variable would only exist within the loop if i called it there instead, So doing this actually makes the loop change the valuable of the existing variable. Small but important detail.
    for (int i = 0; i < amount; i++)    //  A really useful loop i owe my life to. It basically means "set i = 0 and then check if i < amount, if true execute the following code. When that code finishes executing, increment (add 1 to) i.
    {
        numbers[i] = get_int("Number %i: ", (i + 1));   //  As the code changes the value of i every time, i can access each element of the array. Smart me. So i can assign the inputs to each element
        total += numbers[i];    //  And i might aswell add those numbers to that total variable from before ;)
    }
    printf("Total = %i\n", total);  //  Print total
    printf("Average = %i\n", (total/amount));   //  No point in me making a new variable for average as the calculation will always be the same regardless of the code changing. So print total/amount.
}