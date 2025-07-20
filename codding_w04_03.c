 #include <stdio.h>

 int main(){
    char nameInitial = 'J';/// charใช้กำหนดค่าตัวอักษร
    int age = 19;///intใช้กำหนดเลขอายุ
    float weight = 80.0;///floatใช้กำหนดเลขน้ำหนักที่มีทศนิยม
    char gender [] = "Female";///charใช้กำหนดตัวแปรเพศ
    printf("nameInitial: %c\n", nameInitial);///%cใช้ประกาศตัวแปรที่เป็นตัวอักษรเดียว
    printf("Age: %d\n", age);///%dใช้ประกาศตัวแปรที่เป็นเลขจันวนเต็ม
    printf("weight: %.1f kg\n", weight);///%.1fใช้ประกาศตัวแปรที่ตัวเลขเป็นทศนิยม
    printf("Gender: %s\n", gender);///%sใช้ประกาศตัวแปรที่เป็นข้อความ

    return 0;
 }
