#pragma once
#include <iostream>

namespace LeeNaKyung2593202 {

class studentstatus{

    private:
    student s;
    bool status;
    int classcode;

    

    public:
//public 멤버함수 인라인으로 정의
    studentstatus(student s0= student{1234567,0,'F'}, bool st=false, int c=12345)
        :s{s0}, status{st}, classcode{c}

        {}
    //-생성자: 모든 멤버변수 초기화, 기본값 설정, test함수들 호출
   // studentstatus(student s0= student{1234567,0,'F'}, bool st=false, int c=12345)
        //:s{d,s,g},status{st},

        //-print: 표준스트림출력으로 멤버변수들 출력
void print() const{
    s.print(); //student::print()
    if (status) std::cout<<"on school\n";
    else std:: cout<<"NOT on school\n";
    std::cout << "class code: " << classcode << '\n';
}
// -클래스1형 객체의 접근함수를 참조형식으로 구현
student& getStudent() {return s;}
void setStudent(const student&s0){s=s0;}
 };

}


