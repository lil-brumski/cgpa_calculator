#include <iostream>
#include "C++_to_C#.hpp"

extern "C"{              
    void Grades(){
            double RSU_GET103 = Input<double>("Enter your score for Elementary Mathematics III: ");
    while(RSU_GET103 < 0 || RSU_GET103 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        RSU_GET103 = Input<double>("Enter your score for Elementary Mathematics III: ");
        }


    double CPE111 = Input<double>("Enter your score for Introduction to Computer Engineering: ");
    while(CPE111 < 0 || CPE111 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CPE111 = Input<double>("Enter your score for Introduction to Computer Engineering: ");
    }


    double CHM101 = Input<double>("Enter your score for General Chemistry I: ");
    while(CHM101 < 0 || CHM101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM101 = Input<double>("Enter your score for General Chemistry I: ");
    }


   double MTH101  = Input<double>("Enter your score for Elementary Mathematics I: ");
   while(MTH101 < 0 || MTH101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        MTH101  = Input<double>("Enter your score for Elementary Mathematics I: ");
   }


   double PHY101= Input<double>("Enter your score for General Physics I: ");
   while(PHY101 < 0 || PHY101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY101= Input<double>("Enter your score for General Physics I: ");
   }


   double CHM107 = Input<double>("Enter your score for General Practical Chemistry I: ");
   while(CHM107 < 0 || CHM107 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM107 = Input<double>("Enter your score for General Practical Chemistry I: ");
   }


   double GET101 = Input<double>("Enter your score for Engineer in Society: ");
   while(GET101 < 0 || GET101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GET101 = Input<double>("Enter your score for Engineer in Society: ");
   }


   double PHY107 = Input<double>("Enter your score for General Practical Physics I: ");
   while(PHY107 < 0 || PHY107 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY107 = Input<double>("Enter your score for General Practical Physics I: ");
   }

   double GST111= Input<double>("Enter your score for Communication in English: ");
   while(GST111 < 0 || GST111 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GST111= Input<double>("Enter your score for Communication in English: ");
   }
   
            }
    }