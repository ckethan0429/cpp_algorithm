//
//  main.cpp
//  MyInheritance
//
//  Created by mac_ck on 2019/11/13.
//  Copyright © 2019 cpp. All rights reserved.
//

#include "Student.h"
#include "Teacher.h"

int main() {
    
    Student std("Jack Jack");
    std.setName("jack jack 2");
    std.getName();
    
    std::cout << std.getName() << std::endl;
    
    Teacher teacher1("Dr. H");
    teacher1.setName("Dr. K");
    
    std::cout << teacher1.getName() << std::endl;
    
    std::cout << std << std::endl;
    std::cout << teacher1 << std::endl;
    
    std.doNothing();
    teacher1.doNothing();
    std.study();
    teacher1.teach();
    
    Person person;
    person.setName("Mr. Incredible");
    person.getName();
    
    return 0;
}
