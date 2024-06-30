#ifndef GPA_CGPA
#define GPA_CGPA

#include <iostream>
#include <iomanip>
#include <cmath>

namespace brumski{
    
    namespace gpa{
        
        double CALC(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double course_units){
            
                   double GPA = (a + b + c + d + e + f + g + h + i + j) / course_units;
            
                   std::cout << std::fixed << std::setprecision(2) << std::endl;
            
                   return GPA;
              }
        
        }
        
    namespace cgpa{
        
         double CALC(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l, double m, double n, double o, double p, double q, double r, double s, double course_units, double course_units_sec){
            
                   double CGPA = (a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + s) / (course_units + course_units_sec);
            
                   std::cout << std::fixed << std::setprecision(2) << std::endl;
            
                   return CGPA;
              }
        }
        
    }

#endif