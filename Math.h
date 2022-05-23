#pragma once

enum MathOperations
{
	Add = 1,
	Subtract,
	Multiply,
	Divide,
	Modulus
};

class Math
{

public:

	template <typename T>
	static T Calculate(T x, MathOperations o, T y);

};