#include <iostream>
#include "ToDo.h"

int main(int argc, char* argv[]) {
    cout << "ToDo List\n"
         << "---------"
         << endl;
    ToDo newItem(1, "My Item", 
            "Describing my item",
            ToDoStatus::NOT_STARTED);
    newItem.DisplayTodo();

    // Test overloaded constructor
    ToDo newItem2(2, "Another Todo", "Blah Blah Blah", ToDoStatus::NOT_STARTED);
    newItem2.DisplayTodo();
    return 0;
}
