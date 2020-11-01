#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Process(string Operation, string Text, int n, int m)
{
    //m ve n sayilarini stringe ceviririz
    std::stringstream convert_n;
    std::stringstream convert_m;
    convert_n << n;
    convert_m << m;

    //HER ISLEM 4 BIRIMLIK ALAN KAPLAR STACKTE
    Hurkan_Stack.push(Operation);
    Hurkan_Stack.push(Text);
    Hurkan_Stack.push(convert_n.str());
    Hurkan_Stack.push(convert_m.str());
}
