/*************************************************************************
	> File Name: file1.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 20 Jul 2022 11:51:05 AM CST
 ************************************************************************/
#include<iostream>
using namespace std;
bool larger(int a, int b) {
   return a > b;
}

int main() {
   cout << "here is the 1st cpp file\n";

   int a, b;
   cin >> a >> b;
   if(larger(a, b)) cout << a << " larger than " << b << endl;

   return 0;
}
