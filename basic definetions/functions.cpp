#include <iostream>
#include <string>
using namespace std;
//以上都不需要管(之後會有講解)

/*
定義方式： 資料型別 名稱(輸入值（非必須）){
    程式內容
}
*/

int thing(int a, int b){
    return a+b;
};
//整數型別 

float thong(float a, float b){
    return a+b;
};
//小數型別

bool thang(float a, float b){
    if(a > b){
        return true;
    }
    else{
        return false;
    }
};

//其他以此類推