#include "TodoVector.h"

vector<ToDo> TodoVector::Tasks;

TodoVector::TodoVector() {}

TodoVector::~TodoVector() {}

void TodoVector::AddItem(ToDo item) {
    TodoVector::Tasks.push_back(item);
}   

void TodoVector::ListItems() {
    for ( ToDo x : TodoVector::Tasks ) {
        x.DisplayTodo();    
    }
}


