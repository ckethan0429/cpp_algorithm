//
//  main.cpp
//  pointer_calculation
//
//  Created by mac_ck on 2019/10/27.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int value = 7;
    int *ptr = &value;
    
    //주소값이 메모리 사이즈만큼(4바이트씩) 차이난다.
    cout << uintptr_t(ptr-1) << endl;
    cout << uintptr_t(ptr) << endl;
    cout << uintptr_t(ptr+1) << endl;
    cout << uintptr_t(ptr+2) << endl;
    
    
    int arr[]{9,7,5,3,1};
    cout << arr[0] << " " << (uintptr_t)&arr[0] << endl;
    cout << arr[1] << " " << (uintptr_t)&arr[1] << endl;
    cout << arr[2] << " " << (uintptr_t)&arr[2] << endl;
    cout << arr[3] << " " << (uintptr_t)&arr[3] << endl;
    cout << endl;
    
    ptr = arr;
    for (int i =0; i < 5; i++){
        cout << *(ptr+i) << " " << (uintptr_t)(ptr+i) << endl;
        
    }
    
    char name[] = "JackJack";
    char * ptr_c = name;
    const int n_name = sizeof(name) / sizeof(name[0]);
    const int n_name2 = sizeof(name) / sizeof(char);
    cout << n_name << " " <<  n_name2 << endl;
    
    for (int i = 0; i < n_name ; i++)
        cout << name[i] ;
    cout << endl;
    
    for (int i = 0; i < n_name ; i++)
        cout << *(name+i) << " " << *(ptr_c + i) ;
    cout << endl;
}
