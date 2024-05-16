//.This product is open to the public for use, no payment required, just giving of credits is required.
//Made by David Tamaratare Oghenebrume, a Computer Engineering student of Rivers State University. First published on the 13th of May, 2024.
//Last edited on 14th of May, 2024.


#ifndef BRUMSKI_GRADE_CALC
#define BRUMSKI_GRADE_CALC

#include <string>
#include <iostream>
#include <limits>

namespace BRUMSKI {

     template <class T>
          T Input(const std::string& prompt){
              T value;
              while(true){
                  std::cout<<prompt;
                  if(std::cin>>value){
                      break;
                      }
                  else{
                      std::cin.clear();
                      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                      std::cerr<<"Wrong data type, try again!\n";
                      }
                  }
               return value;
              }

    namespace GRADE{       

        char CALCULATOR(const int& score){

            if(score >= 70 && score <= 100){
                return 'A';
                }
            else if(score >= 60 && score <= 69){
                return 'B';
                }
            else if(score >= 50 && score <= 59){
                return 'C';
                }
            else if(score >= 45 && score <= 49){
                return 'D';
                }
            else if(score >= 40 && score <= 44){
                return 'E';     
                }
            else if(score >= 0 && score <= 39){
                return 'F';
                }

              return 'X';  
            }  

        }

    }
#endif