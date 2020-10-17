#pragma once
#include <vector>
#include "ToDo.h"

using namespace std;

class TodoVector {
  public:
    TodoVector();
    ~TodoVector();
    static void AddItem(ToDo item);    
    static void ListItems();
  private:
    static vector<ToDo> Tasks;
};
