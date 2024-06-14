#ifndef FIRST_SEM
#define FIRST_SEM

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../../class_interfaces/student_gpa_first.hpp"

    
    void First::_first(){
        
        RSU_GET103 = std::round(RSU_GET103);
        CPE111 = std::round(CPE111);
        CHM101= std::round(CHM101);
        MTH101 = std::round(MTH101);
        PHY101 = std::round(PHY101);
        CHM107 = std::round(CHM107);
        GET101 = std::round(GET101);
        PHY107 = std::round(PHY107);
        GST111 = std::round(GST111);
        
        
        char rsu_get103 = brumski::grade::calculator(RSU_GET103);
        double rsuGET103GP = brumski::grade::point(rsu_get103, 2);

        char cpe111= brumski::grade::calculator(CPE111);
        double cpe111GP = brumski::grade::point(cpe111, 2);

        char chm101 = brumski::grade::calculator(CHM101);
        double  chm101GP = brumski::grade::point(chm101, 2);

        char mth101 = brumski::grade::calculator(MTH101);
        double mth101GP = brumski::grade::point(mth101, 2);

        char phy101 = brumski::grade::calculator(PHY101);
        double phy101GP = brumski::grade::point(phy101, 2);

        char chm107 = brumski::grade::calculator(CHM107);
        double chm107GP = brumski::grade::point(chm107, 1);

        char get101 = brumski::grade::calculator(GET101);
        double get101GP = brumski::grade::point(get101, 1);

        char phy107 = brumski::grade::calculator(PHY107);
        double phy107GP = brumski::grade::point(phy107, 1);

        char gst111 = brumski::grade::calculator(GST111);
        double gst111GP = brumski::grade::point(gst111, 2);
   
   
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
        
           
        //double total_credit_unit = 15;
        double GPA = 0.00;
        First::cumulative = (rsuGET103GP + cpe111GP + chm101GP + mth101GP + phy101GP + chm107GP + get101GP + phy107GP + gst111GP);
        GPA = First::cumulative / total_credit_unit;
        
        
        std::cout<<"\nRSU-GET103: "<<rsu_get103<<std::endl;
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
             
        }
        
 
#endif
  
