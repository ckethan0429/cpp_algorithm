//
//  Person.h
//  MyInheritance
//
//  Created by mac_ck on 2019/11/13.
//  Copyright © 2019 cpp. All rights reserved.
//
#pragma once
#ifndef Person_h
#define Person_h
#include <iostream>
#include <string>

class Person
{
public:
    std::string m_name;
    
public:
    Person(const std::string & name_in = "No Name")
    :m_name(name_in){
        
    }
    
    
    void setName(const std::string & name_in){
        m_name = name_in;
    }
    
    std::string getName() const{
        return m_name;
    }
    
    void doNothing() const{
        std::cout << m_name << " is doing Nothing" << std::endl;
    }
};



#endif
