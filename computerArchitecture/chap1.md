# week1
# chap1. 서론

## 1-1. 컴퓨터 시스템의 구성
### 컴퓨터의 기본 구성
* 컴퓨터 시스템은 하드웨어와 소프트웨어로 구성
* 컴퓨터 성능은 주로 하드웨어에 의해 결정되며, 소프트웨어는 하드웨어가 제공하는 기능들을 이용하여 최종 결과를 얻을 수 있도록 도와줄 뿐이다.
* 소프트웨어의 질에 따라 하드웨어의 사용 효율이 일부 향상되거나 사용 환경이 좀 더 편리해질 수는 있다.
![image](https://github.com/user-attachments/assets/66faeecd-ddb9-40db-8102-4f26ac5a5644)


* 하드웨어: 컴퓨터에서 각종 정보를 입력하여 처리하고 저장하는 동작이 실제 일어나게 해주는 물리적인 실체
* 소프트웨어: 정보 처리의 종류를 지정하고 정보의 이동 방향을 결정하는 동작이 일어나는 시간을 지정해 주는 명령(command)들의 집합(프로그램)

1. 하드웨어

* 컴퓨터의 하드웨어는 중앙 처리 장치, 주기억 장치, 입력 장치, 출력 장치, 시스템 버스로 구성
* 각 구성 요소는 시스템 버스를 통해 상호 연결됨

![image](https://github.com/user-attachments/assets/8311ad8e-28ed-4cdd-9a1b-b4e8a633a7c5)

#### 중앙 처리 장치
* 인간의 두뇌에 해당하는 부분
* 컴퓨터의 특성을 결정
* 컴퓨터의 핵심 기능인 프로그램 실행과 데이터 처리를 담당
* 프로세서 또는 마이크로프로세서라고도 부름
* 구성
  * 산술 연산, 논리연산, 보수 연산, 시프트 연산 수행
  * 제어 장치: 프로그램의 명령어를 해독하여 명령어 실행에 필요한 제어 신호를 발생시키고 컴퓨터의 모든 장치를 제어
  * 레지스터: 중앙 처리 장치 내부에 있는 데이터를 일시적으로 보관하는 임시 기억 장치로, 프로그램 실행 중에 사용되며 고속으로 액세스할 수 있다.

![image](https://github.com/user-attachments/assets/64b0cd97-281b-41f0-bb45-123789e78d99)

#### 기억 장치
* 중앙 처리 장치가 처리할 프로그램과 데이터는 기억 장치에 저장
* 주기억 장치
  * 중앙 처리 장치 가까이에 위치
  * 반도체 칩으로 구성되어 고속으로 액세스가 가능하지만 고가임
  * 프로그램 실행 중에 일시적으로만 사용되는 휘발성 메모리임(전원 꺼지면 데이터 날라감)
* 보조 기억 장치
  * 하드디스크, SSD, CD-ROM같은 비휘발성 메모리(전원 꺼져도 데이터 그대로)
  * 저장 밀도가 높고 저가이지만 속도가 느림
  * 중앙 처리 장치에 당장 필요하지 않은 많은 양의 데이터나 프로그램을 저장하는 장치
 
#### 입출력 장치
* 입력 장치: 데이터를 전자적인 2진 형태로 변환하여 컴퓨터 내부로 전달함. 키보드, 마우스 등
* 출력 장치: 중앙처리장치가 처리한 전자적인 형태의 데이터를 사람이 이해할 수 있는 데이터로 변환하여 출력함
* 입력 장치와 출력 장치를 합하여 입출력장치(I/O device)라고도 함

#### 시스템 버스
* 중앙 처리 장치와 기억 장치 및 입출력 장치 사이에 정보를 교환하는 통로
* 주소 버스
   * 기억 장치나 입출력 장치를 지정하는 주소 정보를 전송하는 신호 선들의 집합
   * 단방향(주소는 중앙처리 장치에서 발생되어 기억 장치와 입출력 장치로 보내지는 정보이기 때문)
* 데이터 버스
   * 기억 장치나입출력 장치 사이에 데이터를 전송하기 위한 신호선들의 집합
   * 데이터선의 수는 중앙 처리 장치가 한 번에 전송할 수 있는 데이터 비트의 수를 결정함
   * 양방향 전송이 가능해야 함(읽기와 쓰기 동작을 모두 지원해야 함)
* 제어 버스
   * 중앙 처리 장치 시스템 내의 각종 요소의 동작을 제어하는 데 필요한 신호선들의 집합
   * 기억 장치 읽기와 쓰기 신호, 입출력 장치 읽기와 쓰기 신호 등이 있음
   * 단방향
 
#### 컴퓨터 시스템의 구성
* 주기억 장치는 중앙처리 장치와 시스템 버스를 통해 연결됨
   * 중앙 처리 장치는 데이터가 저장되어 있는 기억 장소의 주소를 주소 버스를 통해 보내면서 읽기 신호를 활성화함
   * 그러면 일정한 시간이 경과한 후 기억 장치로부터 읽혀진 데이터가 데이터 버스에 실리며 중앙 처리 장치는 그 데이터를 읽으면 됨
   * 중앙 처리 장치는 데이터를 저장할 기억 장소의 주소와 저장할 데이터를 각각 주소 버스와 데이터 버스를 통해 보내고 동시에 쓰기 신호를 활성화
   * 따라서 중앙 처리 장치와 주기억 장치 사이에는 이러한 정보들의 통로인 주소버스, 데이터 버스 및 제어 버스의 읽기/쓰기 신호선들이 연결되어야 함

* 보조기억 장치나 입출력 장치는 속도가 느리기 때문에 인터페이스 회로나 제어기를 통해 중앙 처리 장치와 연결되어야 함

![image](https://github.com/user-attachments/assets/4abcb030-cb66-415b-b92a-97cbe2522021)

* 컴퓨터 시스템의 수행 기능
   * 프로그램 실행: 중앙 처리 장치가 주기억 장치에서 프로그램 코드를 읽어 실행
   * 데이터 저장: 프로그램 실행 결과를 주기억 장치에 저장
   * 데이터 이동: 하드 디스크같은 보조 기억 장치에 저장되어 있는 명령어와 데이터 블록을 주기억 장치로 이동
   * 데이터 입출력: 사용자가 키보드나 마우스를 통해 입력하는 명령어나 데이터를 입력하거나 중앙 처리 장치가 처리한 결과를 모니터나 프린터로 출력
   * 제어: 프로그램에서 정해진 순서에 따라 실행되도록 각종 제어 신호를 발생
 
2. 소프트웨어
* 소프트웨어: 컴퓨터를 구성하고 있는 하드웨어를 잘 동작시킬 수 있도록 제어하고, 지시하는 모든 종류의 프로그램
* 프로그램: 컴퓨터를 사용해 어떤 일을 처리하기 위해 순차적으로 구성된 명령어들의 집합
* 시스템 소프트웨어
   * 하드웨어를 관리하고 응용 소프트웨어를 실행하는 데 필요한 프로그램
   * 운영체제, 언어 번역 프로그램, 유틸리티 프로그램
   * 유틸리티 프로그램: 각종 주변 장치들을 구동하는 데 필요한 드라이버 프로그램, 백신 프로그램, TCP/IP같이 컴퓨터를 네트워크로 연결하는 데 필요한 각종 프로그램 등
 
![image](https://github.com/user-attachments/assets/3dc485dd-e302-4020-9a2b-d7420d6636a7)


* 응용 소프트웨어: 컴퓨터 시스템을 일반 사용자들이 특정한 용도에 활용하기 위해 만든 프로그램으로, 애플리케이션, 앱, 어플이라고도 함

![image](https://github.com/user-attachments/assets/fc46e589-a8d5-4871-a254-679d8e66cce3)

3. 프로그램 처리 과정
* 프로그램은 고급 언어-> 어셈블리어-> 기계어 순으로 변환
![image](https://github.com/user-attachments/assets/1d65195e-39d1-4144-bb9e-4f51ab98055d)

![image](https://github.com/user-attachments/assets/cc77390b-5d52-4939-a608-792b983c0652)

   1. load A, X
       * 연산 코드 001은 레지스터 A에 로드하라는 명령을 지정해 주는 비트
       * 오퍼랜드 01010은 로드될 데이터가 저장되어 있는 메모리의 주소
       * 2진수 01010은 10진수 10이므로 오퍼랜드가 10번지를 가리키고 있음
     
   2. add A, Y
       * 연산 코드 011은 더해서 레지스터 A에 로드하라는 명령을 지정해 주는 비트
       * 오퍼랜드 01011(=10진수로 11)은 더할 데이터가 저장되어 있는 메모리 주소
  3. stor Z, A
       * 연산 코드 010은 레지스터 A의 내용을 저장하라는 명령을 지정해 주는 비트
       * 오퍼랜드 01100(=10진수로 12)은 저장할 메모리의 주소
    
#### 프로그램과 데이터가 주기억 장치에 저장되어 있는 형태

![image](https://github.com/user-attachments/assets/17b58b30-3209-44a6-bd62-f1853b12d0b6)

* 중앙 처리 장치는 주기억 장치에 저장되어 있는 기계어 프로그램을 순차적으로 읽음
* 읽혀진 기계어 중에서 앞의 3비트를 이용해 명령의 종류를 해독하는 기능은 중앙 처리 장치 내부의 제어 장치에서 수행
* LOAD, STOR동작은 제어 장치에서 이에 필요한 제어 신호들을 발생시켜 수행하고, 덧셈은 산술 논리 연산 장치에서 수행

* 명령어와 데이터는 지정된 기억 장소에 저장
* 워드 단위로 저장 워드는 CPU에 의해 한 번에 처리될 수 있는 비트들의 그룹(8, 16, 32, 64비트)

4. 컴퓨터 시스템의 계층 레벨

![image](https://github.com/user-attachments/assets/c303f79f-aa6f-4fac-af47-04c593db3185)

* 레벨 6: 사용자 레벨이며 응용 프로그램으로 구성된다. 이 레벨에서 사용자들은 워드 프로세서, 그래픽 패키지, 게임 등과 같은 프로그램을 동작시킨다.
* 레벨 5: C/C++, JAVA, FORTRAN같은 고급 언어로 구성되어 있다. 고급 언어->어셈블리어->기계어 순으로 번역된다.
* 레벨 4: 어셈블리어를 포함한다. 어셈블리어 명령어 1개가 정확히 기계어 명령어 1개로 변환된다.
* 레벨 3: 시스템 소프트웨어 레벨로 운영체제와 라이브러리들로 구성된다. 이 레벨은 다중 프로그래밍, 메모리 할당, 프로세스 관리와 기타 중요 기능을 담당한다.
* 레벨 2: 명령어 세트 아키텍처(ISA, Instruction Set Architecture) 레벨인 컴퓨터 시스템의 특정 구조에 의해 인식되는 기계어로 구성되어 있다.
* 레벨 1: 제어 레벨로 제어 장치가 명령어들을 해독(decode)하고 실행하며, 데이터들을 이용할 시간과 장소들을 결정한다. 제어 장치는 상위의 레벨 2에서 기계어 명령어를 한 번에 하나씩 읽어서 필요한 동작을 수행하기 위한 신호들을 발생시킨다. 제어 장치는 하드와이어 방식과 마이크로 프로그램 방식 중 하나로 구현할 수 있다.

---

