#include "veñLazyEval.h"
#include <vector>

template <class T_ProxyVec, class T_Vec>
proxyVec<T_ProxyVec,T_Vec>  operator+(T_Vec b)
{
	return proxyVec(a,b,1);
}