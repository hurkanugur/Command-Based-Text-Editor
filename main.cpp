#include "Hurkan_Project.h"

string Hurkan_Command(string Command, int& index, bool readToEnd)
{
    string Text;
    if(readToEnd == false)
    {
        for(index; Command[index] != ' ' && Command[index] != '\0'; index++)
        {
            Text += Command[index];
        }
        if(Command[index] != '\0')
            index++;
    }
    else
    {
        for(index; Command[index] != '\0'; index++)
        {
            Text += Command[index];
        }
        Text += '\0';
    }
    return Text;
}

int main()
{
    system("color 0A");
    string Command , Text;
    bool Exit = false;
    int n, m, index;
    Hurkan_Project myLittleHurkan;

    while(Exit == false)
    {
        system("cls");
        index = 0;
        cout << ":::::::::::::::::::::H:U:R:K:A:N:::U:G:U:R::::::::::::::::::::\n::::::C:O:M:M:A:N:D:::B:A:S:E:D:::T:E:X:T:::E:D:I:T:O:R:::::::" << endl;
        cout << "::::::::::::::::::::::::::::::\nopen filename\nsave filename\ninsert n text" << endl;
        cout << "delete n\nmove n m\nreplace n text\nnext\nprev\nundo\nexit\n::::::::::::::::::::::::::::::" << endl;
        myLittleHurkan.Hurkan_Print();
        cout << "\n::::::::::::::::::::::::::::::\n<[ Command ]>: ";
        getline(cin, Command);
        Text = Hurkan_Command(Command, index, false);
        if(Text == "open")
        {
            Text = Hurkan_Command(Command, index, true);
            myLittleHurkan.Hurkan_Open(Text);
        }
        else if(Text == "save")
        {
            Text = Hurkan_Command(Command, index, true);
            myLittleHurkan.Hurkan_Save(Text);
        }
        else if(Text == "insert")
        {
            n = std::atoi(Hurkan_Command(Command, index, false).c_str());
            Text = Hurkan_Command(Command, index, true);
            myLittleHurkan.Hurkan_Insert(Text, n, false);
        }
        else if(Text == "delete")
        {
            n = std::atoi(Hurkan_Command(Command, index, true).c_str());
            myLittleHurkan.Hurkan_Delete(n, false);
        }
        else if(Text == "replace")
        {
            n = std::atoi(Hurkan_Command(Command, index, false).c_str());
            Text = Hurkan_Command(Command, index, true);
            myLittleHurkan.Hurkan_Replace(Text, n, false);
        }
        else if(Text == "move")
        {
            n = std::atoi(Hurkan_Command(Command, index, false).c_str());
            m = std::atoi(Hurkan_Command(Command, index, true).c_str());
            myLittleHurkan.Hurkan_Move(n, m, false);
        }
        else if(Text == "prev")
        {
            myLittleHurkan.Hurkan_Prev(false);
        }
        else if(Text == "next")
        {
            myLittleHurkan.Hurkan_Next(false);
        }
        else if(Text == "undo")
        {
            myLittleHurkan.Hurkan_Undo();
        }
        else if(Text == "exit")
        {
            Exit = true;
            break;
        }
    }
    return 0;
}
