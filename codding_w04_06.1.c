#include <stdio.h>

const int GLOBAL_RATE = 10;

void Calculate(){
    const int LOCAL_BONUS = 50;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n",LOCAL_BONUS);
}

int main(){
    Calculate();
    const int LOCAL_BONUS = 50;//สร้างขึ้นครั้งที่สอง
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);



    return 0;
}
//ผลลัพธ์ที่ได้ LOCAL_BONUSไม่สามารถเรียกใช้ใน main()ได้เพราะ LOCAL ที่สร้างขึ้นในฟังก์ชันแรกจะถูกทำลายเมื่อเรียกใช้แล้ว จึงต้องสร้างLOCALใหม่อีกครั้งในฟังก์ชันที่สอง