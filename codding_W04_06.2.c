#include <stdio.h>

const int GLOBAL_RATE = 20;

void Calculate(){
    const int LOCAL_BONUS = 80;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n",LOCAL_BONUS);
}

int main(){
    Calculate();
    const int LOCAL_BONUS = 80;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
     return 0;
}
//เกิดอะไรขึ้นถ้าเราเขียนGLOBAL_RATE=20;หรือ LOCAL_BONUS=80; คำตอบคือ ค่าของทั้งสองจะเปลี่ยนไปในทางที่มากขึ้นแต่ไม่มีข้อผิดพลาดในการรันโค้ด

//ค่าคงที่GLOBALและLOCALต่างกันอย่างไร ตอบ ต่างกันตรงที่ GOBALจะสามารถเข้าถึงได้ทุกฟังก์ชั่นในโปรแกรม แต่LOCALจะสามมารถเข้าถึงได้เฉพาะในฟังก์ชัน calculateเท่านั้น