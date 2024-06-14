#ifndef FIRST_SEM
#define FIRST_SEM

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../../class_interfaces/student_gpa_first.hpp



        First::First(double r3, double cp, double c1, double m1, double p1, double c7, double g1, double p7, double gs) : RSU_GET103(r3),  CPE111(cp),  CHM101(c1),  MTH101(m1),  PHY101(p1),  CHM107(c7),  GET101(g1),  PHY107(p7),  GST111(gs), total_credit_unit(15) {}
    
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
        
           
        //double total_credit_unit = 15;
        double GPA = 0.00;
        cumulative = (rsuGET103GP + cpe111GP + chm101GP + mth101GP + phy101GP + chm107GP + get101GP + phy107GP + gst111GP);
        GPA = cumulative / total_credit_unit;
        
        
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
        
        First::~First() = default;
    };
 
#endif
  
