#include "Hurkan_Project.h"
void Hurkan_Project::Hurkan_Undo()
{
    if(Hurkan_Stack.size() != 0)
    {
      //STACK DEPOLAMA SIRASI: 1)Operation 2)Text 3)n 4)m
      //HER DORT KUTUCUK BIR TANE OPERASYONU TEMSIL EDER HURKAN'IN STACKINDE
      int m = std::atoi(Hurkan_Stack.top().c_str());
      Hurkan_Stack.pop();
      int n = std::atoi(Hurkan_Stack.top().c_str());
      Hurkan_Stack.pop();
      string Text = Hurkan_Stack.top();
      Hurkan_Stack.pop();
      string Operation = Hurkan_Stack.top();
      Hurkan_Stack.pop();

      //STACK DEPO PARAMETRESI: Hurkan_Process("insert", "\0", n, m);
      if(Operation == "insert")
      {
          if(m != -1)
          {   m++;
              while(m != 0)
              {
                  Hurkan_Delete(n, true);
                  n--;
                  m--;
              }
          }
          else
              Hurkan_Delete(n, true);
      }
      //STACK DEPO PARAMETRESI: Hurkan_Process("delete", Deleted_Text, n, -1);
      else if(Operation == "delete")
      {
          Hurkan_Insert(Text, n, true);
      }
      //STACK DEPO PARAMETRESI: Hurkan_Process("move", Text, n, m);
      else if(Operation == "move")
      {
          Hurkan_Move(m, n, true);
      }
      //STACK DEPO PARAMETRESI: Hurkan_Process("replace", Old_Text, n, -1);
      else if(Operation == "replace")
      {
          Hurkan_Replace(Text, n, true);
      }
      //STACK DEPO PARAMETRESI: Hurkan_Process("next", "\0", -1, -1);
      else if(Operation == "next")
      {
          Hurkan_Prev(true);
      }
      //STACK DEPO PARAMETRESI: Hurkan_Process("prev", "\0", -1, -1);
      else if(Operation == "prev")
      {
          Hurkan_Next(true);
      }
    }
}
