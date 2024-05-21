#include <iostream>
#include <cmath>
#include <iomanip>
#include "BRUMSKI_GRADE_CALCULATOR.hpp"
#include "BRUMSKI_GRADE_POINT.hpp"


int main(){
    
    std::cout<<"FIRST SEMESTER:\n";
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
   double cumulative = (rsuGET103GP + cpe111GP + chm101GP + mth101GP + phy101GP + chm107GP + get101GP + phy107GP + gst111GP);
   GPA = cumulative / total_credit_unit;

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

   std::cout<<"First semester GPA: "<<std::fixed<<std::setprecision(2)<<GPA<<std::endl;

   std::cout<<"No. of carry over courses: "<<carry_over<<std::endl;
   std::cout<<"No. of passed courses: "<<(9-carry_over);
   std::cout<<std::endl;





//SECOND Semester 
    std::cout<<"\nSECOND SEMESTER:\n";
    //Variables for storing the scores.
    double RSU_GET104 = BRUMSKI::Input<double>("Enter your score for General Physics IV: ");
    while(RSU_GET104 < 0 || RSU_GET104 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        RSU_GET104 = BRUMSKI::Input<double>("Enter your score for General Physics IV: ");
    }

    double RSU_GET112 = BRUMSKI::Input<double>("Enter your score for Probability I: ");
    while(RSU_GET112 < 0 || RSU_GET112 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        RSU_GET112 = BRUMSKI::Input<double>("Enter your score for Probability I: ");
    }

    double CHM102 = BRUMSKI::Input<double>("Enter your score for General Chemistry II: ");
    while(CHM102 < 0 || CHM102 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM102 = BRUMSKI::Input<double>("Enter your score for General Chemistry II: ");
    }

    double MTH102 = BRUMSKI::Input<double>("Enter your score for Elementary Mathematics II: ");
    while(MTH102 < 0 || MTH102 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        MTH102 = BRUMSKI::Input<double>("Enter your score for Elementary Mathematics II: ");
    }

    double PHY102 = BRUMSKI::Input<double>("Enter your score for General Physics II: ");
    while(PHY102 < 0 || PHY102 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY102 = BRUMSKI::Input<double>("Enter your score for General Physics II: ");
    }

    double CHM108 = BRUMSKI::Input<double>("Enter your score for General Practical Chemistry II: ");
    while(CHM108 < 0 || CHM108 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        CHM108 = BRUMSKI::Input<double>("Enter your score for General Practical Chemistry II: ");
    }

    double GET102 = BRUMSKI::Input<double>("Enter your score for Engineering Graphics and Solid Modelling: ");
    while(GET102 < 0 || GET102 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GET102 = BRUMSKI::Input<double>("Enter your score for Engineering Graphics and Solid Modelling: ");
    }

    double PHY108 = BRUMSKI::Input<double>("Enter your score for General Practical Physics II: ");
    while(PHY108 < 0 || PHY108 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        PHY108 = BRUMSKI::Input<double>("Enter your score for General Practical Physics II: ");
    }

    double GST112 = BRUMSKI::Input<double>("Enter your score for Nigerian People and Culture: ");
    while(GST112 < 0 || GST112 > 100){
        std::cout<<"Score can't be lower than 0 or higher than 100. Try again."<<std::endl;
        GST112 = BRUMSKI::Input<double>("Enter your score for Nigerian People and Culture: ");
    }

    //Rounds the scores to the nearest integer.
    RSU_GET104 = std::round(RSU_GET104);
    RSU_GET112 = std::round(RSU_GET112);
    CHM102 = std::round(CHM102);
    MTH102 = std::round(MTH102);
    PHY102 = std::round(PHY102);
    CHM108 = std::round(CHM108);
    GET102 = std::round(GET102);
    PHY108 = std::round(PHY108);
    GST112 = std::round(GST112);

    //The grades and grade points.
    char rsu_get104 = BRUMSKI::GRADE::CALCULATOR(RSU_GET104);
    double rsuGET104GP = BRUMSKI::GRADE::POINT(rsu_get104, 2);

    char rsu_get112 = BRUMSKI::GRADE::CALCULATOR(RSU_GET112);
    double rsuGET112GP = BRUMSKI::GRADE::POINT(rsu_get112, 3);

    char chm102 = BRUMSKI::GRADE::CALCULATOR(CHM102);
    double chm102GP = BRUMSKI::GRADE::POINT(chm102, 2);

    char mth102 = BRUMSKI::GRADE::CALCULATOR(MTH102);
    double mth102GP = BRUMSKI::GRADE::POINT(mth102, 2);

    char phy102 = BRUMSKI::GRADE::CALCULATOR(PHY102);
    double phy102GP = BRUMSKI::GRADE::POINT(phy102, 2);

    char chm108 = BRUMSKI::GRADE::CALCULATOR(CHM108);
    double chm108GP = BRUMSKI::GRADE::POINT(chm108, 1);

    char get102 = BRUMSKI::GRADE::CALCULATOR(GET102);
    double get102GP = BRUMSKI::GRADE::POINT(get102, 3);

    char phy108 = BRUMSKI::GRADE::CALCULATOR(PHY108);
    double phy108GP = BRUMSKI::GRADE::POINT(phy108, 1);

    char gst112 = BRUMSKI::GRADE::CALCULATOR(GST112);
    double gst112GP = BRUMSKI::GRADE::POINT(gst112, 2);

    int carry_over_sec = 0;

    if(rsu_get104 == 'F'){
        carry_over_sec++;
    }
    if(rsu_get112 == 'F'){
        carry_over_sec++;
    } 
    if(chm102 == 'F'){
        carry_over_sec++;
    }
    if(mth102 == 'F'){
        carry_over_sec++;
    }
    if(phy102 == 'F'){
        carry_over_sec++;
    }
    if(chm108 == 'F'){
        carry_over_sec++;
    }
    if(get102 == 'F'){
        carry_over_sec++;
    }
    if(phy108 == 'F'){
        carry_over_sec++;
    }
    if(gst112 == 'F'){
        carry_over_sec++;
    }

    double total_credit_unit_sec = 18;
    double GPA_sec = 0.00;
    double cumulative_sec = (rsuGET104GP + rsuGET112GP + chm102GP + mth102GP + phy102GP + chm108GP + get102GP + phy108GP + gst112GP);
    GPA =  cumulative_sec / total_credit_unit_sec;

    std::cout<<std::endl;

    //Message
    std::cout<<"RSU-GET104: "<<rsu_get104<<std::endl;
    std::cout<<"RSU-GET112: "<<rsu_get112<<std::endl;
    std::cout<<"CHM102: "<<chm102<<std::endl;
    std::cout<<"MTH102: "<<mth102<<std::endl;
    std::cout<<"PHY102: "<<phy102<<std::endl;
    std::cout<<"CHM108: "<<chm108<<std::endl;
    std::cout<<"GET102: "<<get102<<std::endl;
    std::cout<<"PHY108: "<<phy108<<std::endl;
    std::cout<<"GST112: "<<gst112<<std::endl;

    std::cout<<"Second semester GPA: "<<std::fixed<<std::setprecision(2)<<GPA<<std::endl;
    std::cout<<"No. of carry over courses: "<<carry_over_sec<<std::endl;
    std::cout<<"No. of passed courses: "<<(9 - carry_over_sec);
    std::cout<<std::endl;
    
    double CGPA = (cumulative + cumulative_sec) / (total_credit_unit + total_credit_unit_sec);

   std::cout<<"CGPA: "<<std::fixed<<std::setprecision(2)<<CGPA<<std::endl;
    

}
