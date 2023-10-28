/*
    Code Academy: Learn C++
    BUILD A TEXT ADVENTURE

    Project Goals:  - Text adventure with the storyline of your choosing. The program should use your knowledge of C++ conditionals, logic, and loops.
                    - The program would have a beginning, 3 possible endings
                    - The program should contain 3 branch points where the user must make a choice about what to do next. 
                    - At the branch point the program should give the user at least 2 choices and accept user input

*/
#include <iostream>
#include <stdlib.h>
#include "text.h"

using namespace std;

int main(){

    int user_choice = 0;

    // Introduction of the game
    intro();

    //Takes in User input and only breaks the loop if correct input is taken

    do{
        std::cout << "  >   ";
        std::cin  >> user_choice;
        std::cout << "\n";
    }while(user_choice != 1 && user_choice != 2);
 

    


    //Option 1: Heads towards Shurima
    if(user_choice == 1){
        option_1();

        //reset's the user's choice
        user_choice = 0;

        //takes user's input for the next stage
        do{
            std::cout << "  >   ";
            std::cin  >> user_choice;
            std::cout << "\n";
        }while(user_choice != 1 && user_choice != 2 && user_choice !=3);
        
        //option 1.1
        if(user_choice == 1){
            option_1_1();
            user_choice = 0;
            do{
                std::cout << "  >   ";
                std::cin  >> user_choice;
                std::cout << "\n";
            }while(user_choice != 1 && user_choice != 2 && user_choice !=3);

            
            if(user_choice == 1){
                //option 1.1.1
                option_1_1_1();
                do{
                    std::cout << "  >   ";
                    std::cin  >> user_choice;
                    std::cout << "\n";
                }while(user_choice != 1 && user_choice != 2);

                

                //option 1.1.1.1
                if(user_choice == 1){
                    option_1_1_1_1();
                    ending_1();
                }
                //option 1.1.1.2
                else if (user_choice == 2){
                    option_1_1_1_2();
                    ending_2();
                }
                
            }
        }
        //option 1.2
        else if(user_choice == 2){
            option_1_2();
            user_choice = 0;
            do{
            std::cout << "  >   ";
            std::cin  >> user_choice;
            std::cout << "\n";
            }while(user_choice != 1 && user_choice != 2);            
            if(user_choice == 1){
                //option 1.2.1
                option_1_2_1();
                ending_1();
            }
            else if(user_choice == 2){
                //option 1.2.2
                option_1_2_2();
                user_choice = 0;
                do{
                    std::cout << "  >   ";
                    std::cin  >> user_choice;
                    std::cout << "\n";
                }while(user_choice != 1 && user_choice != 2);
                
                if(user_choice == 1){
                    //option 1.2.2.1
                    option_1_2_2_1();
                    ending_1();
                }
                if(user_choice == 2){
                    //option 1.2.2.2
                    option_1_2_2_2();
                    user_choice = 0;
                    do{
                    std::cout << "  >   ";
                    std::cin  >> user_choice;
                    std::cout << "\n";
                    }while(user_choice != 1 && user_choice != 2);
                    if(user_choice == 1){
                        //option 1.2.2.2.1
                        option_1_2_2_2_1();
                        ending_1();
                    }
                    if(user_choice == 2){
                        //option 1.2.2.2.2
                        option_1_2_2_2_2();
                        ending_1();
                    }

                }

            }
        }
        else if(user_choice == 3){
            option_1_3();
            ending_1();
        }        
        
    }
    //Option 2: Head towards the forest
    else if(user_choice == 2){
        option_2();
        user_choice = 0;
        do{
            std::cout << "  >   ";
            std::cin  >> user_choice;
            std::cout << "\n";
        }while(user_choice != 1 && user_choice != 2);
        //option 2.1
        if(user_choice == 1){
            option_2_1();
            user_choice = 0;
            do{
                std::cout << "  >   ";
                std::cin  >> user_choice;
                std::cout << "\n";
            }while(user_choice != 1 && user_choice != 2);
            //option 2.1.1
            if(user_choice == 1){
                ending_6();
            }
            //option 2.1.2
            else if (user_choice == 2){
                ending_6();
            }

        }
        //option 2.2
        else if (user_choice == 2){
            option_2_2();
            ending_3();
        }
    }
    ending_thanks();
    return 0;
}
