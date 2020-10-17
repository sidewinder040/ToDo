#include "ToDo.h"

// Status Updaters
string ToDo::StatusSetStarted() {
    _Status = ToDoStatus::IN_PROGRESS;
    return PretifiyStatus();
}

string ToDo::StatusSetCompleted() {
    _Status = ToDoStatus::COMPLETED;
    return PretifiyStatus();
}

void ToDo::DisplayTodo() {
   // cout << "ToDo Item Details..." << endl;
<<<<<<< HEAD
   cout << "\nID:\t" << GetID()
=======
   cout << "\nID:\t\t" << GetID()
>>>>>>> vector
        << endl;
   cout << "Title:\t\t" << GetTitle()
        << endl;
   cout << "Description:\t" << GetDescription()
        << endl;
<<<<<<< HEAD
   cout << "Status:\t"
=======
   cout << "Status:\t\t"
>>>>>>> vector
        << PretifiyStatus()
        << endl;
}

ToDo::ToDo()
{
}

ToDo::~ToDo()
{
}

<<<<<<< HEAD
ToDo::ToDo(int id, string title, string description,
            ToDoStatus status) {
    _ID = id;
    _Title = title;
    _Description = description;
    _Status = status;
    // TODO: ID and Status should have hard-wired values on creation
    // eg. A new item should be 'not started' and have the next id index
=======
ToDo::ToDo(int id, string title, string description) {
    _ID = id;
    _Title = title;
    _Description = description;
    _Status = ToDoStatus::NOT_STARTED; // Not Started by default
>>>>>>> vector
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




