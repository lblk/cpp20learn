#include "typeDump.h"
template <typename Func, typename...Args>
using GetFuncRetValTypeByArgs = decltype(Func{}(Args{}...));


struct aaa{
	int operator() (int);
	double operator() (double);
}f;
int main()
{
	using T1 = GetFuncRetValTypeByArgs<aaa,int>;
	auto aa = typeDump<T1>();
	return 0;
}
