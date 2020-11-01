#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <cstdlib>
#include <iterator>
#include <sstream>
#include <fstream>
#include <windows.h>
using std::fstream;
using namespace std;

class Hurkan_Project
{
public:
    list<string>Hurkan_LinkedList;
    Hurkan_Project(){Number_Of_Lines = 0; Current_Page = 1;}
    void Hurkan_Open(string FileName);
    void Hurkan_Save(string FileName);
    void Hurkan_Delete(int n, bool Undo);
    void Hurkan_Insert(string Text, int n, bool Undo);
    void Hurkan_Replace(string Text, int n, bool Undo);
    void Hurkan_Move(int n, int m, bool Undo);
    void Hurkan_Next(bool Undo);
    void Hurkan_Prev(bool Undo);
    void Hurkan_Undo();
    void Hurkan_Process(string operation, string text, int n, int m);
    void Hurkan_Print();
private:
    stack<string>Hurkan_Stack;
    int Number_Of_Lines;
    int Current_Page;
};
