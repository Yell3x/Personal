Rules for sorts

O(n^2) Sorts

    Selection Sort

    for i from 0 to n-1
        find smallest number between numbers[i] and numbers[n-1]
        swap smallest number with numbers[i]

    Bubble Sort

    repeat n-1 times
        for i from 0 to n-2
            if numbers[i] and numbers[i+1] out of order
                swap them

O(n log n) Sorts

    Merge Sort

    Sort left half of numbers
    Sort right half of numbers
    Merge sorted halves