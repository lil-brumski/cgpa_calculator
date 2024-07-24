#include <iostream>
#include "cgpa.hpp"

int main(){
    
    float cumulative_units = 0.0f;
    int total_course_units = 9;
    
    //Variables for storing the courses'' grades.
    char MTH101 = brumski::course_grade("MTH101");
    char PHY101 = brumski::course_grade("PHY101");
    char CHM101 = brumski::course_grade("CHM101");
    
    //Variables for storing the courses' grade point.'
    int mth101 = brumski::course_grade_point(MTH101, 3);
    int phy101 = brumski::course_grade_point(PHY101, 3);
    int chm101 = brumski::course_grade_point(CHM101, 3);
    
    //Cumulative units for 1st semester.
    cumulative_units += mth101 + phy101 + chm101;
    
    //Stores user's first semester GPA.
    float fstGPA = brumski::semester_GPA(cumulative_units, total_course_units);
    
    std::cout << "First Semester:" 
    << "\nMTH101: " << MTH101 
    << "\nPHY101: " << PHY101
    << "\nCHM101: " << CHM101 << std::endl;
    std::cout << "First Semester GPA is: " << fstGPA << std::endl;
    std::cout << "CGPA is: " << fstGPA << std::endl;
    
    std::cout << std::endl;
    
    float cumulative_units_sec = 0.0f;
    int total_course_units_sec = 8;
    
    //Variables for storing the courses'' grades.
    char MTH102 = brumski::course_grade("MTH102");
    char PHY102 = brumski::course_grade("PHY102");
    char CHM102 = brumski::course_grade("CHM102");
    
    //Variables for storing the courses' grade point.'
    int mth102 = brumski::course_grade_point(MTH102, 3);
    int phy102 = brumski::course_grade_point(PHY102, 3);
    int chm102 = brumski::course_grade_point(CHM102, 2);
    
    //Cumulative units for 2nd semester.
    cumulative_units_sec += mth102 + phy102 + chm102;
    
    //Stores user's second semester GPA.
    float secGPA = brumski::semester_GPA(cumulative_units_sec, total_course_units_sec);
    
    //Cumulative units for 1st and 2nd semester.
     cumulative_units += mth102 + phy102 + chm102;
     
     //Cumulative grade point.
      int total_cu = total_course_units + total_course_units_sec;
      
      //Stores user's CGPA.
      float cgpa = brumski::semester_GPA(cumulative_units, total_cu);
    
    std::cout << "\nSecond Semester:" 
    << "\nMTH102: " << MTH101 
    << "\nPHY102: " << PHY101
    << "\nCHM102: " << CHM101 << std::endl;
    std::cout << "Second Semester GPA is: " << secGPA << std::endl;
     std::cout << "CGPA is: " << cgpa << std::endl;
    
    
}
