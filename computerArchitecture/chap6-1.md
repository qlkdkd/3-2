# 6. 연산기
## 6.1 연산기 개요
### 연산기 개요
* 연산의 종류
  * 단항 연산자: -(음수 만들기), 1의 보수(NOT), 왼쪽/오른쪽 시프트, 증가(++), 감소(--)
  * 이항 연산자: 사칙연산, 논리연산(and, or, xor), 비교(compare)
 
![image](https://github.com/user-attachments/assets/bcdb0787-bdcd-4338-a645-a780e4836f8e)

### 컴퓨터의 수
수의 형식|표현|연산 방법
---|---|---
부호 없는 수|수와 코드|논리연산, 논리시프트 연산|산술 연산
부호 있는 수(실수)|정수 표현|산술 시프트 연산, 산술 연산
실수|실수 표현|산술 연산

## 6.2 정수 표현
### 정수 표현
* 소수점이 없는 수
  * 부호 없는 수(0, 양수만)
  * 정수
* 정수 표현 방법
  * 부호화 크기
  * 보수
  * 2의 보수: 표준
 
### 부호화 크기
![image](https://github.com/user-attachments/assets/eaedaed3-d1c6-4dc4-9812-cb75ad7ebbb0)

* 부호 비트(sign bit): $S=a_{n-1}$
![image](https://github.com/user-attachments/assets/fc892dfc-c5b8-49e2-a105-629b41e4bda4)

* n비트 표현 범위: $-(2^{n-1}-1)~(2^{n-1}-1)$
* 특징
  * 0이 두개: 0000 0000, 1000 0000
  * 덧셈, 뺄셈할 때 부호를 별도로 고려해야 한다.

### 보수
* R진법의 수 N에 대한 보수(complement)
  * (R-1)의 보수: $N+C_{R-1}=R^n-1$
  * R의 보수: $N+C_R=R^n=10...0$
  * $C_R=C_{R-1}+1$
  * $R^n$=10...0(0이 n개)
 
![image](https://github.com/user-attachments/assets/dd821433-9c7e-4a87-889a-f904b42f8830)

### 2진수의 보수
* 1의 보수: 0<->1(NOT gate)
* 2의 보수: 1의보수+1
![image](https://github.com/user-attachments/assets/39e4bb00-6d40-47b9-96e1-43e44765c031)

![image](https://github.com/user-attachments/assets/32527abe-8491-4537-8108-81cecf9f4423)

### 표현 범위
![image](https://github.com/user-attachments/assets/eb5e1a40-77c4-4710-8b5f-c6c2040c88b8)

### 부호 확장
![image](https://github.com/user-attachments/assets/a1039e9e-b104-45ee-b7ff-db272094f139)

## 6.3 논리 연산
### 논리 연산
* 논리 연산: 데이터를 부호 없는 수(unsigned number)로 취급한다.
### NOT연산
* NOT연산
  * 오퍼랜드의 각 비트를 NOT
  * 명령어: NOT R// R<- R에 대한 1의 보수
 
![image](https://github.com/user-attachments/assets/aff80e9d-1257-42de-8ebd-b5679dbccace)

### AND연산
* AND연산
  * 비트 단위로 AND연산을 수행한다.
  * 명령어: AND R1, R2 // R1<- R1 AND R2
* 마스크(mask)연산
  * 특정 비트를 0으로 만든다.
  * R2의 값: 마스크 패턴

![image](https://github.com/user-attachments/assets/6cebd49b-109f-447e-a6f9-27cc796adf08)

### OR연산
* OR연산
  * 비트 단위로 OR연산을 수행한다.
  * 명령어: OR R1, R2 // R1<- R1 OR R2
* 선택적 세트(selective set) 연산
  * 특정 비트를 1로 만든다.
 
![image](https://github.com/user-attachments/assets/0f1601f8-8104-404f-bc40-1658d70517ab)

### XOR연산
* XOR연산
  * 비트 단위로 XOR연산을 수행한다.
  * 명령어: XOR R1, R2 // R1<- R1 XOR R2
* 선택적 보수 연산
  * 특정 비트를 보수로 만든다.
  * 자신에 대한 XOR연산 결과는 항상 0000 0000

![image](https://github.com/user-attachments/assets/c7e5c6c1-4c8c-42a7-943d-da9e5917f70b)

![image](https://github.com/user-attachments/assets/a0d4973b-82da-456a-a981-bbd641c1eb97)

### 체크섬
* 일련의 데이터에 대하여 XOR연산으로 만들어진 값
* 데이터 무결성 확인용
![image](https://github.com/user-attachments/assets/43fac591-7c45-4902-ba0b-e2406ada4203)
