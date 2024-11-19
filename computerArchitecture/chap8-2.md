## 8.2 반도체 기억장치

### 종류와 특성
![image](https://github.com/user-attachments/assets/47618189-9099-47a1-909a-0ad026de8540)

* RAM은 SRAM과 DRAM으로 구분할 수 있다. 이 차이는 한 비트의 정보를 저장하는 이진 셀에 기인한다.
  * SRAM의 이진 셀은 플립플롭으로 만들어져 있어 전기가 공급되는 한 안정적으로 동작한다.
  * 즉, SARM은 한 번 값을 저장하면 다음에 변경할 때까지 그 값이 변하지 않는다.
  * DRAM의 이진 셀은 크기가 작은 커패시터로 만들어져 있기 때문에, 한 번 충전해 놓은 전하가 시간이 지나면 방전된다는 단점이 있다.
  * 즉, DRAM은 시간이 지나면 값을 잃어버린다.

 ![image](https://github.com/user-attachments/assets/9b7a3947-4d16-440b-bcb2-c7111cf0e896)

### 반도체 기억장치 구조
![image](https://github.com/user-attachments/assets/f318956f-f4a2-4103-bd0b-1ad9d36081f3)

* 반도체 기억장치 소자는 이진 셀의 소재와 동작 원리에 따라 내부 구조와 외부 인터페이스가 결정된다.
* RAM, ROM, PROM, EPROM, NOR플래시는 주기억장치로 사용할 수 있지만 EEPROM과 NAND Flash는 주기억장치로 활용할 수 없는 구조를 갖고 있다.

### SRAM
![image](https://github.com/user-attachments/assets/692d0f85-b7f4-45df-86ae-0d1694c340c3)

* 외부 인터페이스는 그림 9-4와 같이 n비트 주소와 k비트 데이터, 그리고 읽기(RD)와 쓰기(WR), 칩 선택(CS, chip selector 또는 CE, chip enable) 제어신호를 제공한다.
* 주소 비트 수 n은 기억장치 용량을 결정한다.
* 일반적으로 데이터 비트 수는 k는 8이다.
* CS는 칩 전체의 동작을 제어한다.
* CS=0일 때, SRAM은 동작하지 않고 데이터 버스는 논리적으로 내부와 끊어져 있는 상태이다.
* CS=1이고 RD=1, WD=0이면, 읽기 동작을 수행한다.
* CS=1이고 RD=0, WD=1이면, 쓰기 동작을 수행한다.

* 그림 9-5는 간단하게 표현한 SRAM 내부 구조이다.
  * 데이터 셀은 일차원 배열로 배치되어 있고, 각각 고유 주소를 갖는다.
  * 주소선은 디코더로 입력되어 데이터 셀을 선택하는 신호를 생성한다.
  * CS는 디코더 동작뿐만 아니라 데이터 출력 여부도 제어한다.
  * 선택된 데이터 셀은 RD와 WD 제어신호의 값에 따라 외부로 데이터를 출력하거나 외부에서 데이터를 기록한다.
  * SRAM용량은 (데이터 셀 수 \* 비트 수)로 표현된다.
  * 예를 들어, n=20, k=8인 SRAM 용량은 2^20\*8=8M 비트이다.
 
### DRAM
![image](https://github.com/user-attachments/assets/189f218d-cd44-4962-a15f-96832b10050d)
* DRAM은 SRAM의 제어 신호 이외의 그림 9-6a와 같이 RAS(Row Address Strobe)와 CAS(Column Address Strobe) 제어 신호를 더 갖고 있다.
* 그림 9-6b는 읽기, 쓰기, 칩 선택 제어 신호를 생략한 DRAM 내부 구조이다.
* SRAM과 다르게 데이터 셀이 바둑판과 같이 2차원 배열 형태이다.

### Mask ROM, PROM, EPROM
![image](https://github.com/user-attachments/assets/6613bcb3-56dd-4995-bb4d-6f7c96a713e9)

* Mask ROM, PROM, EPROM은 외부 인터페이스가 모두 그림 9-7과 같다.
* 다만 마스크ROM은 프로그램이 불가능하기 때문에 외부에 PGM(Program)제어신호가 없다.
  * PGM: PROM과 EPROM을 프로그램 하는데 사용되는 제어신호
* 이것들은 그림 9-5의 SRAM과 같은 일차원 배열 구조를 갖고 있다.

### EEPROM
![image](https://github.com/user-attachments/assets/6e6ced23-d62c-40b0-960c-ad8cbbadfb7e)

* EEPROM은 EPROM과 다르게 전기 신호를 인가하여 블록 단위로 지울 수 있다.
* 직렬 버스
  * SPI(Serial Peripheral Interface Bus)
  * I2C(Inter-Integrated Circuit)
* 통신 속도가 느림
* 환경 변수 설정용

### NOR 플래시
![image](https://github.com/user-attachments/assets/921ceb37-733c-4049-a892-1d11a9d236c6)

* 외부에서 볼때는 ROM인터페이스가 같으나 내부 구조는 다르다(읽기 방식은 ROM방식)
* 쓰기, 지우기: 특수 명령
  * NOR플래시는 칩 전체 지우기, 블록 단위 지우기, 블록 단위 프로그램 기능을 제공한다.
  * 외부에서 명령을 인가하면 그림 9-9b의 삭제/프로그램 제어부가 데이터 블록을 지우거나 프로그램 하는 과정을 제어한다.
 
### NAND 플래시
![image](https://github.com/user-attachments/assets/80c10a1e-9c14-4dc4-84f4-76aaf4a9ccd1)

* 입출력 방식: 사용자는 I/O선을 통하여 주소, 데이터, 명령을 제공
* 블록 읽기, 지우기, 페이지 프로그램 등과 같은 명령 제공

## 8.3 기억장치 모듈 설계
* 여러 개의 기억소자를 사용하여 비트 폭과 용량을 확장하는 방법

### 기억장치 비트 폭 확장
![image](https://github.com/user-attachments/assets/75895f6b-17d0-49fe-9fa1-2af5ebd20d59)

* 1M\*8 비트인SRAM은 그림 9-11a와 같이 주소는 20비트이고, 데이터는 8비트이다.
* 1M\*32비트의 기억장치 모듈은 그림 9-11b와 같이 주소는 20비트이고, 데이터는 32비트이다.
* 따라서 데이터 폭이 32비트인 기억장치 모듈을 구성하려면, 1M\*8비트 SRAM 4개가 필요하다.
* 그림 9-11c는 네 개의 SRAM을 병렬로 연결하여 1M\*32비트의 기억장치 모듈을 구현한 회로이다.
  * 20비트 주소 A_19:A_0를 SRAM 주소로 공통 연결한다.
  * 각 SRAM이 제공하는 8비트 데이터를 합쳐 1M\*32비트 모듈의 데이터로 사용한다. SRAM0은 D7:D0를 공급하고, SRAM1은 D15:D8을 공급하고, SRAM2는 D23:D16을 공급하고 SRAM3은 D31:D24를 공급한다.
  * RD, WR, CS 제어신호를 모두 공통으로 연결한다. 그림 9-11c에 이 신호들이 칩을 통과하는 것처럼 그렸지만, 공통으로 연결한 것을 간단하게 표현한 것이다.
 
### 기억장치 용량 확장
![image](https://github.com/user-attachments/assets/6d7aab6c-5fdf-4ff9-b323-52a9b82151e1)

* 제어신호 RD와 WR은 모든 칩에 공통으로 연결한다. 내부 SRAM의 데이터를 다음과 같이 연결한다.
  * SRAM03, SRAM02, SRAM01, SRAM00의 8비트 데이터선을 공통으로 연결하여 4M\*16비트 기억장치 모듈의 데이터 D7:D0로 사용한다.
  * SRAM13, SRAM12, SRAM11, SRAM10의 8비트 데이터선을 공통으로 연결하여 4M\*16비트 기억장치 모듈의 데이터 D15:D8로 사용한다.
  * D15:D8와 D7:D0가 모여 전체 16비트 데이터선을 형성한다.
* 4M\*16비트의 기억장치 모듈의 외부에서 인가되는 22비트 주소는 SRAM주소 비트 수보다 2비트 더 많다. 주소를 처리하는 방법은 다음과 같다.
  * 22비트 주소 중에 하위 20비트 A19:A0를 8개의 SRAM에 공통으로 연결한다.
  * 22비트 주소 중에 상위 2비트 A21:A20를 2\*4 디코더 입력으로 연결한다.
  * 외부에서 인가되는 CS
