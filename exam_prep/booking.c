//  Question (5) (b) (i)
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//  Declare functions
int name_check(string firstname, string surname);
int room_check(string room);
int nights_check(int nights);


//  Program
int main(void)
{
    //  Variables
    string firstname = get_string("Enter a first name: ");
    string surname = get_string("Enter a surname: ");
    string room = get_string("Enter basic or premium: ");
    int nights = get_int("Enter between 1 and 5 nights");

    //  AND statements to check if all functions were successful in their checks
    if((name_check(firstname, surname) && room_check(room) && nights_check(nights)) == 0)   //  && means AND
    {
        printf("ALLOWED\n");        //  \n means new line       You don't do it in python but i've seen it in a couple past papers.
    }
    else
    {
        printf("NOT ALLOWED\n");
    }

}

//  Functions

int name_check(string firstname, string surname)
{
    string length[] = {firstname, surname};
    if ((length[0][0] != '\0') && (length[1][0] != '\0'))   //  Just have to remember that every string ends with a \0 to declare that it is the end of the string.
    {
        return 0;           //  'Error Codes' 0 means thumbs up
    }
    else
    {
        return 1;           //  Anything other than 0 means thumbs down but each number could define its' own error code. You've seen error codes on your browser or app before... Right? Basically I'm not only using it as an error code, but a boolean value is the same as an int, 0 - true     1 - false
    }
}

int room_check(string room)
{
    int length = strlen(room);
     for (int i = 0; i < length; i++)
     {
        room[i] = tolower(room[i]);
     }
     if ((strcmp(room, "premium")) || (strcmp(room, "basic")))  //  Compare two strings with each other, In this programming language you cannot just compare two strings, so i use a library for it
     {
        return 0;
     }
     else
     {
        return 1;
     }
}

int nights_check(int nights)
{
    if (1 <= nights || nights >= 6) //  || means OR
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
