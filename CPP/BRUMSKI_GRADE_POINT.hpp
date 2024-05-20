#ifndef CGPA_CALC
#define CGPA_CALC

#include <iostream>

namespace BRUMSKI{
    
    namespace GRADE{
        
        int POINT(char grade, int course_unit){
            
            if(grade == 'A'){
                return 5 * course_unit;
                }
            else if(grade == 'B'){
                return 4 * course_unit;
                }
            else if(grade == 'C'){
                return 3 * course_unit;
                }
            else if(grade == 'D'){
                return 2 * course_unit;
                }
            else if(grade == 'E'){
                return 1 * course_unit;
                }   
            else if(grade == 'F'){
                return 0 * course_unit;
                }  
                
             return 44*23;
            }
            
        }
        
    }
#endif
