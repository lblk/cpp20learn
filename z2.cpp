#include "typeDump.h"
#include "returnType.h"

struct aaa{
	int operator() (int);
	double operator() (double);
};
int main()
{
	using T1 = GetFuncRetValTypeByArgs<aaa,int>;
	typeDump<T1>();
	return 0;
}
