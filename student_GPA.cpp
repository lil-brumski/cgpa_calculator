#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "BRUMSKI_GRADE_CALCULATOR.hpp"
#include "BRUMSKI_GRADE_POINT.hpp"

int main(){
    
    //Variables for storing the scores.
    double RSU_GET103 = BRUMSKI::Input<double>("Enter your score for Elementary Mathematics III: ");
    while(RSU_GET103 < 0 || RSU_GET103 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        RSU_GET103 = BRUMSKI::Input<double>("Enter your score for Elementary Mathematics III: ");
        }
    
    
    double CPE111 = BRUMSKI::Input<double>("Enter your score for Introduction to Computer Engineering: ");
    while(CPE111 < 0 || CPE111 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CPE111 = BRUMSKI::Input<double>("Enter your score for Introduction to Computer Engineering: ");
    }
     
     
    double CHM101 = BRUMSKI::Input<double>("Enter your score for General Chemistry I: ");
    while(CHM101 < 0 || CHM101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM101 = BRUMSKI::Input<double>("Enter your score for General Chemistry I: ");
    }
    
    
   double MTH101  = BRUMSKI::Input<double>("Enter your score for Elementary Mathematics I: ");
   while(MTH101 < 0 || MTH101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        MTH101  = BRUMSKI::Input<double>("Enter your score for Elementary Mathematics I: ");
   }
   
   
   double PHY101= BRUMSKI::Input<double>("Enter your score for General Physics I: ");
   while(PHY101 < 0 || PHY101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY101= BRUMSKI::Input<double>("Enter your score for General Physics I: ");
   }
   
   
   double CHM107 = BRUMSKI::Input<double>("Enter your score for General Practical Chemistry I: ");
   while(CHM107 < 0 || CHM107 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM107 = BRUMSKI::Input<double>("Enter your score for General Practical Chemistry I: ");
   }
   
   
   double GET101 = BRUMSKI::Input<double>("Enter your score for Engineer in Society: ");
   while(GET101 < 0 || GET101 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GET101 = BRUMSKI::Input<double>("Enter your score for Engineer in Society: ");
   }
   
   
   double PHY107 = BRUMSKI::Input<double>("Enter your score for General Practical Physics I: ");
   while(PHY107 < 0 || PHY107 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY107 = BRUMSKI::Input<double>("Enter your score for General Practical Physics I: ");
   }
   
   double GST111= BRUMSKI::Input<double>("Enter your score for Communication in English: ");
   while(GST111 < 0 || GST111 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GST111= BRUMSKI::Input<double>("Enter your score for Communication in English: ");
   }
   
   //Rounds the scores to the nearest integer.
   RSU_GET103 = std::round(RSU_GET103);
   
   CPE111 = std::round(CPE111);
   
   CHM101= std::round(CHM101);
   
   MTH101 = std::round(MTH101);
   
   PHY101 = std::round(PHY101);
   
   CHM107 = std::round(CHM107);
   
   GET101 = std::round(GET101);
   
   PHY107 = std::round(PHY107);
   
   GST111 = std::round(GST111);
   
   //The grades and grade points.
   char rsu_get103 = BRUMSKI::GRADE::CALCULATOR(RSU_GET103);
   double rsuGET103GP = BRUMSKI::GRADE::POINT(rsu_get103, 2);
   
   char cpe111= BRUMSKI::GRADE::CALCULATOR(CPE111);
   double cpe111GP = BRUMSKI::GRADE::POINT(cpe111, 2);
   
   char chm101 = BRUMSKI::GRADE::CALCULATOR(CHM101);
   double  chm101GP = BRUMSKI::GRADE::POINT(chm101, 2);
   
   char mth101 = BRUMSKI::GRADE::CALCULATOR(MTH101);
   double mth101GP = BRUMSKI::GRADE::POINT(mth101, 2);
   
   char phy101 = BRUMSKI::GRADE::CALCULATOR(PHY101);
   double phy101GP = BRUMSKI::GRADE::POINT(phy101, 2);
   
   char chm107 = BRUMSKI::GRADE::CALCULATOR(CHM107);
   double chm107GP = BRUMSKI::GRADE::POINT(chm107, 1);
   
   char get101 = BRUMSKI::GRADE::CALCULATOR(GET101);
   double get101GP = BRUMSKI::GRADE::POINT(get101, 1);
   
   char phy107 = BRUMSKI::GRADE::CALCULATOR(PHY107);
   double phy107GP = BRUMSKI::GRADE::POINT(phy107, 1);
   
   char gst111 = BRUMSKI::GRADE::CALCULATOR(GST111);
   double gst111GP = BRUMSKI::GRADE::POINT(gst111, 2);
   
   
   int carry_over = 0;
  
       if(rsu_get103 == 'F'){
           carry_over++;
           }
      if(cpe111 == 'F'){
           carry_over++;
           } 
     if(chm101 == 'F'){
           carry_over++;
           }
     if(mth101 == 'F'){
           carry_over++;
           }
     if(phy101 == 'F'){
           carry_over++;
           }
     if(chm107 == 'F'){
           carry_over++;
           }
     if(get101 == 'F'){
           carry_over++;
           }
     if(phy107 == 'F'){
           carry_over++;
           }
     if(gst111 == 'F'){
           carry_over++;
           }       
           
   
   double total_credit_unit = 15;
   double GPA = 0.00;
   GPA = (rsuGET103GP + cpe111GP + chm101GP + mth101GP + phy101GP + chm107GP + get101GP + phy107GP + gst111GP) / total_credit_unit;
   
   std::cout<<std::endl;
   
   //Message
   std::cout<<"RSU-GET103: "<<rsu_get103<<std::endl;
   
   std::cout<<"CPE111: "<<cpe111<<std::endl;
   
   std::cout<<"CHM101: "<<chm101<<std::endl;
   
   std::cout<<"MTH101: "<<mth101<<std::endl;
   
   std::cout<<"PHY101: "<<phy101<<std::endl;
   
   std::cout<<"CHM107: "<<chm107<<std::endl;
   
   std::cout<<"GET101: "<<get101<<std::endl;
   
   std::cout<<"PHY107: "<<phy107<<std::endl;
   
   std::cout<<"GST111: "<<gst111<<std::endl;
   
   std::cout<<"This semester GPA: "<<std::fixed<<std::setprecision(2)<<GPA<<std::endl;
   
   std::cout<<"No. of carry over courses: "<<carry_over<<std::endl;
   std::cout<<"No. of passed courses: "<<(9-carry_over);
   std::cout<<std::endl;
    
}