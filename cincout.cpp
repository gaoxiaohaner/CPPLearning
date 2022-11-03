#include <iostream>
using namespace std;
int main()
{
	int a;
	// cin 其实应该是std::cin
	// cin、cout、endl 是 std空间中的函数名、因此使用cin等的时候必须有使用std命名空间的说明
	// 两种方法：直接调用std::cin  | 提前声明 using namespace std; 
	std::cin >> a; 
	std::cout << a << std::endl; // endl是换行

}
