#include "typeDump.h"
#include "returnType.h"
#include <iostream>
using namespace std;


/*
 * 现有returntype模板的困境：
 * 由于aaa没有默认构造函数，导致GetFuncRetValTypeByArgs不可用
 * 解决方法见z4
 */
struct aaa{
	aaa(int q) :a(q){};
	int a = 0;
public:
	int operator() (int);
	double operator() (double);
};
int main()
{
	aaa f();
	using T1 = GetFuncRetValTypeByArgs<aaa,double>;
	typeDump<T1>();
	cout<<"111"<<endl;
	return 0;
}
