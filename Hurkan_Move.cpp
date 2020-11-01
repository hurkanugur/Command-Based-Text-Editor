#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Move(int n, int m, bool Undo)
{
    if(n >= 1 && n <= Number_Of_Lines && Number_Of_Lines != 0)
    {
        int node_count = 1;
        string Text;
        for(list<string>::iterator iter = Hurkan_LinkedList.begin(); iter != Hurkan_LinkedList.end(); iter++)
        {
            if(node_count == n)
                Text = *iter;
            node_count++;
        }
        Hurkan_Delete(n ,true);
        Hurkan_Insert(Text, m, true);

        if(Undo == false)
            Hurkan_Process("move", Text, n, m);
    }
}
