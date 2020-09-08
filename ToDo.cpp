#include "ToDo.h"

void ToDo::DisplayTodo() {
   cout << "ToDo Item Details..." << endl;
   cout << "ID:\t" << GetID()
        << endl;
   cout << "Title:\t" << GetTitle()
        << endl;
   cout << "Description:\t" << GetDescription()
        << endl;
   // Get user friendly 'Status' message
   string prettyStatus = "";
   ToDoStatus status = GetStatus();
   switch (status) {
       case ToDoStatus::NOT_STARTED : 
            prettyStatus = "Not Started";
            break;
        case ToDoStatus::IN_PROGRESS :
            prettyStatus = "In Progress";
            break;
        case ToDoStatus::COMPLETED :
            prettyStatus = "Completed";
            break;
        default :
            break;
   }
   cout << "Status:\t"
        << prettyStatus
        << endl;
}

ToDo::ToDo()
{
}

ToDo::~ToDo()
{
}


