# 2. 데이터의 표현
## 2.1. 진법과 진법 변환
### 1. 디지털 정보의 단위
* 1 nibble=4bit
* 1byte=8bit
* ibyte=1문자(character)
* 영어는 1바이트로 1문자 표현, 한글은 2바이트 필요
* 1워드: 특정 CPU에서 취급하는 명령어나 데이터의 길이에 해당하는 비트 수
* 위드 길이는 8, 16, 32, 64비트 등 8의 배수가 가능하다.

![image](https://github.com/user-attachments/assets/9908a58f-606b-40fe-8fe0-9e6a2b0fe493)

![image](https://github.com/user-attachments/assets/79a5b5ec-ee27-48a1-bfe0-a07873b59a87)

### 2. 진법
#### 10진법
* 10진수: 기수가 10인 수
* 0~9의 10개의 수로 표현

![image](https://github.com/user-attachments/assets/a8b5de6c-8d94-4681-bbfb-d1052536e81d)

#### 2진법
* 기수가 2인 수
* 0, 1 두 개의 수로 표현

![image](https://github.com/user-attachments/assets/9d45d35a-c321-459e-9fba-6d9da496e131)

#### 8진법
* 0~7까지 8개의 수로 표현

![image](https://github.com/user-attachments/assets/80cd04ae-c380-4461-a835-febd4e38526a)

#### 16진법
* 0~9, A~F까지 16개의 기호로 표현

![image](https://github.com/user-attachments/assets/a8f2222a-e7de-420d-bb36-3b485189c678)



* 8진수보다는 16진수를 사용하는 경우가 더 많은데 실제로 컴퓨터 구조나 어셈블리어에서는 16진수를 많이 쓴다.

![image](https://github.com/user-attachments/assets/344d0a27-1eae-4727-b96a-246c1f1e1d7a)

![image](https://github.com/user-attachments/assets/587005ad-4ac3-4f8d-ab9d-f9a51e6f7bce)

### 10진수 - 2진수 변환
* 정수부분과 소수부분으로 나누어 변환
* 정수부분은 2로 나누고, 소수부분은 2를 곱한다.
* 10진수 75.6875를 2진수로 변환한 예

![image](https://github.com/user-attachments/assets/627d013d-777e-4100-8562-5df172990108)

### 10진수 - 8진수 변환
* 10진수 75.6875를 8진수로 변환
* 8로 나누고, 곱한다.

![image](https://github.com/user-attachments/assets/7aa0d5aa-8efd-4b0a-94a4-a8c49eea1255)

### 10진수 - 16진수 변환
* 16으로 나누고, 곱한다.

![image](https://github.com/user-attachments/assets/132e490e-a1f1-4ff6-9017-e735e0d99066)

![image](https://github.com/user-attachments/assets/7a6e1be3-3cc5-47eb-b3db-e69c8f913fb1)

#### 10진수를 8진수, 16진수로 변환하는 예

![image](https://github.com/user-attachments/assets/2a7ba578-932a-4aba-9f97-bac713cb5868)

#### 8진수와 16진수를 2진수로 변환한 예

![image](https://github.com/user-attachments/assets/6d58307f-0b5c-410f-a00b-f6a7ed3d0655)

---

## 2.2. 정수 표현
### 1. 보수의 개념과 음수
#### 최상위비트(MSB)를 부호 비트로 사용
* 양수(+): 0, 음수(-): 1

#### 2진수 음수를 표시하는 방법
* 부호의 절댓값
* 1의 보수
* 2의 보수

#### 부호의 절댓값
* 부호비트만 양수와 음수를 나타내고 나머지 비트들은 같다.

![image](https://github.com/user-attachments/assets/3e71fcf8-ed83-41b0-99fc-e321cd65fda9)

#### 1의 보수방식
* 0->1, 1->0으로 변환

![image](https://github.com/user-attachments/assets/b5773bcb-673a-4ba9-a934-39f7886ff6ff)

#### 2의 보수 방식
* 1의 보수+1 = 2의 보수

![image](https://github.com/user-attachments/assets/5576fb2b-eb6c-4e0b-ab4c-33012d7fe748)

![image](https://github.com/user-attachments/assets/c8d53498-e1ed-4e80-9c4e-78486c2d9f0c)

#### r진수에는 r의 보수와 r-1의 보수가 있다.
* 10진수에는 9의 보수와 10의 보수가 있고, 8진수에는 7의 보수와 8의 보수가 있으며, 2진수에는 1의 보수와 2의 보수가 있다.

![image](https://github.com/user-attachments/assets/6240da26-0137-4418-9f6f-8811d133cab3)

![image](https://github.com/user-attachments/assets/23c0fa73-33d4-4b39-ac91-400303d77de9)

* 2진수와 그 수의 1의 보수와의 합은 모든 비트가 1이 된다.
* 2진수와 그 수의 2의 보수와의 합은 모든 비트가 0이 된다(자릿수를 벗어나는 비트는 제외).

![image](https://github.com/user-attachments/assets/c2099892-baa9-4f89-a0f9-782723097d3c)

#### 2의 보수를 10진수로 변환

![image](https://github.com/user-attachments/assets/2c9b23cc-e647-40d3-a022-baa146e59cbc)

### 2. 부호 확장
* 부호 확장이란 늘어난 비트 수 만큼 부호를 늘려주는 방법

![image](https://github.com/user-attachments/assets/14647df8-2a34-4d45-b434-b61b627cd37d)

### 3. 2진 정수 연산
* 뺄셈의 원리를 보면, A-B 대신의 A+(B의 2의 보수)를 계산하면 된다.
* 뺄셈에서 2의 보수 방식을 사용하는 이유는 뺄셈을 가산기를 사용하여 수행할 수 있다.

![image](https://github.com/user-attachments/assets/5c5501fa-5bb0-49e0-bc5a-6197a4af3008)

### 4. 팩 10진 형식
* 디지트 digit 2개를 8421코드로 나타내고 최하위 바이트의 존 부분에 4비트의 부호를 표현한다.
* 부호는 양수(+)는 C(1100), 음수는 D(1101), 부호가 없는 양수는 F(1111)로 표현된다.

![image](https://github.com/user-attachments/assets/12621fb6-1753-48c7-864a-18b9e7dacb5c)

### 5. 언팩 10진 형식
* 1바이트가 존 부분과 디지트 부분으로 구성되어 있다.
* 존 부분에는 F(1111)가 들어가고, 디지트 부분에는 8421코드로 표현된 숫자가 들어간다.
* 하위 바이트의 존 부분에 부호가 들어가며 양수(+)는 C(1100), 음수(-)는 D(1101), 부호가 없는 양수는 F(1111)로 표현한다.

![image](https://github.com/user-attachments/assets/acf48a17-27a5-47d0-8dcd-2cd85aa886b7)

---

## 2-3. 실수 표현
* 컴퓨터의 부동소수점수는 IEEE754 표준을 따른다.
* 부호(sign), 지수(exponent), 가수(mantissa)의 세 영역으로 표시
* 부호(S)가 0일때는 양수를 나타내고, 1일 때는 음수를 나타낸다.
* 단정도(single precision) 부동소수점과 배정도(double precision) 부동소수점수의 두 가지 표현방법이 있다.

![image](https://github.com/user-attachments/assets/b6889871-4d9e-4d13-bc28-7af1e27834ae)

