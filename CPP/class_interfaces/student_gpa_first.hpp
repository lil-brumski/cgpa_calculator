#ifndef FIRST_SEMESTER_GPA
#define FIRST_SEMESTER_GPA

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../non-class_functions/grade_calculator.hpp"
#include "../non-class_functions/grade_point.hpp"

class First{
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
      
     
  public:
    First() = default;
    First(double r3, double cp, double c1, double m1, double p1, double c7, double g1, double p7, double gs) : RSU_GET103(r3),  CPE111(cp),  CHM101(c1),  MTH101(m1),  PHY101(p1),  CHM107(c7),  GET101(g1),  PHY107(p7),  GST111(gs), total_credit_unit(15) {}
    
    void _first();
        
    virtual ~First() = default;
    };

#endif
    