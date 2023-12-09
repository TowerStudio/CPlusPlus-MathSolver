/* Application infomation
*  ______________________________________
* /_____________________________________/|
* |====================================| |
* | Name : Math Solver                 | |
* | VERSION : 2023.1.6f                | |
* |====================================| |
* | CopyRight (c) 2023 Float Brandon   | |
* | All Rights Reserved                | |
* |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| |
* |====================================|/
*
*/////////////////////////////////////////|

#pragma once
#ifndef _STD_FMS_H_
#define _STD_FMS_H_
#include <math.h>

namespace fms {

#define F_PI 3.14159265
#define F_Copyright "2023.1.6f"


	double f_abs(double a)
	{
		double result = 0;
		if (a >= 0)
		{
			result = a;
		}
		else if (a < 0)
		{
			result = -a;
		}
		return result;
	}
	long double power(long double a, long double b)
	{
		long double result = 1.0;
		int t = b;
		for (int i = 0; i < b; i++)
		{
			if (a < 0 && t % 2 == 0)
			{
				result *= f_abs(a);
			}
			else
			{
				result *= a;
			}
		}
		return result;
	}

	long double scircle(long double r)
	{
		long double s = r * r * F_PI;
		return s;
	}

	long double ccircle(long double r)
	{
		long double c = (2 * r) * F_PI;
		return c;
	}
	
	long double degree_of_eye(long double eyefocalLength/*meter*/)
	{
		long double d = 100 / eyefocalLength;
		return d;
	}

	double f_cos(double a)
	{
		double result = cos(a);
		return result;
	}
	double f_sin(double a)
	{
		double result = sin(a);
		return result;
	}
	double f_tan(double a)
	{
		double result = tan(a);
		return result;
	}
}
#endif // !_STD_FMS_H_
