#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Prev(bool Undo)
{
    if((1 + (Current_Page - 1) * 10) - 10 > 0 )
    {
        Current_Page--;
        Hurkan_Print();

        if(Undo == false)
            Hurkan_Process("prev", "\0", -1, -1);
    }
}
