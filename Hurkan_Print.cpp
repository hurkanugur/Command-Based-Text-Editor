#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Print()
{
    int node_count = 1;
    for(list<string>::iterator iter = Hurkan_LinkedList.begin(); iter != Hurkan_LinkedList.end(); iter++)
    {
        if((node_count >= (((Current_Page - 1) * 10) + 1)) && (node_count <= Current_Page * 10))
        {
            std::cout << node_count << ") " << *iter << endl;
        }
        node_count++;
    }
    cout <<"\n[Page " << Current_Page << "]";
}
