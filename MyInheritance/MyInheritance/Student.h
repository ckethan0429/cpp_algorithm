//
//  Student.h
//  MyInheritance
//
//  Created by mac_ck on 2019/11/13.
//  Copyright © 2019 cpp. All rights reserved.
//
#pragma once
#ifndef Student_h
#define Student_h

//#include <iostream>
//#include <string>
#include "Person.h"

class Student : public Person
{
private:
    int m_intel;
    
    
public:
    Student(const std::string & name_in = "No Name", const int & intel_in = 0)
    : Person(name_in), m_intel(intel_in)
    {}
    
    
    void setIntel(const int & intel_in){
        m_intel = intel_in;
    }
    
    int getIntel(){
        return m_intel;
    }
    
    void study(){
           std::cout << getName() << " is studying " << std::endl;
       }
    
    friend std::ostream & operator << (std::ostream & out, const Student & student){
        out << student.getName() << " " << student.m_intel;
        return out;
    }
};

#endif /* Student_h */
