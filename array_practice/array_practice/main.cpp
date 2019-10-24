//
//  main.cpp
//  array_practice
//
//  Created by mac_ck on 22/10/2019.
//  Copyright © 2019 cpp. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    const int num_rows = 3;
    const int num_columns = 5;
    //배열의길이는 상수로 설정
    int array[num_rows][num_columns]{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    //열은 생략이 가능하다.
    int array2[][num_columns]={
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15}
        
    };
    
    for (int i=0; i<num_rows; i++){
        for (int j=0; j<num_columns; j++){
            cout << array[i][j]<<" ";
        }
        cout << endl;
    }
    
    
    for (int i=0; i<num_rows; i++){
        for (int j=0; j<num_columns; j++){
            cout << &array[i][j]<<" ";
        }
        cout << endl;
    }
    
    char name[] = "jack jack";
    cout << *(name+0) << endl;
    cout << *(&name) << endl;
    cout << *(&name[0]) << endl;
    
}
