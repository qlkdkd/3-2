## 7.4. 오퍼랜드 저장
* 오퍼랜드(동작의 대상)의 두 가지 의미
  * 명령어 형식에서 동작의 대상을 표현하는 필드
  * 동작 코드가 실제로 처리하는 유효 데이터
 
### 데이터 정렬
* 기억장치 구성
  * 기억 장치: 바이트 단위 주소 지정
  * 단어(word)는 n바이트에 분산
  * 단어는 Mem\[A+0\] \~ Mem\[A+(n-1)\]번지에 연속적으로 저장되어 있음
 
* 단어 크기에 정렬(word-size aligned)
  * n의 배수로 시작하는 주소에 배정
  * 단어가 배정된 시작 주소 A는 n의 배수(단, n=2^k)
 
* 단어 액세스 방법
  * 정렬된 n바이트 단어를 한 번에 액세스할 수 있다.
  * 정렬되지 않은 단어는 두 번에 걸쳐 읽은 후 조합해야 한다.
 
![image](https://github.com/user-attachments/assets/3a22fc24-6006-4298-9fbe-b50298b877a2)

### 바이트 순서
* 바이트 순서
  * 한 개의 단어가 한 바이트 이상의 기억장치 공간을 차지할 때
  * 단어를 구성하는 바이트를 주어진 공간에 배치하는 방법

![image](https://github.com/user-attachments/assets/78767a94-ff81-458d-a4e9-9d02909b0368)

* Little endian
  * 주소값이 작은 장소에 무게가 작은 수 저장
  * 예) Intel X86, ARM
 
* Big endian
  * 주소 값이 작은 장소에 무게가 큰 수 저장
  * 예) Motorola 68XXX, MIPS, 인터넷
 
![image](https://github.com/user-attachments/assets/adf67e62-8ba8-49b9-9b43-221270ccaca5)

## 7.5. 명령어 종류
* 데이터 전달 명령어: 레지스터와 기억장치 간 데이터 전달 명령어, 레지스터와 입출력 포트 간 입출력 명령어
* 데이터 처리 명령어: 산술 연산 명령어, 논리 연산 명령어, 데이터 변환 명령어
* 프로그램 제어 명령어: 상태 레지스터 조작 명령어, 분기 명령여, 서브루틴 호출과 복귀 명령어, 인터럽트 명령어
* 시스템 제어 명령어: 시스템 상태를 제어하는 명령

### 데이터 전달 명령어
* 적재: Reg<-Mem
* 저장: Mem<-Reg
* 이동: {Reg, Mem}<-{Reg, Mem}
* 교환: {Reg or Mem}<-{Reg or Mem}
* 스택: Push Reg, Pop Reg

![image](https://github.com/user-attachments/assets/58c979cb-7882-4c6e-ad3d-2f7b93be79b4)

### 입출력 명령어
* 입력: Reg<-I/O port
* 출력: I/O port<-Reg
* 일반적으로
  * 직접주소지정방식 또는 레지스터 간접 주소지정방식을 사옹한다.
  * 복잡한 주소지정방식을 사용하지 않는다.
 
### 산술 명령어
* 단항 연산 명령어
  * 절댓값
  * 음수
  * 증가
  * 감소
  * 제곱근
 
* 이항 연산 명령어
  * 사칙연산
 
* 데이터 형식: 부호 없는 수, 정수, 실수, BCD코드
* 데이터 크기: 8, 16, 32, 64비트

### 논리 연산 명령어
* 논리 이항 연산 명령어 AND, OR, XOR, NAND,NOR, XNOR
* 논리 단항 연산 명령어: NOT, Clear bit, Set bit, Shift(논리 시프트, 산술 시프트, 회전)

### 데이터 변환 명령어
* 데이터 형식 변환 명령어
  * BCD<->Binary
  * 비트 크기 변환: 8비트<->16비트<->32비트
  * 형식 변환: 정수<->단정도 실수<->배정도 실수
 
* 번역 명령어
  * 인덱싱 주소지정방식 활용
 
### 상태 레지스터 조작 명령어
* compare 명령어(비교): compare A, B //A-B
* Test 명령어: test A, B //A and B

* Set/reset carry flag 명령어
  * stc(set carry flag)
  * clc(clear carry flag)
 
* Set reset interrupt flag 명령어
  * sti(set interrupt flag)
  * cli(reset interrupt flag)
