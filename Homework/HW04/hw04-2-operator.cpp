/*
    จงเติมโค้ดโปรแกรมตามที่แสดงในส่วนของ Placeholder เพื่อแสดงผลลัพธ์ของ Operator ด้านซ้ายมือ พร้อมทั้งแก้ไขโค้ดโปรแกรมให้ถูกต้อง
*/
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    printf( "Please enter values (a b): ") ;
    scanf( "%d %d", &a , &b) ;

    printf( "a = %d , b = %d \n" , a, b) ;
    printf( "a + b = %d \n" , a + b) ; //Show the sum of a and b.
    printf( "a - b = %d \n" , a - b) ; //Returns the result of subtracting b from a.
    printf( "a * b = %d \n" , a * b) ; //Displays the multiplication results of a and b.
    printf( "a / b = %d \n" , b > 0 ? a / b : 0) ; //Returns the result of dividing a and b by checking that b is greater than 0 before dividing. If b is 0, the result is 0.
    printf( "a %% b = %d \n" , a % b) ; //Shows the result of finding the remainder of dividing a and b.
    printf( "++a = %d \n" , ++a) ; //Returns the value of a after a is incremented by 1.
    printf( "a-- = %d \n" , a--) ; //Returns the value of a before a is decremented by 1.
    printf( "a += 1 %d \n" , a += 1) ; //: Returns the value of a after a is incremented by 1 using the += operator.
    printf( "a += b %d \n" , a += b) ; //Returns the value of a after a is incremented by the value of b.
    printf( "a -= 1 %d \n" , a -= 1) ; //Returns the value of a after a is reduced by 1 using the -= operator.
    printf( "a -= b %d \n" , a -= b) ; //Returns the value of a after a is reduced by the value of b.
    printf( "a *= 1 %d \n" , a *= 1) ; //Returns the value of a after a is multiplied by 1 using the *= operator.
    printf( "a *= b %d \n" , a *= b) ; //Returns the value of a after a is multiplied by the value of b.
    printf( "a %%= 1 %d \n" , a %= 1) ; //Returns the value of a after a is divided by 1 using the %= operator.
    printf( "a %%= b %d \n" , a %= b) ; //Returns the value of a after a is divided by the value of b.
    printf( "a && b %d \n" , a && b) ; //Returns the result of the AND (&&) logical operator between a and b.
    printf( "a || b %d \n" , a || b) ; //Returns the result of the OR (||) logical operator between a and b.

    return 0 ;
}
