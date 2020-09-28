#include "ToDo.h"

void ToDo::DisplayTodo() {
   // cout << "ToDo Item Details..." << endl;
   cout << "\nID:\t" << GetID()
        << endl;
   cout << "Title:\t" << GetTitle()
        << endl;
   cout << "Description:\t" << GetDescription()
        << endl;
   cout << "Status:\t"
        << PretifiyStatus()
        << endl;
}

ToDo::ToDo()
{
}

ToDo::~ToDo()
{
}

ToDo::ToDo(int id, string title, string description) {
    _ID = id;
    _Title = title;
    _Description = description;
    _Status = ToDoStatus::NOT_STARTED; // Not Started by default
}
    
// Obtain user-friendly status string
string ToDo::PretifiyStatus() {
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
   return prettyStatus;
}




