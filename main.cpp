#include <iostream>
#include "ToDo.h"

int main(int argc, char* argv[]) {
    ToDo newItem;
    newItem.SetTitle ("My Item");
    newItem.SetDescription("Describing my item");
    newItem.SetID (1);
    newItem.SetStatus(ToDoStatus::NOT_STARTED);
    newItem.DisplayTodo();
    return 0;
}
