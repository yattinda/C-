#include <iostream>
#include <ctime>

using namespace std;

/*オブジェクト作成から破棄までの時間測定
デストラクタが呼び出されると経過時間が表示*/
class timer {
  clock_t start;

public:
  timer();//constructor
  ~timer();//destructor
};

timer::timer(){
  start = clock();
  cout << "計測開始 (コンストラクタ呼び出し)" << endl;
  cout << "start is " << start << endl;
}

timer::~timer(){
  clock_t end;
  end = clock();
  cout << "計測終了 (デストラクタ呼び出し)" << endl;
  cout << "end is " << end << endl;
  cout << "CLOCKS_PER_SEC is " << CLOCKS_PER_SEC << endl;
  cout << "経過時間 " << (end - start) / CLOCKS_PER_SEC << endl;
}

/*ctimeのclock()は、プログラムが処理を行った時間を返します。
cin で入力を待っている間は、OSに処理を任せているのでプログラム自身は処理を行っていません。*/
int main(){
  timer object;
  char enter;

  cout << "Press Enter to stop" << endl;
  cin >> enter;
  cout << "#################################" << endl;
  return 0;
}

//コンストラクタに戻り値型は指定できない
//コンストラクタには引数も渡せる
