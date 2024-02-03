# include<stdio.h> // pre processor directive.

int main () { 
    printf("I am learning C."); // printf is also a function. So this is a example of function inside function.
    return 0;
} //  this int main  is  a function.

// Variables: 

    // variable is a container which stores a value and this value gets stored in the memory of computer. Variables in C language stores value of a constant. Variables names can be changed. Example:

        // a = 3;
        // b = 4.7;
        // c = 'A' 

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
            

    
            
            
            



    