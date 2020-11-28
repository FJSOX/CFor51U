#ifndef _H_
#define _H_

/// <summary>
/// 运算符判定和计算
/// </summary>
/// <param name="opr"></param>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
float Do(const char opr, float a,const float b)
{
	switch (opr)
	{
	case 0:
		break;
	case 42:
		a = a * b;
		break;
	case 43:
		a = a + b;
		break;
	case 45:
		a = a - b;
		break;
	case 47:
		a = a / b;
		break;
	default:
		break;
	}

	return a;
}

/// <summary>
/// 10的n次方
/// </summary>
/// <param name="cnt"></param>
/// <returns></returns>
float DepTen(int cnt)
{
	float f = 1.0;
	while (cnt!=0)
	{
		f = f * 0.1;
		--cnt;
	}

	return f;
}


/// <summary>
/// 10的负n次方
/// </summary>
/// <param name="cnt"></param>
/// <returns></returns>
int MulTen(int cnt)
{
	int sum = 1;
	while (cnt!=0)
	{
		sum = sum * 10;
		--cnt;
	}

	return sum;
}

/// <summary>
/// float转string
/// </summary>
/// <param name="sum"></param>
/// <param name="str"></param>
void ToStr(float sum, char* str) 
{
	//char str[10];//结构：小数-> . 整数->
	int i = 0;

	int num = sum;

	for (i = 0;num != 0;++i) {
		str[8-i] = (num % 10)+48;
		num = num / 10;
	}
	str[8-i] = '.';
	++i;
	num = MulTen(9 - i) * (sum - (int)sum);

	for (;num != 0;++i) {
		str[8-i] = (num % 10)+ 48;
		num = num / 10;
	}

	//return str;
}

#endif
