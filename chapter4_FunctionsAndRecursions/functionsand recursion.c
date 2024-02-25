// Functions:

    // Functions are a block of code used to perform a particular task and can be reused.

    // Example And Syntax Of Functions:

        // #include <stdio.h>

        // void display(); // Function prototype: Function prototype is a way to tell the compiler about the function we are going to define in the program. Here void indicates that this function returns nothing.
        
        // int main(){
        //     int a;
        //     display(); // Function Call.
        //     return 0;
        // }

        // void display(){
        //     printf("I am display.");
        // }

// Execution of a C program starts from main().

// Function inside function also possible.

// Types Of Functions In C:

    // 2 Types:

        // Library Functions
        // UserDefinedFunctions Functions

            // Library Functions:

                // Commonly required functions grouped together in a library file on disk.

            // User Defined Functions:

                // These are the functions declared and defined by the user.

    // Example Of Function That Takes Parameters And Return A Value:

        // #include <stdio.h>

        // int sum(int a, int b); // Function Prototype Declaration.
        
        // int main(){
        //     int c;
        //     c = sum(2, 5); // Function Call. // 2 and 5 are arguments.
        //     printf("%d", c);
        //     return 0;
        // }

        // int sum(int a, int b){
        //     int result;
        //     result = a + b;
        //     return result;
        // } // sum is a function which takes a and b as input and returns an integer value as an output. a and b are parameters. // A function can return only 1 value at a time.

// Recursion:

    // A function defined in C can call itself is called recursion.

    // A function calling itself is also called 'recursive' function.

    // Example:

        // #include <stdio.h>

        // int factorial(int x);
        
        // int main(){
        //     int c = 3;
        //     printf("The factorial of %d is %d", c, factorial(c));
        //     return 0;
        // }

        // int factorial(int x){
        //     if(x == 0 || x == 1){
        //         return 1;
        //     }
        //     else{
        //         return x * factorial(x - 1);
        //     }
        // }

    // Recursion Notes:

        // Recursion is sometimes the most direct way to code an algorithm.

        // The condition which doesn't call the function any further in a recursive function is called as the base condition.

        // Sometimes due to a mistake made by the programmer, a recursive function can keep running without returning resulting in a memory error.

    // In practice set of this chapter q1, q3 and q5 and last question has something to learn so please watch it. Note by Muhammad Usama.

        