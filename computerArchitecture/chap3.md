![chap3_240924_094020_0](https://github.com/user-attachments/assets/0025b734-8bae-4515-952d-385d0f1885ca)
![chap3_240924_094020_1](https://github.com/user-attachments/assets/a537d6bf-bf0e-4247-b9f8-db8ad87cbca6)
![chap3_240924_094020_2](https://github.com/user-attachments/assets/c46155ac-d2e1-444a-9e55-98a47930b875)
![chap3_240924_094020_3](https://github.com/user-attachments/assets/210d14de-a4eb-4b1f-ab63-f1c74dd86bb4)
![chap3_240924_094020_4](https://github.com/user-attachments/assets/a1153b33-f783-4903-878e-cb275e709318)
![chap3_240924_094020_5](https://github.com/user-attachments/assets/16856f64-6796-4c5c-bc81-aa64e7a1a32a)
![chap3_240924_094020_6](https://github.com/user-attachments/assets/262dd98c-0fab-48e2-bdc1-86c99b9d8f63)
![chap3_240924_094020_7](https://github.com/user-attachments/assets/1ce17201-b780-41f6-9f54-dc7c17ed872e)
![chap3_240924_094020_8](https://github.com/user-attachments/assets/da6ac6ac-b8a5-4e70-8b7f-4da24c38e9d9)
![chap3_240924_094020_9](https://github.com/user-attachments/assets/6d5cfb3d-49a6-45d3-be74-2700396255af)
![chap3_240924_094020_10](https://github.com/user-attachments/assets/b852b870-b14c-4348-bcbb-d4615b827b23)
![chap3_240924_094020_11](https://github.com/user-attachments/assets/929d5b09-a4a0-4232-b911-600783deb508)

## 3-3. 조합 논리 회로

### 1. 데이터 형태에 따른 분류
#### 조합 논리 회로의 개요
* 조합 논리회로는 현재 입력 값으로 출력값이 결정되는 회로

![image](https://github.com/user-attachments/assets/c2690bad-5764-4e43-a234-70d267a4dc29)

### 2. 조합 논리 회로의 종류
#### 반가산기
* 반가산기(half adder)는 1자리 2진수 2개를 입력하여 합(S)과 캐리(C)를 출력하는 조합 논리 회로

![image](https://github.com/user-attachments/assets/c63d0a35-8096-46a1-8ba0-bc6c52bb2603)

#### 전가산기
* 전가산기(Full Adder)는 2진수 입력 A, B와 아랫자리에서 올라온 캐리Ci를 포함하여 1자리 2진수 3개를 더하는 조합논리회로

![image](https://github.com/user-attachments/assets/bb9f5adc-f7d2-4df4-95f8-4792c861784d)

#### 반감산기

* 반감산기(Half Subtractor)는 1자리 2진수 A에서 B를 빼 차(D)와 빌림수(K)를 계산하는 조합논리회로

![image](https://github.com/user-attachments/assets/3ad78d42-3d85-45dc-863f-dac22ba12da3)

* 전감산기(Full Subtractor)는 2진수 입력 A, B와 아랫자리로 빌려주는 수 Ki를 포함하여 A-B-Ki를 계산하는 조합논리회로

![image](https://github.com/user-attachments/assets/1d8b0587-0966-4cc9-87f2-1c206f0b6e7f)

![image](https://github.com/user-attachments/assets/690a87d5-0194-4edb-8697-5de42766a1c1)

#### 병렬 가감산기
* 병렬 가산기(parallel-adder): 전가산기 여려개를 병렬로 연결하여 만든 2비트 이상의 가산기

![image](https://github.com/user-attachments/assets/d6821eec-7457-4715-9de7-a8c6568b3ac2)

* 캐리 예측 가산기(carray lookahead adder): 병렬 가산기는 속도가 매우 느리다. 그 원인은 아랫 단에서 윗단으로 전달되는 캐리 때문이다. 비트가 늘어날수록 지연이 더욱 심해진다. 이를 해결하기 위해 캐리 예측 가산기를 사용한다.

* 병렬 가감산기(parallel-adder/subtractor): 병렬 가산기의 B입력을 부호(S(sign))와 XOR하여 전가산기의 입력으로 사용함으로써 덧셈과 뺄셈이 모두 가능한 회로

![image](https://github.com/user-attachments/assets/c7374c03-18b6-420e-bb2e-95e98579fa42)

#### 비교기
* 2진 비교기(comparator)는 두 2진수 값의 크기를 비교하는 회로

![image](https://github.com/user-attachments/assets/e38d0651-20fc-41b1-b3d4-54332ab22c45)

#### 디코더
* 디코더(decoder): 입력선에 나타나는 n비트의 2진 코드를 최대 2^n개의 서로 다른 정보로 바꿔주는 조합 논리 회로

![image](https://github.com/user-attachments/assets/58706cf2-ca94-4da5-b248-4e53752c813d)

#### 실제 디코더 회로
* 실제 IC들은 AND게이트가 아닌 NAND게이트로 구성되어 출력은 그림과 같이 반대로 된다.
* 또 대부분의 디코더 IC는 인에이블(enable)입력이 있어 회로를 제어한다.

![image](https://github.com/user-attachments/assets/210c75a3-6591-41ce-897e-f270421b828f)

#### 3\*8 디코더
* 3개의 입력에 따라서 8개의 출력 중 하나가 선택

![image](https://github.com/user-attachments/assets/c68139f4-f073-4fe1-b91f-62f245695298)

#### 2개의 3\*8 디코더로 4\*16 디코더를 구성
![image](https://github.com/user-attachments/assets/38799163-635a-4abd-b4b6-69e2befc50b0)

* D=0: 상위 디코더만 enable되어 출력은 y0\~y7중의 하나가 1로 되고, 하위 디코더 출력들은 모두 0이 된다.
* D=1: 하위 디코더만 enable되어 출력은 y8\~y15중의 하나가 1로 되고, 상위 디코더 출력들은 모두 0이 된다.

#### 인코더
* 부호기라고도 하는 인코더(encoder)는 디코더의 반대 기능을 수행하는 조합 논리 회로로, 2^n개를 입력받아 n개를 출력한다.
* 인코더는 2^n개 중 활성화된 1비트 입력 신호를 받아 그 숫자에 해당하는 n비트 2진 정보를 출력한다.

![image](https://github.com/user-attachments/assets/db3ef714-c8bd-4d32-8c61-21506d13b04b)

#### 8\*3 인코더
* 8(=2^3)개의 입력과 3개의 출력을 가지며, 입력의 신호에 따라 3개의 2진 조합으로 출력한다.

![image](https://github.com/user-attachments/assets/4c3d6a91-1335-465e-9033-d73bddd26076)

#### 멀티플렉서
* 멀티플렉서(multiplexer, MUX)는 여러 개의 입력선들 중에서 하나를 선택하여 출력선에 연결하는 조합 논리 회로다.
* 멀티플렉서는 많은 입력들 중 하나를 선택하여 선택된 입력선의 2진 정보를 출력선에 넘겨주기 때문에 데이터 선택기(Data Selector)라 부르기도 한다.
* 디멀티플렉서(demultiplexer, DEMUX)는 정보를 한 선으로 받아 2^n개의 가능한 출력선들 중 하나를 선택하여, 받은 정보를 전송하는 회로다.

![image](https://github.com/user-attachments/assets/1c354fbc-1baf-4b16-a160-66aaf4317091)

#### 2\*1 멀티플렉서
* 2(=2^1)개의 입력중의 하나를 선택선 S에 입력된 값에 따라서 출력으로 보내주는 조합 회로

![image](https://github.com/user-attachments/assets/6918a464-573f-4384-aaed-08bbc3893fa5)

#### 4\*1 멀티플렉서
* 4(=2^2)개의 입력중의 하나를 선택선 S1과 S0에 입력된 값에 따라서 출력으로 보내주는 조합 회로

![image](https://github.com/user-attachments/assets/38937661-6677-4c05-9096-b575e4b02a9f)

#### 4\*1 멀티플렉서 응용
* 4\*1 멀티플렉서를 이용하여 두 입력 A, B에 대해 AND, OR, NOT, XOR 논리연산을 수행하는 하드웨어 모듈

![image](https://github.com/user-attachments/assets/ad9e05d9-308a-4035-af22-ad0ad793c429)

#### 멀티플렉서를 이용한 조합 회로 구현
* $F(A, B, C)=\sum m(0, 1, 5, 7)$을 8\*1 멀티플렉서로 구현하는 경우
* ->3개의 선택선을 입력 A, B, C로 사용

![image](https://github.com/user-attachments/assets/ff8359db-2148-4e6e-806e-962b136b8891)

* $F(A, B, C)=\sum m(0, 1, 5, 7)$를 4\*1 멀티플렉서로 구현하는 경우
* -> A, B는 선택선으로 D0, D1, D2, D3을 조합하여 사용

![image](https://github.com/user-attachments/assets/c34ea5f3-fd0c-40ad-bafd-4e0b694e118e)

#### 디멀티플렉서
* 디멀티플렉서는 하나의 입력선에 데이터를 입력하면 선택선 n개로 2n개중 하나를 출력하는 조합 논리 회로다. 데이터 분배기라고도 한다.
* 1\*4 디멀티플렉서는 선택선(S1, S0) 2개로 출력(D3, D2, D1, D0) 4개 중 하나를 선택해 입력(I)을 연결한다.

![image](https://github.com/user-attachments/assets/b6c972cc-00e0-4907-b9ea-c3229f31bea9)

![image](https://github.com/user-attachments/assets/82cff44a-ca54-486b-bd5f-1b3fa5c6199c)

![image](https://github.com/user-attachments/assets/c6d90131-bf9f-49f1-b17d-3f321aaf7baa)

![image](https://github.com/user-attachments/assets/36f763da-2f02-48d4-bda3-c762e7b75ac3)

![image](https://github.com/user-attachments/assets/4cd76661-7513-4d98-b059-494f0e223a04)

![image](https://github.com/user-attachments/assets/32d05559-e48f-4967-b686-8644cd2d4a79)

![image](https://github.com/user-attachments/assets/f0f9efa4-1d92-400c-a90c-00f93a68d6ee)

![image](https://github.com/user-attachments/assets/89877268-2973-455f-bf12-141f3581eec7)
