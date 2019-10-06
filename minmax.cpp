/******************************************************************************
** Author: 	Melissa Clark
** Date:	4.8.19
** Description: A program that asks the user for a number of integers,
		the integers themselves, and displays the maximum and
		minimum integer at the end of the list. 
*******************************************************************************/

#include <iostream>

int main()

{
   int min;           //this will be replaced with any value of integerInput <= value
   int max;           //this will be replaced with any value of intergerInput >= value
   int totalInputs;   // set from user after first question,loop counter 
   int integerInput;  //values being compared for max min from user input
   int intCounter;    //the current # integer being processed

   //Get the numberOfInputs from user
   std::cout << "How many integers would you like to enter?\n";
   std::cin >> totalInputs;   //gets total  value for loop counter

   std::cout << "Please enter " << totalInputs << " integers." << std::endl;

   //establish the loop start, end and increment period
   std::cin >> integerInput;
   min = integerInput;
   max = integerInput;

   for (intCounter = 2; intCounter <= totalInputs; intCounter++)
   {   
      std::cin >> integerInput;  //this is the number that will be compared

      //if larger than max it is new maximum
      if (integerInput > max )
         max = integerInput; 
   
      // if not larger than max,check if smaller than min 
      else if (integerInput < min) 
         min = integerInput;   
   } 
   //display the max and min values
   std::cout <<"min: " << min << "\n"; 
   std::cout <<"max: " << max << std:: endl;

   return 0;
} 