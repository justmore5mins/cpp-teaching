#include "Using h file.h" //引用剛剛的標頭檔


//資料型別 原類別::韓式內容
float basicmathoperate::add(float a, float b){
    return a+b; //韓式內容
}

float basicmathoperate::minus(float a, float b){
    return a-b;
}

float basicmathoperate::times(float a, float b){
    return a*b;
}

float basicmathoperate::divide(float a, float b){
    if(b < 0){
        throw "DivideByZeroError: do you know can't divide by 0?";
    }
    else{
        return a/b;
    }
}