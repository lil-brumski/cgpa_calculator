#ifndef CGPA_IMP_2
#define CGPA_IMP_2

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../../class_interfaces/student_cgpa_main.hpp"
//#include "student_cgpa_part1.hpp"

       void CGPA::calc_2(){
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
             
             
             cumulative_sec = (rsuGET104GP + rsuGET112GP + chm102GP + mth102GP + phy102GP + chm108GP + get102GP + phy108GP + gst112GP);
                  } 
         
         
#endif  
            
             
  