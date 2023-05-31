#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int requirement = 8;
int people_count = 0;

// Declaration of functions
bool check_if_int(int height);
int process_algorithm(void);
char authorise_pass(int height);

int main(void)
{
    while (people_count < requirement)
    {
        int exit_code = process_algorithm();
    }
}

//  Functions

//  Main program - As it tells me to do it until 8 people have been permitted, although i wouldn't normally put the main program inside a function like this, it is justifiable purely because i need to use it more than once for different individual people. The idea is essentially that i will put this function in a while loop while it at the same time increasing the people_count by 1 for every permitted visitor.
int process_algorithm(void)
{
    int height;
    do
    {
        height = get_int("How tall are you in cm? :- ");
    }
    while (check_if_int(height) == false);


    char parent;
    if (height >= 140)
    {
        parent = 'Y';
    }
    else if (height >= 120 && height < 140)
    {
        parent = authorise_pass(height);
    }
    else
    {
        printf("You're not permitted to go on this ride\n");
        return 1;
    }


    if (parent == 'Y')
    {
        printf("Go Ahead\n");
        people_count++;
        return 0;
    }
    else if (parent == 'N')
    {
        printf("You're not permitted to go on this ride\n");
        return 1;
    }
    return 0;
}


//  check if integer is applicable (obviously a negative number is not a possible height)
bool check_if_int(int height)
{
    if (height < 0)
    {
        printf("That was not a valid number.\n");
        return false;
    }
    else
    {
        return true;
    }
}

char authorise_pass(int height)
{
    char parent;
    do
    {
        parent = toupper(get_char("Are you riding with an adult? :- "));
    }
    while (parent != 'Y' && parent != 'N'); // a thing i figured out myself is this: I initially thought it was (parent != 'Y' || parent != 'N') where || means OR. The problem is this, if i did put y for example, because one condition is true, it will keep asking the question. It's not something i can explain, it's something you have to take a minute to think about step by step because you won't benefit by me telling you. Just think about the condition in the brackets and it being met result in the loop not breaking.

    return parent;
}
