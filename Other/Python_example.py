# GLOBAL values
people_count = 0

# this is a function, i am creating one in order to contain the whole 'algorithm' of the whole scenario (so this is actually where i will spend most of my time coding), but the reason for this is that it needs to be repeated 8 times, so in order to do that i would put that into this function, then i can simply loop the function 8 times, which would add 1, or in other words increment, a GLOBAL value [a value that's not within a function, therefore can be accessed from anywhere] that i will name people_count when a person is granted access. In fact it's at the top of the program.
def process():
    global people_count
    height = -1
    # You did this in seperate lines, for abstraction and easiness to read this is basically compressing the 2 first lines of your code. Note that the int(_) contains the whole input function inside its brackets. This is because you want to CONVERT the INPUT into an INTEGER from a STRING which it by default is, the reason is because whatever the user sends to the console is in the ASCII format, so if you inputted 2, it wouldn't actually store 2, it would instead store its' ASCII value which is 50. You did height = input(int("")). The int() is INSIDE the brackets so you aren't converting the input into an integer, metaphorically speaking your converting int("") into an input, which isn't how it works but you can see that it doesn't work.
# height = input(int("")) ----> height = int(input(""))
    while (height <= 0):
        height = int(input("How tall are you in cm?"))

    if (height >= 140):
        print("Go ahead")
        people_count+= 1

    elif (120 <= height < 140):
        adult = input("Are your riding with an adult? ").upper()

        if adult == 'Y':
            print("Go ahead")
            people_count+= 1

        elif adult == 'N':
            print("You cannot go on this ride.")

    else:
        print("You cannot go on this ride.")

while people_count < 8:
    process()
