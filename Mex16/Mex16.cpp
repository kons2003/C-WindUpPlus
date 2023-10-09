#include <iostream>
#include <cstring>
using namespace std;

struct Point { int x, y; };
// 후위 감소 연산자 --
 // 피연산자의 x, y 값을 각각 1씩 감소시킴
 // 감소하기 이전의 피연산자 값을 반환함
// 출력 연산자 <<
 // ostream에 x, y를 x:y 형식으로 출력함
 // 첫 번째 피연산자의 참조를 반환함