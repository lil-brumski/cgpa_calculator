#pragma once

#include <brumski_cpp/math/grade_calculator.hpp>
#include <brumski_cpp/math/grade_point.hpp>
#include <cmath>
#include <iomanip>
#include <stdexcept>

namespace brumski{
    
    char course_grade(const std::string& name){    
    
        float score = -5.0f;
    
        while(true){
            if(score < 0 || score > 100){
                score = brumski::Input<float>("Enter your "+name+" score: ");
             }
             else{
                 break;
             }
        }    
    
        score = std::round(score);    
    
        char grade = brumski::grade::CALCULATOR(score);    
    
        return grade;
    
        }
    
    
    int course_grade_point(const char& grade, const int& course_units){
        return brumski::grade::point(grade, course_units);
    }
    
    
    float semester_GPA(const float& cumulative_units, const float& total_course_units){
        
        float gpa = 0.0f;
        
        try{
            if(total_course_units <= 0){
                throw std::runtime_error("Total course units cannot be zero!");
            }
            gpa = cumulative_units / total_course_units;
        }
        catch(const std::exception& error){
            std::cerr << "Error: " << error.what() << std::endl;
        }
        
        
        
        std::cout << std::fixed << std::setprecision(2) << std::endl;
        
        return gpa;
    }
    
}
