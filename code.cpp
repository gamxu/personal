#include <iostream>
using namespace std;

double areaCal(double a,double b,double r){ //สร้างฟังก์ชันคำนวณพท.
    double triArea, halfCircle;             //สร้างตัวแปรสำหรับเก็บผลลัพธ์จากการคำนวณ
    if((r*2)<b && r<a){                     //สร้างเงื่อนไขตามที่โจทย์ข้อ3สั่ง
        triArea = (a*b)/2;                  //สูตรพท.สามเหลี่ยม
        halfCircle = (3.14*r*r)/2;          //สูตรพท.ครึ่งวงกลม
    }else return 0;                         //กรณีคำนวณไม่ได้ให้ส่งผลลัพธ์ออกมาเป็น0
    return triArea-halfCircle;              //กรณีคำนวณได้ให้ส่งลัพธ์ออกมาเป็นพท.
}

int main(){
    double Data[3], result;                      //สร้างarrayเก็บข้อมูล กับ สร้างตัวแปรเก็บผลลัพธ์จากฟังก์ชันข้างบน
    char side='A';                               //สร้างตัวแปรที่จะให้บอกว่าต้องใส่ข้อมูลด้านไหน A B r
    for(int i=0;i<3;i++){                        //วนทำซ้ำๆ 3รอบ
        if(side=='C') side = 'r';                //กรณีshiftตัวแปรแล้วได้ C ให้ทำการเปลี่ยนตัวแปรนั้นเป็น r
        cout << "Input " << side << " length: "; //แสดงคำสั่งสำหรับกรอกความยาวด้าน
        cin >> Data[i];                          //นำความยาวด้านที่เรากรอกเข้าเก็บในArrayชื่อData
        side++;                                  //shiftตัวแปร จากA -> B จาก B -> C
    }
    result = areaCal(Data[0],Data[1],Data[2]);  //นำผลลัพธ์จากการคำนวณพท.มาเก็บในตัวแปร
    if(result==0) cout << "INPUT ERROR!!";      //เช็คว่าผลลัพธ์ว่ามีอยู่จริงมั้ย ถ้าข้อมูลที่ได้จากฟังก์ชันบอกว่าเป็น0หรือไม่มีจริง ให้พิมพ์บอกerror
    else cout << "Total area is " << result;    //ถ้าผลลัพธ์มีอยู่จริงก็ให้แสดงผลลัพธ์นั้นเลย
    return 0;                                   //อันนี้ใส่มากันติดwarningเฉยๆ
}

