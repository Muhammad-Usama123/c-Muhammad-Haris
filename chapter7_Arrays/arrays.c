// Array:

    // An array is a collection of similar elements.

        // One Variable => Capable of storing multiple values.

    // Syntax Of Declaring Array:

        // int marks[90]; integer array
        // char name[20]; character array or String
        // float percentile[90]; float array

    // Example Of Array:

        // #include <stdio.h>
        
        // int main(){
        // // Naive way to create 4 ints
        //     // int marks1, marks2, marks3, marks4;
        //     // marks1 = 67;
        //     // marks2 = 56;
        //     // marks3 = 68;
        //     // marks4 = 80;

        // // Declaring And Storing Values In Array:
        //     int marks[4];
        //     marks[0] = 78;
        //     marks[1] = 87;
        //     marks[2] = 98;
        //     marks[3] = 95;
        //     return 0;
        // }

        // Accessing Elements:

            // scanf("%d", &marks[0])
            // printf("%d", marks[0])

            // memory allocation of an array is a contigous block reserved for the declared array variable. If array element at 0th index has address 7 then the address of value at 1st index will be 7 + 4 and so on. 

            // Quick Quiz

    // Initialization Of An Array:

        // There are many other ways in which an array can be initialized.

            // Examples:

                // int cgpa[3] = {9, 8, 8}
                // float marks[] = {33, 40} // Arrays can be initialized while declaration.

    // Arrays In Memory:

        // Consider This Array:

            // int arr[3] = {1, 2, 3} -----> 1 integer = 4 bytes or 2 bytes depends upon system architecture.

            // This will reserve 4 * 3 = 12 bytes in memory. // 4 bytes for each integer.

                // consider below square brackets as contiguous memory blocks of an array:

                    // [1]      [2]       [3] // these are contigous memory blocks means there is no   space between them they are joint but I put spaces so that I can write address in memory below these blocks.
                    // 62302    62306   62310 // addresses of above contiguous memory blocks (at line 62) of an array.

    // Pointer Arithmetic:

        // A pointer can be incremented to point to the next memory location of that type.

            // Consider This Example:

                // int i = 32;
                // int *a = &i; // a = 87994
                // a++;         // Now a = 87998  // a-- also possible // a = a-1 or a + 1 also possible 

                // char a = 'A';
                // char *b = &a; // b = 87994
                // b++;         // Now b = 87995 // b-- also possible // b = b-1 or b + 1 also possible

                // float i = 1.7;
                // float *a = &i; // a = 87994
                // a++;         // Now a = 87998 // a-- also possible // a = a-1 or a + 1 also possible

                // Following operations can be performed on pointers:

                    // Addition of a number to a pointer
                    // Subtraction of a number from a pointer
                    // Subtraction of 1 pointer from another 
                    // Comparision of 2 pointer variables.

