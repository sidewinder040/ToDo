#include <iostream>
#include "ToDo.h"
#include "TodoVector.h"

int main(int argc, char* argv[]) {
    cout << "ToDo List\n"
         << "---------"
         << endl;
    ToDo newItem(1, "My Item", 
            "Describing my item");
    TodoVector::AddItem(newItem);

    ToDo newItem2(2, "Another Todo", "Blah Blah Blah");
    TodoVector::AddItem(newItem2);

    // Start second task and display again
    // cout << "Starting Second task - status is now: "
    //      << newItem2.StatusSetStarted() // Set to 'In progress'
    //      << endl;

    // // Complete second task and display again
    // cout << "Setting Second task to completed"
    //      << "Second task Status: "
    //      << newItem2.StatusSetCompleted()
    //      << endl << endl;

    // list all Tasks
    TodoVector::ListItems();
    return 0;
}
