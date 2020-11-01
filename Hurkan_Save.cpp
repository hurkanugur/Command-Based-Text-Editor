#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Save(string FileName)
{
    ofstream Hurkan_File;
    Hurkan_File.open(FileName.c_str());
    if(Hurkan_File.is_open())
    {
        for(list<string>::iterator iter = Hurkan_LinkedList.begin(); iter != Hurkan_LinkedList.end(); iter++)
            Hurkan_File << *iter << "\n";
        Hurkan_File.close();
    }
}
