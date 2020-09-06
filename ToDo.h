#pragma once
#include <string>
#include <iostream>
#include "TodoStatus.h"

using namespace std;

class ToDo
{
private:
    int    _ID;
    string _Title;
    string _Description;
    ToDoStatus _Status;
public:
    // Title Accessors 
    void SetTitle (string title) { _Title = title; }; 
    string GetTitle () { return _Title; };

    // Description Accessors
    void SetDescription (string description) { _Description = description; };
    string GetDescription() { return _Description; };

    // ID Accessor
    void SetID (int id) { _ID = id; };
    int  GetID () { return _ID; }; 

    // Status Accessor
    void SetStatus (ToDoStatus status) { _Status = status; };
    ToDoStatus GetStatus() { return _Status; };

    // Class Methods
    void DisplayTodo();

    // Contructor / Destructor
    ToDo();
    ~ToDo();
};


