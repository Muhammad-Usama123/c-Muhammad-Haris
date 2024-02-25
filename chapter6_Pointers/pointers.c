// Pointers:

    // A pointer is a variable which stores the address of another variable.

    // Example:

        // i = 72 // i is storing an integer 72 and suppose computer stored the value of i at address "87994" in the computer memory.

        // j = 87994 // now this j is storing the memory address of above declared variable "i" at line 72 and because j is storing the address of i it is called a pointer cause j is pointing towards i.

// The "Address Of" Operator (&):

    // used to obtain the address of a given variable.

        // Example:

            // If you refer to the examples above at line 7 and 9 then

            // &i => 87994
            // &j => 87998

        // format specifier for printing pointer address is "%u"

// The "Value At Address" Operator (*):

    // used to obtain the value present at a given memory address.

        // Example:

            // *(&i) = 72
            // *(&j) = 87994

    // How To Declare A Pointer Type Variable:

        // int *j; // j is pointer variable name and "int *" is for declaration of type int-pointer variable. 

        // j = &i // Store address of i in j.

        // int *ch_ptr; pointer to integer 
        // char *ch_ptr; pointer to character
        // float *ch_ptr; pointer to float

    // Pointers Example Question:

        // #include <stdio.h>
        
        // int main(){
        //     int i = 34;
        //     int *j = &i;
        //     printf("The value of i is %d\n", i);
        //     printf("The value of i is %d\n", *j);
        //     printf("The value of i is %d\n", *(&i));
        //     printf("The value of j is %u\n", j);
        //     printf("The address of i is %u\n", j);
        //     printf("The address of i is %u\n", &i);
        //     printf("The address of j is %u\n", &j);
        //     return 0;
        // }

    // we can change the value of variable by accessing its address. 

    // Pointer To A Pointer:

        // Just like "j" is pointing to "i" or storing the address of "i", we can have another variable "k" which can further store the address of j and the pointer type of k will be "int **k;" "k = &j;"

        // int ***l; l = &j // pointer to a pointer to a pointer. We can go as much deep as we want maybe.

    // Types Of Function Calls:

        // Function calls are of two types.

            // Call By Value ----> Sending the values of arguments
            // Call By Reference ---> sending the address of arguments

                // Note: Through call by value we pass the copy of actual values to our user defined function and we cannot change the original value that is passed from our main function to our user defined function in our that user defined function even if we'll try to do this we won't be able to. But through call by address we'll able to change the original value defined in our main function from our user defined function. Example at line 79 to 98 below of changing the value throough user defined function which accepts address of variables (call by reference) as arguments.

                // Note: In C we usually make a call by value.

                    // Function Prototype and definition of a function which will receive call by reference arguments(means address as arguments) will look like below:

                        // #include <stdio.h>

                        // void swap(int *a, int *b); // function prototype // using "*" (value at address operator)
                        
                        // int main(){
                        //     int a, b;
                        //     a = 4; 
                        //     b = 7; 
                        //     swap(&a, &b) ; // function call. // passing address of values by using "&" (adress of operator)
                        //     return 0;
                        // }

                        // void swap(int *a, int *b){ 
                            // int temp;
                            // temp = *a;
                            // *a = *b;
                            // *b = temp;
                        //  } // function definition. using "*" (value at address operator)


    // Watch chapter 6 practice set q4. actually all questions have something to learn





