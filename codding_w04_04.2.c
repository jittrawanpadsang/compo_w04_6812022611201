#include <stdio.h> 

int main(){
    int score = 90.5;
    printf("score:%d\n", score);
        return 0;
}
            
//ผลลัพธ์ที่ได้ต่างกันอย่างไร?ต่างตรงที่ถ้าใช้int scoreจะทำให้ผลลัพธ์เท่ากับ90 ถ้าใช้float scoreจะทำให้ผลลัพธ์เท่ากับ90.5

 // ทำไมต้องเลือกData Type ให้ถูกต้อง ? เพราะถ้าเลือกData Typeไม่ถูก จะทำให้ผลลัพธ์ที่แสดงออกมาไม่ตรงตามที่กำหนด

 //สรุปผลการทดลอง คือ การทดลองนี้ทำให้เห็นการใช้งานของData Type ที่แตกต่างกันและทำให้ผลลัพธ์ที่ได้ต่างกัน
//int จะใช้กับตัวแปรที่เป็ฯเลขจำนวนเต็มเท่านั้น และ float จะใช้กับตัวแปรเลขที่มีทศนิยม