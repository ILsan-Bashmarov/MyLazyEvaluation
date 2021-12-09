#pragma once

enum MyErrors
{
	SIZE_MISMATCH,
	DATATYPE_MISMATCH
};

template <class T_SmartPtr1, class T_SmartPtr2>
class proxyVec
{
	int mode = 0;		//0 <=> nothing; 1 <=> + ; 2 <=> * ;
	T_SmartPtr1 lptr;
	T_SmartPtr2 rptr;
public:

	proxyVec()
	{

	}

	proxyVec operator+()
	{

	}

	proxyVec operator*()
	{

	}

	proxyVec operator[](const int& i)
	{
		switch (mode)
		{
		case 1:
			return (lptr[i]) + (rptr[i]);
			break;
		case 2: 
			return (lptr[i]) * (rptr[i]);
		default:
			throw(-1);
			break;
		}
	}
};

