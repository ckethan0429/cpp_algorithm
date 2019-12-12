//
//  Teacher.h
//  MyInheritance
//
//  Created by mac_ck on 2019/11/13.
//  Copyright © 2019 cpp. All rights reserved.
//
#pragma once//#include <string>
#ifndef Teacher_h
#define Teacher_h

#include "Person.h"

class Teacher: public Person
{
    
private:
    
public:
    Teacher(const std::string & name_in ="No Name")
    :Person(name_in)
    {
        
    }
    
    void teach(){
        std::cout << getName() << " is teaching " << std::endl;
    }
    
    
friend std::ostream & operator << (std::ostream & out, const Teacher & teacher){
    out << teacher.getName();
    return out;
}
};
#endif


