//
//  main.cpp
//  MyInterface2
//
//  Created by mac_ck on 2019/11/15.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
class IErrorLog{
protected:
    string m_name;
    
public:
    virtual bool reportError(char * errorMessage) const = 0;
    virtual ~IErrorLog(){
        
    }
};

class FileErrorLog : public IErrorLog{
public:
    virtual bool reportError(char *errorMessage) const override{
        cout << "Writing error to a file" << endl;
        return true;

    }
};

class ConsoleErrorLog : public IErrorLog{
public:
    virtual bool reportError(char * errorMessage) const override {
        cout << "Printing error to a file" << endl;
        return true;
    }
};

void doSomething(IErrorLog & log){
    log.reportError("runtime error");
}

int main(int argc, const char * argv[]) {
    FileErrorLog f;
    ConsoleErrorLog c;
    doSomething(f);
    doSomething(c);
}
