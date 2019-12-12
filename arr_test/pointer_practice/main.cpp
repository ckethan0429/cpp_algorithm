//
//  main.cpp
//  pointer_practice
//
//  Created by mac_ck on 2019/10/27.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;

struct something{
    int a,b,c,d;
};

void printArray(int array[]){
    cout << sizeof(array) << endl;
}

int main(){
    int x = 5;
    int y = 6;
    int *ptr = &x;
    cout << *ptr << " " << ptr << endl;
    
    double d = 123.0;
    double *ptr_d = &d;
    cout << *ptr_d << " " << ptr_d << endl;
    
    typedef int* pint;
    pint ptr_x = &x, ptr_y = &y;
    cout << typeid(ptr_x).name() << endl;
    cout << "그냥 : " << sizeof(x) << sizeof(d) <<endl << "포인터 : " << sizeof(ptr_x) << sizeof(ptr_d) << sizeof(ptr_y) << endl << "그냥 주소 찍어: " << sizeof(&x) << sizeof(&d) << endl;
    
    something ss;
    something *ptr_s;
    cout << sizeof(something) << " " << sizeof(ss) << " " << sizeof(ptr_s) << endl;
    
    
    //null-pointer
    //#include <cstddef>
    //    std::nullptr_t nptr;
    
    int * n_ptr = nullptr;
    if(n_ptr!= nullptr){
        //do useful
    }
    else{
        //do nothing with ptr
    }
    
    //pointer - static array
    int arr[5] = {9,7,5,3,1};
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << *arr << endl;
    int * ptr2 = arr;
    cout << "de-referece operator : " << *ptr2 << endl;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;
    cout << endl;
    
    char name[] = "jackjack";
    cout << name << " " << &name[0] << " "<< *name << endl;
    
    printArray(arr);
    
    
}
