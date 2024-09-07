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
