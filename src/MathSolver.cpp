
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

// HEADERS //_____________________________
//////////////////////////////////////////|
#include "../include/fms.h"             //|
#include <conio.h>                      //|
#include <fstream>                      //|
#include <iostream>                     //|
#include <set>                          //|
#include <stdlib.h>                     //|
#include <string>                       //|
#include <utility>                      //|
#include <vector>                       //|
#include <Windows.h>                    //|
//////////////////////////////////////////|

// NAMESPACES //______
//////////////////////|
using namespace std;//|
using namespace fms;//|
//////////////////////|

// DEFINES //_________
//////////////////////|
#define co continue //|
//////////////////////|

////*全局变量 & 常量*////___________________________
char key;										//|
bool isexittrue = false,escon = _getch() == 27;	//|
int i = 0,										//|
	width=9,									//|
	mode;										//|
long double a(0),								//|
	b(0),										//|
	result(0),									//|
	temp(0),									//|
	result_l(0);								//|
string Operate(""),								//|
	code,										//|
	blr_la(""),									//|
	blr_ra(""),									//|
	blr_lb(""),									//|
	blr_rb(""),									//|
	blr_ll(""),									//|
	blr_rl("");									//|
//////////////////////////////////////////////////|

////*Functions*////_______
void zerocat();			//|
void enterf();			//|
int mathSolver();		//|
int math();				//|
int fmath();			//|
int amath();			//|
int f_exit(int type);	//|
//////////////////////////|
void zerocat()
{
	if (a == -0)
	{
		a = 0;
	}
	if (b == -0)
	{
		b = 0;
	}
	if (result == -0)
	{
		result = 0;
	}
}

void enterf()
{
	mode = 0;
	SetConsoleTitle(L"Mode Choice");
	while (1)
	{
		if (mode == 0)
		{
			system("cls");
			cout
				<< "Please choose a mode"
				<< '\n';
			cout
				<< "\033[4;40;37m                      \n\033[0m"
				<< "\033[4;47;30m|1. Simple mode      |\n\033[0m"
				<< "\033[1;40;37m|2. Function mode    |\n\033[0m"
				<< "\033[4;40;37m|3. Application mode |\n\033[0m"
				<< "\033[40;37mMode : \033[0m"
				<< "\033[47;30m"
				<< mode
				<< "\033[0m";
		}
		else if (mode == 1)
		{
			system("cls");
			cout
				<< "Please choose a mode"
				<< '\n';
			cout
				<< "\033[4;40;37m                      \n\033[0m"
				<< "\033[1;40;37m|1. Simple mode      |\n\033[0m"
				<< "\033[4;47;30m|2. Function mode    |\n\033[0m"
				<< "\033[4;40;37m|3. Application mode |\n\033[0m"
				<< "\033[40;37mMode : \033[0m"
				<< "\033[47;30m"
				<< mode
				<< "\033[0m";
		}
		else if (mode == 2)
		{
			system("cls");
			cout
				<< "Please choose a mode"
				<< '\n';
			cout
				<< "\033[4;40;37m                      \n\033[0m"
				<< "\033[1;40;37m|1. Simple mode      |\n\033[0m"
				<< "\033[1;40;37m|2. Function mode    |\n\033[0m"
				<< "\033[4;47;30m|3. Application mode |\n\033[0m"
				<< "\033[40;37mMode : \033[0m"
				<< "\033[47;30m"
				<< mode
				<< "\033[0m";
		}
		key = _getch();
		
		if (
			key == '1' ||
			key == 'a' ||
			key == 'A')
		{
			mode = 0;
		}
		else if (
			key == '2' ||
			key == 'b' ||
			key == 'B')
		{
			mode = 1;
		}
		else if (
			key == '3' ||
			key == 'c' ||
			key == 'C')
		{
			mode = 2;
		}
		else if (key == '\r'||key == '\n')
		{
			break;
		}
		else if (key == '\033')
		{
			f_exit(1);
		}
		else{}
	}
}

/*mathSolver*/
int mathSolver()
{
	SetConsoleTitle(L"MathSolver Loading");
	for (
		i = 0,
		a = 0,
		b = 0,
		result = 0,
		temp = 0,
		result_l = 0,
		isexittrue = false;
		i <= 100;
		i++)
	{

		cout
			<< "\033[1;32mWelcome to use Math Solver "
			<< F_Copyright << " for Windows\033[0m"
			<< '\n' << "\033[1;33mLearn more at \033[0m";
		cout
			<< "\033[1;4;34m"
			<< "https://space.bilibili.com/1907802129?spm_id_from=333.999.0.0"
			<< "\033[0m";
		cout
			<< "\033[1;33m for further infomation\033[0m"
			<< '\n';
		cout
			<< "\033[1;31m[ " << i << " % ]" << "Loading...\033[0m"
			<< '\n';
		Sleep(10);
		system("cls");
	}
	cout
		<< "\033[1;32m\aLoaded Successfully in \033[1;32m";
	system("echo %DATE% - %TIME% ");
	cout
		<< "\033[0m";
	Sleep(2200);

	//Commands
	system("cls");
	if (mode == 0)
	{
		math();
	}
	else if (mode == 1)
	{
		fmath();
	}
	else if (mode == 2)
	{
		amath();
	}
	return 0;
}
/*math*/
int math()
{
	SetConsoleTitle(L"Math");
	system("cls");
	while (true)
	{
		if (temp == 0)
		{
			system("cls");
		re:
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1m--> \033[0m";
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					10);
				cin.width(9);
				cin
					>> a
					>> Operate
					>> b;
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9,'\n');
				}
				if (Operate == "\r" || Operate == "\n") { break; }
				else if (_stricmp(Operate.c_str(), "+") == 0
					) {
					result = a + b;
					temp++;
				}
				else if (_stricmp(Operate.c_str(), "-") == 0
					) {
					result = a - b;
					temp++;
				}
				else if (_stricmp(Operate.c_str(), "*") == 0
					) {
					result = a * b;
					temp++;
				}
				else if (_stricmp(Operate.c_str(), "/") == 0
					) {
					if (b == 0)
					{
						cout
							<< "\033[1;31mError!\033[0m"
							<< '\n';
						goto re;
					}
					else
					{
						result = a / b;
						temp++;
					}
				}
				else if (_stricmp(Operate.c_str(), "^") == 0
					) {
					result = power(a, b);
					temp++;
				}
				else if (_stricmp(Operate.c_str(), "e") == 0
					) {
					temp = 0;
					f_exit(1);
				}
				else if (_stricmp(Operate.c_str(), "s") == 0
					) {
					//enter
					enterf();
					// mathSolver
					mathSolver();
				}
				else {
					cout
						<< "\033[1;31m\aUnknown type\033[0m"
						<< '\n';
					goto re;
				}
				zerocat();
				if (a < 0)
				{
					blr_la.assign("(");
					blr_ra.assign(")");
				}
				else
				{
					blr_la.assign("");
					blr_ra.assign("");
				}

				if (b < 0)
				{
					blr_lb.assign("(");
					blr_rb.assign(")");
				}
				else
				{
					blr_lb.assign("");
					blr_rb.assign("");
				}

				result_l = result;
				cout
					<< "\033[1;32m"
					<< blr_la
					<< a
					<< blr_ra
					<< " "
					<< Operate
					<< " "
					<< blr_lb
					<< b
					<< blr_rb
					<< " = "
					<< result
					<< " \033[0m"
					<< '\n';
				break;
			}
		}
		else if (temp > 0)
		{
			re_1:
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1;33m"
					<< result_l
					<< " \033[0m";
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					10);
				cin.width(9);
				cin >> Operate >> b;
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9, '\n');
				}
				if (Operate == "\r" || Operate == "\n"){}
				else if (_stricmp(Operate.c_str(), "new") == 0
					) {
					temp = 0;
					break;
				}
				else if (_stricmp(Operate.c_str(), "+") == 0
					) {
					result = result_l + b;
					temp++;
				}
				else if (_stricmp(Operate.c_str(), "-") == 0
					) {
					result = result_l - b;
					temp++;
				}
				else if (_stricmp(Operate.c_str(), "*") == 0
					) {
					result = result_l * b;
					temp++;
				}
				else if (_stricmp(Operate.c_str(), "/") == 0
					) {
					if (b == 0)
					{
						cout
							<< "\033[1;31m\aError!\033[0m"
							<< '\n';
						goto re_1;
					}
					else
					{
						result = result_l / b;
						temp++;
					}
				}
				else if (_stricmp(Operate.c_str(), "^") == 0
					) {
					result = power(result_l, b);
					temp++;
				}
				else if (_stricmp(Operate.c_str(), "e") == 0
					) {
					temp = 0;
					f_exit(1);
				}
				else if (_stricmp(Operate.c_str(), "s") == 0
					) {
					//enter
					enterf();
					// mathSolver
					mathSolver();
				}
				else {
					cout
						<< "\033[1;31m\aUnknown type\033[0m"
						<< '\n';
					goto re_1;
				}
				zerocat();
				if (result_l < 0)
				{
					blr_ll.assign("(");
					blr_rl.assign(")");
				}
				else
				{
					blr_ll.assign("");
					blr_rl.assign("");
				}
				if (b < 0)
				{
					blr_lb.assign("(");
					blr_rb.assign(")");
				}
				else
				{
					blr_lb.assign("");
					blr_rb.assign("");
				}

				cout
					<< "\033[0m\033[1;32m"
					<< blr_ll
					<< result_l
					<< blr_rl
					<< " "
					<< Operate
					<< " "
					<< blr_lb
					<< b
					<< blr_rb
					<< " = "
					<< result
					<< " \033[0m"
					<< '\n';
				result_l = result;
				break;
			}
		}
	}
	return 0;
}
int fmath()
{
	SetConsoleTitle(L"Function");
	while (true)
	{
		ae_0:
		cout
			<< "\033[0m";
		cout
			<< "\033[1m<f>> \033[0m";
		cin.width(9);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cin
			>> Operate;
		SetConsoleTextAttribute(
			GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		if (!cin.good())
		{
			cin.clear();
			cin.ignore(9, '\n');
		}
		if (Operate == "\r" || Operate == "\n") {}
		else if (_stricmp(Operate.c_str(), "abs") == 0
			) {
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1m<abs>> \033[0m";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cin.width(9);
				cin
					>> a;
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9, '\n');
				}
				result = f_abs(a);
				cout
					<< "\033[1;32m| "
					<< a
					<< " | = "
					<< result
					<< "\n\033[0m";
				system("PAUSE>NUL");
				break;
			}
		}
		else if (_stricmp(Operate.c_str(), "s") == 0
			) {
			//enter
			enterf();
			// mathSolver
			mathSolver();
		}
		else if (_stricmp(Operate.c_str(), "cos") == 0
			) {
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1m<cos>> \033[0m";
				cin.width(9);
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					14);
				cin
					>> a;
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9, '\n');
				}
				result = f_cos(a);
				cout
					<< "\033[1;32mCOS( "
					<< a
					<< " ) = "
					<< result
					<< "\n\033[0m";
				system("PAUSE>NUL");
				break;
			}
		}
		else if (_stricmp(Operate.c_str(), "sin") == 0
			) {
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1m<sin>> \033[0m";
				cin.width(9);
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					14);
				cin
					>> a;
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9, '\n');
				}
				result = f_sin(a);
				cout
					<< "\033[1;32mSIN( "
					<< a
					<< " ) = "
					<< result
					<< "\n\033[0m";
				system("PAUSE>NUL");
				break;
			}
		}
		else if (_stricmp(Operate.c_str(), "tan") == 0
			) {
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1m<tan>> \033[0m";
				cin.width(9);
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					14);
				cin
					>> a;
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9, '\n');
				}
				result = f_tan(a);
				cout
					<< "\033[1;32mTAN( "
					<< a
					<< " ) = "
					<< result
					<< "\n\033[0m";
				system("PAUSE>NUL");
				break;
			}
		}
		else if (_stricmp(Operate.c_str(), "exit") == 0
			) {
			break;
		}
		else {
			cout
				<< "\033[1;31m\aUnknown type\033[0m"
				<< '\n';
			goto ae_0;
		}
	}
	f_exit(1);
	return 0;
}
int amath()
{
	SetConsoleTitle(L"Application");
	while (true)
	{
	ae_0:
		cout
			<< "\033[0m";
		cout
			<< "\033[1m<a>> \033[0m";
		cin.width(9);
		SetConsoleTextAttribute(
			GetStdHandle(STD_OUTPUT_HANDLE),
			14);
		cin
			>> Operate;
		SetConsoleTextAttribute(
			GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		if (!cin.good())
		{
			cin.clear();
			cin.ignore(9, '\n');
		}
		if (Operate == "\r" || Operate == "\n") {}
		else if (_stricmp(Operate.c_str(), "s") == 0
			) {
			//enter
			enterf();
			// mathSolver
			mathSolver();
		}
		else if (_stricmp(Operate.c_str(), "scircle") == 0
			) {
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1mradius>>> \033[0m";
				cin.width(9);
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					14);
				cin
					>> a;
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9, '\n');
				}
				result = scircle(a);
				cout
					<< "\033[1;32mR = "
					<< a
					<< "\nD = "
					<< (2 * a)
					<< "\nS = "
					<< result
					<< "\n\033[0m";
				system("PAUSE>NUL");
				break;
			}
		}
		else if (_stricmp(Operate.c_str(), "ccircle") == 0
			) {
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1mradius>>> \033[0m";
				cin.width(9);
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					14);
				cin
					>> a;
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9, '\n');
				}
				result = ccircle(a);
				cout
					<< "\033[1;32mR = "
					<< a
					<< "\nD = "
					<< (2 * a)
					<< "\nC = "
					<< result
					<< "\n\033[0m";
				system("PAUSE>NUL");
				break;
			}
		}
		else if (_stricmp(Operate.c_str(), "de") == 0
			) {
			for (;;)
			{
				cout
					<< "\033[0m";
				cout
					<< "\033[1mfocal(meter)>>> \033[0m";
				cin.width(9);
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					14);
				cin
					>> a;
				SetConsoleTextAttribute(
					GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				if (!cin.good())
				{
					cin.clear();
					cin.ignore(9, '\n');
				}
				result = degree_of_eye(a);
				cout
					<< "\033[1;32m"
					<< "focal = "
					<< a
					<< "\nDegree = "
					<< result
					<< "°\n\033[0m";
				system("PAUSE>NUL");
				break;
			}
		}
		else if (_stricmp(Operate.c_str(), "exit") == 0 ||
			escon
			) {
			break;
		}
		else {
			cout
				<< "\033[1;31m\aUnknown type\033[0m"
				<< '\n';
			goto ae_0;
		}
	}
	f_exit(1);
	return 0;
}
////*f_exit*////
int f_exit(int type)
{
	if (
		type == 0)
	{
		return 0;
	}
	else if (
		type == 1)
	{
		system("cls");

		char state[6] = {
			't',
			'r',
			'u',
			'e'
		};
		for (
			int i = 0;
			i <= 100;
			i++,state[i])
		{
			cout
				<< '\r';
			cout
				<< "\033[31;1mExiting... [ " 
				<< i
				<< " % ] "
				<< " = "
				<< &i
				<< " -- "
				<< state
				<< " == \033["
				<< &state
				<< "\033[0m";
			Sleep(15);
			system("CLS");
		}
		isexittrue = true;

		exit(type);
	}
}

////*Main*////_____
int main()		 //|
{				 //|
	//enter		 //|
	enterf();	 //|
	// mathSolver//|
	mathSolver();//|
	// ret		 //|
	return 0;	 //|
}				 //|
///////////////////|