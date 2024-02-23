// Loop Control Instructions:

    // while loops
    // do-while loops
    // for loops

        // While Loops Syntax:

            // while (/* condition */)
            // {
            //     /* code */
            // }

// Increment And Decrement Operators:

    // i++, ++i // i is increased by 1
    // i--, --i // i is decreased by 1

// loop counter can be float as well. // means the value of i can be declared as float as well not only int.

// +++ operator does not exist.

// Compound Assignment Operators:

    // +=, -=, *=, /=, %=
            
        // Example:

            // i += 10; increments i by 10 // i = i + 10;

// Do While Loop Syntax: // A while loop which executes atleast once.

    // do
    // {
    //     /* code */
    // } while (/* condition */);

// For Loop Syntax:

    // for (initialize; condition; increment or decrement)
    // {
    //     /* code */
    // }

        // initialize --> setting a loop counter to an initial value like i = 0; etc. .

    // For Loop Example:

        // #include <stdio.h>
        
        // int main(){
        //     int n;
        //     printf("Enter the value of n\n");
        //     scanf("%d", &n);
        //     for (int i = n; i ; i--) // when the value of i will become 0 so because every non zero value in c is true and 0 is false so this condition "i" will become false and the loop will break.
        //     {
        //         printf("The value of i is %d\n", i);
        //     }
            
        //     return 0;
        // }

// The "break" Statement In C:

    // used to exit the loop irrespective of whether the condition is true or flase doesn't matter.

// The "continue" Statement In C:

    // Like if we write "if (i==5){continue;}" so the loop will not print the 5 (means when "continue;" will get executed it will stop performing this current iteration and will move to the next iteration) and will move to the next iteration which will maybe 6 depends upon the data and details we provided to the loop in this example I am assuming that this loop was printing from 1 to 10 so according to this next iteration after 5 will be 6.

// We can do same work with all these 3 types of loops.
    
    

