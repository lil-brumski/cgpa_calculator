#include <iostream>
#include <string>

#include <pybind11/pybind11.h>

#include "grade_calculator.hpp"
#include "BRUMSKI_GRADE_POINT.hpp"
#include "gpa_cgpa.hpp"

namespace py = pybind11;

double _input(const std::string& prompt){
    return brumski::Input<double>(prompt);
}


PYBIND11_MODULE(brumski_cgpa, b){
    b.doc() = "A library for calculating CGPA.";
    
    b.def("getInput", &_input, "For collecting the required data type.");
    
    b.def("grade_calc", &brumski::grade::CALCULATOR, "For converting score to grades.");
    
    b.def("grade_point", &brumski::grade::POINT, "For calculating the grade point of that course.");
    
    b.def("gpa_calc", &brumski::gpa::CALC, "For calculating GPA.");
    
    b.def("cgpa_calc", &brumski::cgpa::CALC, "For calculating CGPA.");
    
}
