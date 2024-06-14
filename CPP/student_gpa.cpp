#include <iostream>
#include <memory>
#include "headers.hpp"


int main(){
    
    
std::cout<<"FIRST SEMESTER:\n";
    //Variables for storing the scores.
    double RSU_GET103 = brumski::input<double>("Enter your score for Elementary Mathematics III: ");
    //If the score is less than 0 or greater than 100, an infinite loop will start until the score is within the ideal range of values.
    while(RSU_GET103 < 0 || RSU_GET103 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        RSU_GET103 = brumski::input<double>("Enter your score for Elementary Mathematics III: ");
        }


    double CPE111 = brumski::input<double>("Enter your score for Introduction to Computer Engineering: ");
    while(CPE111 < 0 || CPE111 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CPE111 = brumski::input<double>("Enter your score for Introduction to Computer Engineering: ");
    }


    double CHM101 = brumski::input<double>("Enter your score for General Chemistry I: ");
    while(CHM101 < 0 || CHM101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM101 = brumski::input<double>("Enter your score for General Chemistry I: ");
    }


   double MTH101  = brumski::input<double>("Enter your score for Elementary Mathematics I: ");
   while(MTH101 < 0 || MTH101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        MTH101  = brumski::input<double>("Enter your score for Elementary Mathematics I: ");
   }


   double PHY101= brumski::input<double>("Enter your score for General Physics I: ");
   while(PHY101 < 0 || PHY101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY101= brumski::input<double>("Enter your score for General Physics I: ");
   }


   double CHM107 = brumski::input<double>("Enter your score for General Practical Chemistry I: ");
   while(CHM107 < 0 || CHM107 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM107 = brumski::input<double>("Enter your score for General Practical Chemistry I: ");
   }


   double GET101 = brumski::input<double>("Enter your score for Engineer in Society: ");
   while(GET101 < 0 || GET101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GET101 = brumski::input<double>("Enter your score for Engineer in Society: ");
   }


   double PHY107 = brumski::input<double>("Enter your score for General Practical Physics I: ");
   while(PHY107 < 0 || PHY107 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY107 = brumski::input<double>("Enter your score for General Practical Physics I: ");
   }

   double GST111= brumski::input<double>("Enter your score for Communication in English: ");
   while(GST111 < 0 || GST111 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GST111= brumski::input<double>("Enter your score for Communication in English: ");
   }
 
    //Instantiation of smart pointer "ptr" for dereferencing.
   {//Beginning of pointer scope.
       std::unique_ptr<First> ptr = std::make_unique<First>(RSU_GET103, CPE111, CHM101, MTH101, PHY101, CHM107, GET101, PHY107, GST111);
      ptr->_first();
  }//End.
   
   
   
   //SECOND SEMESTER
   std::cout<<"\nSECOND SEMESTER:\n";
    double RSU_GET104 = brumski::input<double>("Enter your score for General Physics IV: ");
    while(RSU_GET104 < 0 || RSU_GET104 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        RSU_GET104 = brumski::input<double>("Enter your score for General Physics IV: ");
    }

    double RSU_GET112 = brumski::input<double>("Enter your score for Probability I: ");
    while(RSU_GET112 < 0 || RSU_GET112 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        RSU_GET112 = brumski::input<double>("Enter your score for Probability I: ");
    }

    double CHM102 = brumski::input<double>("Enter your score for General Chemistry II: ");
    while(CHM102 < 0 || CHM102 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM102 = brumski::input<double>("Enter your score for General Chemistry II: ");
    }

    double MTH102 = brumski::input<double>("Enter your score for Elementary Mathematics II: ");
    while(MTH102 < 0 || MTH102 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        MTH102 = brumski::input<double>("Enter your score for Elementary Mathematics II: ");
    }

    double PHY102 = brumski::input<double>("Enter your score for General Physics II: ");
    while(PHY102 < 0 || PHY102 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY102 = brumski::input<double>("Enter your score for General Physics II: ");
    }

    double CHM108 = brumski::input<double>("Enter your score for General Practical Chemistry II: ");
    while(CHM108 < 0 || CHM108 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM108 = brumski::input<double>("Enter your score for General Practical Chemistry II: ");
    }

    double GET102 = brumski::input<double>("Enter your score for Engineering Graphics and Solid Modelling: ");
    while(GET102 < 0 || GET102 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GET102 = brumski::input<double>("Enter your score for Engineering Graphics and Solid Modelling: ");
    }

    double PHY108 = brumski::input<double>("Enter your score for General Practical Physics II: ");
    while(PHY108 < 0 || PHY108 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY108 = brumski::input<double>("Enter your score for General Practical Physics II: ");
    }

    double GST112 = brumski::input<double>("Enter your score for Nigerian People and Culture: ");
    while(GST112 < 0 || GST112 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GST112 = brumski::input<double>("Enter your score for Nigerian People and Culture: ");
    }
       
    
    {//Beginning of pointer scope.
        std::unique_ptr<Second> ptr1 = std::make_unique<Second>(RSU_GET104, RSU_GET112, CHM102, MTH102, PHY102, CHM108, GET102, PHY108, GST112);
        ptr1->_second();
    }//End.


    
    {//Beginning of pointer scope.
        std::unique_ptr<CGPA> ptr2 = std::make_unique<CGPA>(RSU_GET103, CPE111, CHM101, MTH101, PHY101, CHM107, GET101, PHY107, GST111, RSU_GET104, RSU_GET112, CHM102, MTH102, PHY102, CHM108, GET102, PHY108, GST112);
        ptr2->calc_1();
        ptr2->calc_2();
        ptr2->calc_3();
    }//End.

    
    /*Made by David Tamaratare Oghenebrume, a Computer Engineering student of Rivers State University, Nigeria.
    */
 }