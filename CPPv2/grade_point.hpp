//.This product is open to the public for use, no payment required, just giving of credits is required.
//Made by David Tamaratare Oghenebrume, a Computer Engineering student of Rivers State University. First published on the 19th of July, 2024.


#pragma once

#include <iostream>

namespace brumski{
    
    namespace grade{
        
        int point(char grade, int course_unit){
            
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

