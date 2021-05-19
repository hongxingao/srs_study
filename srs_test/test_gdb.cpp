#include <iostream>
#include <vector>
using namespace std;

static void gdb_test()
{
	int a = 1;
	vector<int> vec(3);
	vec.push_back(1);
}

static void test()
{
	gdb_test();
}

int main()
{
	test();

	return 0;
}