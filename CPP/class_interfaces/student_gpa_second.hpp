#ifndef SECOND_SEMESTER_GPA
#define SECOND_SEMESTER_GPA

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../non-class_functions/grade_calculator.hpp"
#include "../non-class_functions/grade_point.hpp"

class Second{
    protected:
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
      double CGPA;
     
      
    public:
      Second() = default;
      Second(double r4, double r2, double c2, double m2, double p2, double c8, double g2, double p8, double gs) : RSU_GET104(r4),  RSU_GET112(r2),  CHM102(c2),  MTH102(m2),  PHY102(p2),  CHM108(c8),  GET102(g2),  PHY108(p8),  GST112(gs), total_credit_unit_sec(18), cumulative_sec(0.0) {}
          
            
      virtual void _second();      
          
      virtual ~Second() = default;
    };
    
#endif