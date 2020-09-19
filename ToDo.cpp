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
   // string prettyStatus = "";
   // ToDoStatus status = GetStatus();
   // switch (status) {
   //     case ToDoStatus::NOT_STARTED : 
   //          prettyStatus = "Not Started";
   //          break;
   //      case ToDoStatus::IN_PROGRESS :
   //          prettyStatus = "In Progress";
   //          break;
   //      case ToDoStatus::COMPLETED :
   //          prettyStatus = "Completed";
   //          break;
   //      default :
   //          break;
   // }
   cout << "Status:\t"
        // << prettyStatus
        << PretifiyStatus()
        << endl;
}

ToDo::ToDo()
{
}

ToDo::~ToDo()
{
}

ToDo::ToDo(int id, string title, string description,
            ToDoStatus status) {
    _ID = id;
    _Title = title;
    _Description = description;
    _Status = status;
    // TODO: ID and Status should have hard-wired values on creation
    // eg. A new item should be 'not started' and have the next id index
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




