#include <iostream>
#include "namespace.hpp"
using namespace std;

namespace my_namespace
{
int n_var;
};
void print_namespace_data(void);
int main()
{
cout << "var : " << my_namespace :: n_var;
//print_namespace_data();
}
