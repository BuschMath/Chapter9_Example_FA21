#include <iostream>
#include <string>

using namespace std;

string global_var;
string conflict_var;

void FunctionA(string);
void FunctionB();

int main()
{
	string main_local_var = "\tMain Var\n";
	global_var = "\tGlobal Var\n";
	conflict_var = "\tMain Conflict Var\n";

	cout << "Main:\n" << main_local_var << global_var << conflict_var;

	FunctionA(main_local_var);

	cout << "Main:\n" << main_local_var << conflict_var;

	FunctionB();

	return 0;
}

void FunctionA(string copy_main_local_var)
{
	copy_main_local_var = "\tCopy of Main changed\n";
	string conflict_var = "\tLocal Conflict, not global\n";
	string local_a = "\tLocal A\n";

	cout << "A:\n" << local_a << copy_main_local_var << conflict_var;
}

void FunctionB()
{
	string main_local_var = "\tMain Local B\n";
	string local_b = "\tLocal B\n";

	cout << "B:\n" << local_b << main_local_var << conflict_var;
}