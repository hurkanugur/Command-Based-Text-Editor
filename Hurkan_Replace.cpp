#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Replace(string Text, int n, bool Undo)
{
    if(n >= 1 && n <= Number_Of_Lines && Number_Of_Lines != 0)
    {
        int node_count = 1;
        string Old_Text;
        for(list<string>::iterator iter = Hurkan_LinkedList.begin(); iter != Hurkan_LinkedList.end(); iter++)
        {
            if(node_count == n)
                Old_Text = *iter;
            node_count++;
        }
        Hurkan_Delete(n ,true);
        Hurkan_Insert(Text, n, true);

        if(Undo == false)
            Hurkan_Process("replace", Old_Text, n, -1);
    }
}
