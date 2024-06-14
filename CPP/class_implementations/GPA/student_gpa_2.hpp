#ifndef SECOND_SEM
#define SECOND_SEM

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../../class_interfaces/student_gpa_second.hpp"

            
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
    
    
          char rsu_get104 = brumski::grade::calculator(RSU_GET104);
          double rsuGET104GP = brumski::grade::point(rsu_get104, 2);

          char rsu_get112 = brumski::grade::calculator(RSU_GET112);
          double rsuGET112GP = brumski::grade::point(rsu_get112, 3);

          char chm102 = brumski::grade::calculator(CHM102);
          double chm102GP = brumski::grade::point(chm102, 2);

          char mth102 = brumski::grade::calculator(MTH102);
          double mth102GP = brumski::grade::point(mth102, 2);

          char phy102 = brumski::grade::calculator(PHY102);
          double phy102GP = brumski::grade::point(phy102, 2);

          char chm108 = brumski::grade::calculator(CHM108);
          double chm108GP = brumski::grade::point(chm108, 1);

          char get102 = brumski::grade::calculator(GET102);
          double get102GP = brumski::grade::point(get102, 3);

          char phy108 = brumski::grade::calculator(PHY108);
          double phy108GP = brumski::grade::point(phy108, 1);

          char gst112 = brumski::grade::calculator(GST112);
          double gst112GP = brumski::grade::point(gst112, 2);
    
    
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
             Second::cumulative_sec = (rsuGET104GP + rsuGET112GP + chm102GP + mth102GP + phy102GP + chm108GP + get102GP + phy108GP + gst112GP);
             GPA_sec =  Second::cumulative_sec / total_credit_unit_sec;
             
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
    
#endif