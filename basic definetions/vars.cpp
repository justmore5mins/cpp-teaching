int thing = 3; //定義整數
float thing = 3.00; //定義小數
bool thing = true; //定義布林值

//定義常數
const int thing = 3; //定義整數
const float thing = 3.00; //定義小數
const bool thing = true; //定義布林值
const char* thing = "h"; //定義字元
//基本上就是在前面加上const

//如果很懶惰的話可以用以下方式：
#define thing "thing"
/*
#define: 宣告資料型別
thing 名稱，可以自定義
"thing" 資料內容，可以為任何型態

註：如果是串列的話還是要乖乖寫名稱比較好
*/