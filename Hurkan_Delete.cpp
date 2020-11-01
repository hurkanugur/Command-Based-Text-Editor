#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Delete(int n, bool Undo)
{
    if(n >= 1 && n <= Number_Of_Lines && Number_Of_Lines != 0)
    {
        int node_count = 1;
        string Deleted_Text;
        list<string>::iterator iter;
        for(iter = Hurkan_LinkedList.begin(); iter != Hurkan_LinkedList.end(); iter++)
        {
            if(node_count == n)
            {
                Deleted_Text = *iter;
                break;
            }
            node_count++;
        }
        Hurkan_LinkedList.erase(iter);
        Number_Of_Lines--;
        if(Undo == false)
            Hurkan_Process("delete", Deleted_Text, n, -1);
    }
}
