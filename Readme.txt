*******************************************************
*  Description of the program
*******************************************************

The program “main” takes user input of initial amount in cents and 
outputs the entire number of ways that amount can be changed into
quarters, dimes, nickels, and pennies. It will also print out the 
optimal way that minimize the number of coins for the specific amount
of cents.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program takes in the user input.
   It will also calls the int ways function and optimal_way function, 
   to output the ways of change and the minimal number of coins.


*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed Xcode version 7.2(7C68).

*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [WoeHW7]

   Now you should see a directory named homework with the files:
        main.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [WoeHW7] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[main]

4. Delete the obj files, executables, and core dump by
   %./make clean
