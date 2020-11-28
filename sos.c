#include <stdio.h>
#include "head.h"

int main()
{
	char a = 0;
	char floatflag = -1;
	float flat = 0;
	float  b = 0.0, sum = 0.0;
	char opr = 0;
	float* pnum = &sum;
	
	while (scanf_s("%c", &a, 1))
	{

		switch (a)
		{
		case '0'://'0'=48
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			if (floatflag != -1) {
				++floatflag;
			}
			*pnum = a - 48 + *pnum * 10;
			break;

		case '+':
		case '-':
		case '*':
		case '/'://'*'=42,'+'=43,'-'=45,'/'=47
		case '=':
			if (opr == 0 && floatflag != -1) {
				sum = sum + flat * DepTen(floatflag);
			}
			else if (floatflag != -1)
			{
				b = b + flat * DepTen(floatflag);
			}

			sum = Do(opr, sum, b);

			/*÷ÿ÷√≤Œ ˝*/
			pnum = &b;
			b = 0.0;
			flat = 0.0;
			opr = a;
			floatflag = -1;

			break;

		case '.':
			floatflag = 0;
			pnum = &flat;
			break;
		default:
			break;
		}
		if (a == 61) {//'='=61
			break;
		}
	}

	char las[9] = "";
	ToStr(sum, las);

	for (int i = 0;i < 9;++i) {
		printf("%c", las[i]);
	}

	return 0;

}


//#include <stdio.h>
//
//int main()
//{
//	char a[] = "123.456";
//
//	char b[20];
//	float c=0.0;
//	int d = 0;
//
//	sscanf_s(a, "%s", b, 20*sizeof(char));
//	sscanf_s(a, "%f", &c);
//	sscanf_s(a, "%d", &d);
//
//	sprintf_s(b, 20*sizeof(char),"%5f", c);
//
//	return 0;
//}
