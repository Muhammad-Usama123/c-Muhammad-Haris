// A C program is a set of instructions. Just like a recipe, which contains instructions to prepare a particular dish.

// Types Of Instructions:

    // 1) Type Declaration Instruction.

        // Examples:

            // int a;
            // float b;
            // char c; etc. etc.

            // General Example:

            // #include <stdio.h>
            
            // int main(){
            //     int a = 4, b, c; // type declaration instruction
            //     b = c = a;
            //     printf("The value of a is %d\n", a);
            //     printf("The value of b is %d\n", b);
            //     printf("The value of c is %d\n", c);
            //     return 0;
            // }

            // Below code will produce error:

            // #include <stdio.h>
            
            // int main(){
            //     float b = a + 8.9; // this line will produce error cause at this line this code don't know what is the value of a so the correct code is in below example at line 41.
            //     float a = 1.1; 
            //     printf("The value of b is %f\n", b);
            //     return 0;
            // }

            // Below is the correct code of line 26 error code example:

            // #include <stdio.h>
            
            // int main(){
            //     float a = 1.1; // type declaration instruction
            //     float b = a + 8.9;
            //     printf("The value of b is %f\n", b);
            //     return 0;
            // }

    // 2) Arithmetic Instruction.

        // Examples:

            // 2+2;
            // 2-2; 
            //3*2; etc. etc.

            // Code Example:

                // #include <stdio.h>
                
                // int main(){
                //     int a = 4;
                //     int b = 8; 
                    
                //     printf("the value of a + b is %d\n", a + b); // a and b are operands and + is operator
                //     printf("the value of a - b is %d\n", a - b); // a and b are operands and - is operator
                //     printf("the value of a * b is %d\n", a * b); // a and b are operands and * is operator
                //     printf("the value of a / b is %d\n", a / b); // a and b are operands and / is operator

                //     int z;
                //      z = b * a; // legal  
                //     //  b * a = z; // illegal  
                //     printf("the value of z is %d\n", z); 

                //     return 0;
                // } // 

                // + - * / are arithmetic operators.

                // % is Modular division operator:

                    // Returns the remainder.
                    // Cannot be applied on float.
                    // Sign is same as of numerator(printf("%d", -5 % 2) it will print -1); (printf("%d", 5 % 2) it will print 1); printf("%d", 5 % -2) it will also print 1 cause Sign is same as of numerator.

                // for exponentiation (means power like square cube etc.) we can use pow(x, y) function from <math.h> library in C like in example below:

                    // #include <stdio.h>
                    // #include <math.h> // for using pow function
    
                    // int main(){
                    //     printf("%f\n", pow(2, 5)); // for calculating 2 to the power 5. // if we'll use "%d" for this function it will print 0 cause it returns double (similar to float)(a real number) value.
                    //     return 0;
                    // }

                // Type Conversion:

                    // An Arithmetic operation between:

                        // int and int ==> int
                        // int and float ==> float
                        // float and float ==> float

                        // 5 / 2 ==> 2 // not 2.5 and the reason is in line 99 above.
                        // 2 / 5 ==> 0 // the reason is in line 99 above.
                        // 5.0 / 2.5 ==> 2  
                        // 2.0 / 5 ==> 0.4 

    // 3) Control Instruction.

        // Examples:

            // for loop
            // while loop etc. etc.

            // Control instructions simply tells us that which thing will execute first and which thing will execute second and which program will run when and where etc. etc. In simple wordscontrol instruction decides flow of program.


