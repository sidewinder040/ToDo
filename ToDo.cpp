#include "ToDo.h"

void ToDo::DisplayTodo() {
   cout << "ToDo Item Details..." << endl;
   cout << "ID:\t" << GetID()
        << endl;
   cout << "Title:\t" << GetTitle()
        << endl;
   cout << "Description:\t" << GetDescription()
        << endl;
   // ToDo use 'Switch" to get user friendly 'Status' message
}

ToDo::ToDo()
{
}

ToDo::~ToDo()
{
}


