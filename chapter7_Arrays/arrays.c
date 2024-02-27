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

    // Accessing Arrays Using Pointers:

        // Consider This Example:

            // #include <stdio.h>
                
            // int main(){
            //     int marks[4];
            //     int *ptr;
                //     ptr = &marks[0]; // This way we can have an integer pointer pointing to first element of the array like this. // ptr = marks and ptr = &marks[0] will do the same thing means it will point to element at 0th index in marks array.

            //     for (int i = 0; i < 4; i++)
            //     {
            //         printf("Enter The Marks of student %d \n", i + 1);
            //         scanf("%d", ptr);
            //         ptr ++;
            //     }

            //     for (int i = 0; i < 4; i++)
            //     {
                //         printf("The marks of student %d is %d \n", i + 1, marks[i]);
            //     }
                    
                    
            //     return 0;
            // }

                // In above example if ptr points to index 0, ptr ++ will point to index 1 and so on.

    // Passing Arrays To Functions:

        // Arrays can be passed to the functions like this:

            // #include <stdio.h>

            // void printArray(int *ptr, int n){
            //     for (int i = 0; i < n; i++)
            //     {
            //         printf("The value of element %d is %d\n", i + 1, *(ptr+i));
            //     } // function can be defined with prototype but good practice is define function separately from function prototype.

                                                // OR 

            // void printArray(int ptr[], int n){
            //     for (int i = 0; i < n; i++)
            //     {
            //         printf("The value of element %d is %d\n", i + 1, ptr[i]);
            //     } 

                // ptr[2] = 5555 // This value will also change in the original arr array in main function which we passed to this user defined function as an argument.
                
            // }
            
            // int main(){
            //     int arr[] = {11, 22, 33, 44, 55, 66, 77};
            //     printArray(arr, 7);
            //     return 0;
            // }

            // In array we can change the value of an array from a userdefined funtion by just passing our array to that user defined funtion and change its value inside that user defined function it will also change the value in original array cause arrays pass reference not copy of value.

    // MultiDimensional Arrays:

        // An array can be of 2 dimension/ 3 dimension/ n dimensions

            // A 2 dimensional array can be defined as:

                // int arr [3][2] = {
                //     {1 , 4}
                //     {7 , 9}
                //     {11, 22}
                // };

                    // We can access the elements of this array as 
                        // arr[0][0] // on this index value of element is 1 
                        // arr [0][1] // on this index value of element is 4

            // Example:

                // #include <stdio.h>
                
                // int main(){
                //     int n_students = 3;
                //     int n_subjects = 5;
                //     int marks[3][5];

                //     for (int i = 0; i < n_students; i++)
                //     {
                //         for (int j = 0; j < n_subjects; j++)
                //         {
                //             printf("Enter the marks of student %d in subject %d \n", i + 1, j + 1);
                //             scanf("%d", &marks[i][j]);11
                //         }
                        
                //     }

                //     for (int i = 0; i < n_students; i++)
                //     {
                //         for (int j = 0; j < n_subjects; j++)
                //         {
                //             printf("The marks of student %d in subject %d are %d \n", i + 1, j + 1, marks[i][j]);
                //         }
                        
                //     }
                    
                //     return 0;
                // }

                // 2-D Arrays In Memory:

                    // A 2-D array is also get stored in contiguous memory blocks like a 1-D array like this:

                        // [1]     [4]     [7]      [9]      [11]      [22] //contiguous blocks joint.
                        // 87224   87228.......... // In above line 202 spaces are because I wanted to write their addresses below them actually they are joint contigous memory blocks means there is no space between these blocks. // square brackets in line 202 are for showing contigous memory blocks of a 2 dimensional array. 
