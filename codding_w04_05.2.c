#include <stdio.h>

void countCall(){ 
     int counter = 0;
   counter++;
   printf("Call Function: Counter = %d\n", counter);
}

int main(){
    printf("Starting function calls...\n");
    countCall();
    printf("After frist call:\n");
    countCall();
    return 0;

}
///ตัวแปร counter ไม่ถูกประกาศเป็น staticจึงทำให้ค่าcounter จึงทำให้ถูกกำหนดเป็นค่า0 ทุกครั้งที่ถูกเรียก จึงเป็นผลลัพธ์ตามนี้