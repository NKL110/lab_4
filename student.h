#pragma once
#include <iostream>
#include <cstdlib>

// -본인이름학번 네임스페이스
namespace LeeNaKyung2593202 {
 // 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고
  class student {
    private:
    int id{};
    int score{};
    char grade{};

    //id (7digits),score(0~100), grade ('A',~ 'F')
    // private 멤버함수 정의
    void testId(){
        if (id < 1000000 || id > 9999999){
            std::cout << "Invalid id!" << std::endl;
            std::exit(1);}
    }
    void testScore(){
        if (score < 0 || score > 100){
            std::cout << "Invalid score!" << std::endl;
            exit(1);}
    }
    void testGrade(){
       if (grade < 'A' || grade > 'F'){
         std::cout << "Invalid grade!" << std::endl;
         exit(1);
       }

    }

    public:

    student(int d=1234567, int s=0, char g='F)')
        :id(d),score(s),grade(g)
    {testId(); testScore(); testGrade();}
    // -input: 표준스트림입력으로 멤버변수들 입력, test함수들 호출
    void input () {
         std::cout << "Enter ID: ";
         std::cin >> id;
         testId();
         
         std::cout << "Enter Score: ";
         std::cin >> score;
         testScore();
         
         std::cout << "Enter Grade: ";
         std::cin >> grade;
         testGrade();
        }
        // -set 접근함수들: 멤버변수 값 설정 및 test함수 호출
         void setId(int d) {
        id = d;
        testId();}
        
        void setScore(int s) {
        score = s;
        testScore();}
        
        void setGrade(char g) {
        grade = g;
        testGrade();}
        //change into const function
        // -print: 표준스트림출력으로 멤버변수들 출력
        void print() const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Score: " << score << std::endl;
        std::cout << "Grade: " << grade << std::endl;
        }

    // -get 접근함수들: 멤버변수 값 리턴
    int getId() const {
        return id;
    }

    int getScore() const {
        return score;
    }

    char getGrade() const {
        return grade;
    }
 };