
#ifndef CGPA_MAIN
#define CGPA_MAIN

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../non-class_functions/grade_calculator.hpp"
#include "../non-class_functions/grade_point.hpp"


class CGPA{
    protected:
      double RSU_GET103;
      double CPE111;
      double CHM101;
      double MTH101;
      double PHY101;
      double CHM107;
      double GET101;
      double PHY107;
      double GST111;
      double total_credit_unit;
      double cumulative;
      
      double RSU_GET104;
      double RSU_GET112;
      double CHM102;
      double MTH102;
      double PHY102;
      double CHM108;
      double GET102;
      double PHY108;
      double GST112;
      double total_credit_unit_sec;
      double cumulative_sec;
      double cgpa;
     
    public:
      CGPA(double r3, double cp, double c1, double m1, double p1, double c7, double g1, double p7, double gs1,  double r4, double r2, double c2, double m2, double p2, double c8, double g2, double p8, double gs2) : RSU_GET103(r3),  CPE111(cp),  CHM101(c1),  MTH101(m1),  PHY101(p1),  CHM107(c7),  GET101(g1),  PHY107(p7),  GST111(gs1), total_credit_unit(15), cumulative(0.0), RSU_GET104(r4),  RSU_GET112(r2),  CHM102(c2),  MTH102(m2),  PHY102(p2),  CHM108(c8),  GET102(g2),  PHY108(p8),  GST112(gs2), total_credit_unit_sec(18), cumulative_sec(0.0), cgpa(0.00) {}
             
          void calc_1();
                                     
          void calc_2();                   
              
          void calc_3();
                  
    };

#endif
