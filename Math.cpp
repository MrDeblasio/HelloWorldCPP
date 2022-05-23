#include "Math.h"

template <typename T>
T Math::Calculate(T x, MathOperations o, T y)
{
	switch (o)
	{
	case Add:
		return x + y;
		break;
	case Subtract:
		return x - y;
		break;
	case Multiply:
		return x * y;
		break;
	case Divide:
		return x / y;
		break;
	case Modulus:
		return x % y;
		break;
	default:
		return 0;
		break;
	}
	return 0;
}