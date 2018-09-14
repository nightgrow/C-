# C++
## 변수
### 지역 변수
- 함수 내에서만 존재하고 접근이 가능한 변수
- 해당 지역(스코프 안)을 벗어나면 자동으로 소멸
- 함수 생성시 메모리에 올라가고 함수가 끝나면 함께 소멸, 때문에 선언된 지역이 다르면 변수 명이 같아도 문제가 되지 않는다.
- 초기화 하지 않고 사용하면 쓰레기값이 들어간다.

ex) void Fuc(int num) {  
    int n1 = 1;
    printf("Fuc Local Variable = %d", n1);  
}  
  
int main() {  
    int num = 20;
    Fuc(num);
    printf("main Local Variable = %d", num);  
}