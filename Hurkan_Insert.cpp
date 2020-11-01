#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Insert(string Text, int n, bool Undo)
{
    int m = -1;
    if(n > Number_Of_Lines)
    {
        m = n - Number_Of_Lines - 1;
        for(int i = m; i != 0; i--)
            Hurkan_LinkedList.push_back("");
        Hurkan_LinkedList.push_back(Text);
        Number_Of_Lines = n;

        if(Undo == false)
            Hurkan_Process("insert", "\0", n, m);
    }
    else
    {
        if(n >= 1)
        {
            int node_count = 1;
            for(list<string>::iterator iter = Hurkan_LinkedList.begin(); iter != Hurkan_LinkedList.end(); iter++)
            {
                if(node_count == n)
                    Hurkan_LinkedList.insert(iter,Text);
                node_count++;
            }
            Number_Of_Lines++;
            if(Undo == false)
                Hurkan_Process("insert", "\0", n, m);
        }
        else
            cout << "Minimum line number is 1" <<endl;
    }
}
