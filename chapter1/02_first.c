# include<stdio.h> // pre processor directive.

int main () { 
    printf("I am learning C."); // printf is also a function. So this is a example of function inside function.
    return 0;
} //  this int main  is  a function.

// Variables: 

    // variable is a container which stores a value and this value gets stored in the memory of computer. Variables in C language stores value of a constant. Variables names can be changed. Example:

        // Integer Variables ==> int a = 3;
        // Real Variables ==> float b = 4.7; // double also used for real variables but works different than float maybe. If we'll use int for real it will not through error but if we'll printf then maybe it will not print the value, so use float or double always for real variable values.
        // Character Variables ==> char c = 'A' ;

        // Rules for naming variables in C:

            // 1st character must be an alphabet or underscore(_).

            // No commas, blanks allowed.

            // No special symbol other than underscore(_) allowed.

            // Variables names are case sensitive.

            // Note: we should create meaningful variable names in our programs for readability purposes.

// Constants: 

    // constant means the value cannot be changed.

    // Types Of Constants:

        // Primarily there are 3 types of constants.

            // 1) Integer constant. examples: -1, 6, 7, 9

            // 2) Real constant. examples: -322.1, 2.5, 7.0

            // 3) Character constant. examples: 'a', '$', '@' (Must be enclosed within single inverted commas)

// Keywords:

    // reserved words. 32 keywords according to Haris notes in C below:

        /*
        auto
        break;
        case
        char
        const
        continue;
        default
        do
        double
        long
        return
        register
        short
        signed
        sizeof
        static
        int
        else
        enum
        extern
        float
        for 
        goto
        if
        struct
        switch
        typedef
        union
        unsigned
        void
        volatile
        while
        */

// Basic Structure Of A C Program: (Rules of writing c program)

    // Every C program's execution starts from main() function and executes instructions present inside this main function. 

    // Each instruction is terminated with a semicolon(;).

    // Instructions are case-sensitive.

    // Instructions are executed in the same order in which they are written.

// Comments: 

    // 1) //

    // 2) /* */

// Compilation And Execution Of A C Program:

    // first.c (file in vscode etc.) ==> C Compiler (gcc compiler etc.) ==> first.exe

    // gcc first.c // This command will maybe return the .exe file with the name of a.exe.
    // gcc first.c -o first.exe // command for getting the exe file with our given exe file name in this command after -o flag.

    // ./first.exe // command for running the above first.exe file that our compiler will return to us after running the command in line 102.

    // Compiler performs some basic checks like error and syntax and then convert the c file into .exe file.

// Library Functions:

    // Used to carry out certain tasks. For instance printf function is used to print values on the screen.

        // Example:

            // int a = 4;
            // int d = 45;
            // int e = 45 + 4;
            // float b = 4.7;
            // char c = 'A'

            // printf("This is %d \n", a); // this will print "This is 3" in console.
            // printf("This is %d %d \n", a, a); // this will print "This is 3 3" in console.
            // printf("This is %f \n", b); // this will print "This is 4.7"
            // printf("This is %c \n", c); // this will print "This is A"
            // printf("Sum of a and d is %d \n", a + d); // this will print "Sum of a and d is 49". So it means we can also do calculations in this syntax.
            // printf("This is %d \n", e); // this will print "This is 49"

            // Note: \n is an escape sequence character for new line.

            // %d for integers
            // %f for real values
            // %c for characters

    // Receiving input from the user:

        // For taking input from the user and assign it to a variable, we use scanf function.

        //  Syntax of scanf:

            // scanf("%d", &i) // this "&" is important in scanf function.

            // Note : "&" is the "address of" operator and it means that the supplied value should be copied to the address which is indicated by variable i.

            // Example:

                // #include <stdio.h>

                // int main (){
                    // int a, b; // this will reserve space in memory for the variables a and b. Reserved memory for each variable will be 4 bytes or 2 bytes or whatever bytes depends upon  integer size in architecture like if I am in 32 bit system
                    // printf("Enter the value of a\n");
                    // scanf("%d", &a); // "%d is called format specifier" and "&" for compiler means address of.
                    // printf("Enter the value of b\n");
                    // scanf("%d", &b); // "%d is called format specifier" and "&" for compiler means address of.
                    // printf("The sum of a and b is", a + b);
                    // return 0
                // } // the "int" with "main" function shows that this function will return integer after running. // 0 in operating system means success means the program returned successfully. // when we run this function through terminal or through another program then this return value is very important for that program through which we are running this program.
            

    
            
            
            



    