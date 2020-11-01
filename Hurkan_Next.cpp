#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Next(bool Undo)
{
    if(Current_Page * 10 < Number_Of_Lines)
    {
        Current_Page++;
        Hurkan_Print();

        if(Undo == false)
            Hurkan_Process("next", "\0", -1, -1);
    }
}
