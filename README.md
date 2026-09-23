# lab_4

[환경 설정]

1. github.com에 본인 github ID로 로그인하세요. 

2. 본인의 숙제1 repository [https://github.com/cppclass-2026-37275/cppclass-2026-37275-03-assignment1-본인githubID(username)]에 가서 클래스1.h 파일을  다운로드 합니다.  

3. 🟩[New] repository를 만든 후 우측상단 Add file -> Upload files로 다운로드 받은 클래스1.h 파일을 Drag&Drop한 후 🟩[Commit changes...]를 누릅니다. 

4. 오른쪽 상단의 🟩[Code] -> 🟩[Codespaces]를 눌러 💻코딩 환경을 만드세요.

5. 탐색기에서 새 파일을 만들고 파일이름은 main.cpp로 하세요. 

6. [실습4] 내용을 ⌨️코딩, 🛠️컴파일 및 ▶️실행해 보세요.



[컴파일 및 실행 방법]

-⌨️ 📟터미널에서 아래 명령어로 컴파일하고 실행해보세요.

g++ main.cpp -o main && ./main

결과는 📟터미널에서 확인하세요.



[실습4]

1. 본인이름학번의 네임스페이스

-본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 1234567일 경우 KimPro1234567

using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.

-using 지시자 예: { using namespace std; cout << "Enter your id: "; }

-네임스페이스 지정자 예: std::cout << "Enter your id: ";



2. 클래스1.h: 클래스1 정의 (수정)

1의 본인이름학번의 네임스페이스 안에 클래스1을 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 

private 멤버변수 선언 (2개 이상)

private 멤버함수 정의

-test멤버변수1: 멤버변수1 범위가 아니면 프로그램 종료

-test멤버변수2: 멤버변수2 범위가 아니면 프로그램 종료

public 멤버함수 정의

-생성자: 모든 멤버변수 초기화, 기본값 설정, test함수들 호출

-input: 표준스트림입력으로 멤버변수들 입력, test함수들 호출

-set 접근함수들: 멤버변수 값 설정 및 test함수 호출

const 멤버함수 정의

-print: 표준스트림출력으로 멤버변수들 출력

-get 접근함수들: 멤버변수 값 리턴



3. 클래스2.h: 클래스2 정의 (추가)

1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 

private 멤버변수 선언: 클래스1형 객체, 그 외 멤버변수 1개 이상

public 멤버함수 인라인으로 정의

-생성자: 모든 멤버변수 초기화, 기본값 설정

-print: 표준스트림출력으로 멤버변수들 출력

-클래스1형 객체의 접근함수를 참조형식으로 구현



4. main.cpp: 테스트 (추가)

1의 본인이름학번의 네임스페이스 안에 비멤버함수 compare클래스1 정의: 매개변수는 const 클래스1 참조형 2개, 매개변수 멤버들이 모두 같은지를 비교

클래스2 객체1 선언, print함수 호출

클래스2 객체2 초기값을 넣어서 선언, print함수 호출

비멤버함수 compare클래스1을 호출하여 그 리턴값이 true면 same, false면 not same을 표준스트림으로 출력



[커밋 및 푸시]

-🖱🔀[소스제어]에 가서 변경 내용을 적고 커밋 및 푸시하세요.

(변경 내용을 적지 않으면 커밋이 되지 않으니 꼭 변경 내용을 적으세요!)

(📸 Commit: 현재 전체 상태를 기록, ⬆️ Push: 서버에 올리기)

-⌨️git 명령어를 이용한 커밋 및 푸시 방법

📟터미널에서 git add . && git commit -m "message" && git push

"message"는 커밋 내용 (예: ✅과제완료, 🐛수정내용, ✨추가, 🔥삭제, 🚀제출 등등)

-📦github에서 직접 커밋하는 방법]🟩[Codespaces]에서 ✅[Commit & Push]가 안 될 경우, 직접 📦github repository의 main.cpp에서 코드를 ✏️편집한 후 🟩[Commit changes...]하세요.

-💥 github repository에서 codespace를 만들어서 로컬에서 작업 후, 커밋&푸시하지 않은 상태에서 github repository에서 직접 commit하여 브랜치가 갈라질 경우 (diverged)

git add . && git commit -m "local changes": 로컬 변경 사항 커밋

git pull --rebase: 원격 커밋 위에 로컬 커밋

git add . && git rebase --continue: 충돌 발생 시 재배치

git push
