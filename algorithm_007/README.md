# cin 참고사항

### cin

- <iostream>에 존재하며, 표준 입력버퍼에서 공백(' ')과 개행('\n')을 무시하고 값을 가져옴



### cin.get

```cpp
char str[10];
for(int i = 0; i <10; i++){
  str[i] = cin.get();
}
    
for (auto &ele : str) cout << ele;
```

- <iostream>에 존재하며, 공백과 개행 포함하여 문자하나만 가져옴.
- 배열선언시, 문자열처럼 사용가능하다. 따라서 띄어쓰기 포함한 한줄입력받기가 가능하다.



### cin.getline

```cpp
char str[100];
//개행입력되면 입력받는 것을 중단한다.
cin.getline(str,100);
//'i'가 입력되면 입력받는 것을 중단한다.
cin.getline(str,100,'i');

cout << str << endl;
```

- <iostream>에 존재하며, 공백과 개행 포함하여 문자열을 가져옴.

