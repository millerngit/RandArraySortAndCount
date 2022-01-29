// noah miller


#include <iostream>
#include <time.h> 
#include <algorithm> 


int main()
{

    std::srand(time(0));
    //declare variables
    int exitQuerry = 1;

    //array sizes
    int const arraySize = 20;
    int const arraySizeTen = 10;
    //arrays 
    int wonderfulArray[arraySize];
    int countArray[10] = { 1,2,3,4,5,6,7,8,9,10 };


  

    std::cout << "This program generates random numbers and tabulates the results";

    while (exitQuerry == 1) {



        // makes array with 10 random numbers
        for (int i = 0; i < arraySize; i++) {

            wonderfulArray[i] = std::rand() % 10 + 1;
            //std::cout << wonderfulArray[i];
            //std::cout << "\n";
        }

        // sort random numbers
        std::sort(wonderfulArray, wonderfulArray + 20);

        // prints random numbers in order
        std::cout << "\n Orginal List Sorted \n";
        for (int i = 0; i < arraySize; i++) {

            std::cout << wonderfulArray[i];
            std::cout << "\n";
            
        }

        // tell how much of each number
        for (int c = 0; c < arraySizeTen; c++) {

            int count = 0;
            for (int i = 0; i < arraySize; i++) {

                if (wonderfulArray[i] == countArray[c]) {
                count++;
                
                
                }
            }
           
            std::cout << "\n" << countArray[c] << "'s:    " << count;
         
        }

        std::cout << "\nTry Again? (1 = yes, 0 = exit) \n"; 
        std::cin >> exitQuerry;
        system("pause");
    }


}

