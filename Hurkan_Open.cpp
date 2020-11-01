#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Open(string FileName)
{
    ifstream Hurkan_File;
    Hurkan_File.open(FileName.c_str());
    if(Hurkan_File.is_open())
    {
        string Text;
        Number_Of_Lines = 0;
        while(!Hurkan_File.eof())
        {
            getline(Hurkan_File, Text);
            Hurkan_LinkedList.push_back(Text);
            Number_Of_Lines++;
        }
        Hurkan_File.close();
    }
}
