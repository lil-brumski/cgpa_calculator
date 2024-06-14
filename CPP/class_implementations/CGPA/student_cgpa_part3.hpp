#ifndef CGPA_IMP_3
#define CGPA_IMP_3

#include <iostream>
#include <cmath>
#include <iomanip>
#include "../../class_interfaces/student_cgpa_main.hpp"

        void CGPA::calc_3(){
                  double cGPA = (CGPA::cumulative + CGPA::cumulative_sec)/(CGPA::total_credit_unit + CGPA::total_credit_unit_sec);
                                  std::cout<<std::fixed<<std::setprecision(2)<<"CGPA: "<<cGPA<<std::endl;
                  } 

#endif