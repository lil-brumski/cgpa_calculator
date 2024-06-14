#ifndef SECOND_SEM
#define SECOND_SEM

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../../class_interfaces/student_gpa_second.hpp


      Second::Second(double r4, double r2, double c2, double m2, double p2, double c8, double g2, double p8, double gs) : RSU_GET104(r4),  RSU_GET112(r2),  CHM102(c2),  MTH102(m2),  PHY102(p2),  CHM108(c8),  GET102(g2),  PHY108(p8),  GST112(gs), total_credit_unit_sec(18), cumulative_sec(0.0) {}
          
            
      void Second::_second(){
          
          RSU_GET104 = std::round(RSU_GET104);
          RSU_GET112 = std::round(RSU_GET112);
          CHM102 = std::round(CHM102);
          MTH102 = std::round(MTH102);
          PHY102 = std::round(PHY102);
          CHM108 = std::round(CHM108);
          GET102 = std::round(GET102);
          PHY108 = std::round(PHY108);
          GST112 = std::round(GST112);
    
    
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
             
             
             //double total_credit_unit_sec = 18;
             double GPA_sec = 0.00;
             cumulative_sec = (rsuGET104GP + rsuGET112GP + chm102GP + mth102GP + phy102GP + chm108GP + get102GP + phy108GP + gst112GP);
             GPA_sec =  cumulative_sec / total_credit_unit_sec;
             
             std::cout<<std::endl;
             
             std::cout<<"RSU-GET104: "<<rsu_get104<<std::endl;
            std::cout<<"RSU-GET112: "<<rsu_get112<<std::endl;
            std::cout<<"CHM102: "<<chm102<<std::endl;
            std::cout<<"MTH102: "<<mth102<<std::endl;
            std::cout<<"PHY102: "<<phy102<<std::endl;
            std::cout<<"CHM108: "<<chm108<<std::endl;
            std::cout<<"GET102: "<<get102<<std::endl;
            std::cout<<"PHY108: "<<phy108<<std::endl;
            std::cout<<"GST112: "<<gst112<<std::endl;

            std::cout<<"Second semester GPA: "<<std::fixed<<std::setprecision(2)<<GPA_sec<<std::endl;
            std::cout<<"No. of carry over courses: "<<carry_over_sec<<std::endl;
            std::cout<<"No. of passed courses: "<<(9 - carry_over_sec);
            std::cout<<std::endl;
           
          }
          
          Second::~Second() = default;
    };
    
#endif