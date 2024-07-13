#include <iostream>
#include <fstream>
/*
The useful classes for wworking with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

using namespace std;

int main(){
    string st = "Harry bhai";
    string st2;
    //Opening files using constructor and writing it 
    // ofstream out("sample60.txt");
    // out<<st;    

    // Opening file using constructor and reading it
    ifstream in("sample60b.txt"); //read operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}