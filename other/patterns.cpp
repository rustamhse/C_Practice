// Изучение поведенческого паттерна Command 

#include <iostream>
#include <string>

using namespace std;

class TextEditor{
  
    private:
    string text;
    vector<string> commandStack;

    public:
    void appendText(const string& newText){
        commandStack.push_back(text);
        text.append(newText);
    }

    void show(){
        cout << text << endl;
    }

    void backspace(){
        commandStack.push_back(text);
        if (text.size() != 0)
            text.pop_back();
    }

    void undo(){
        if (!commandStack.empty()) {
            text = commandStack.back();
            commandStack.pop_back();
        } else {
            cout << "Nothing to undo" << endl;
        }
    }
};

int main(){
    TextEditor editor;
    string command;
    string textValue;

    cout << "Welcome to my program! Available commands: append, backspace, show, exit" << endl;

    while(1){
        cout << "\nInput command: ";
        cin >> command;
        if (command == "append"){
            cin.ignore();
            getline(cin, textValue);
            editor.appendText(textValue);
        } 
        else if (command == "backspace"){
            editor.backspace();
        } 
        else if (command == "show"){
            cout << endl << "--------------------------" << endl;
            editor.show();
            cout << "--------------------------" << endl;
        }
        else if (command == "undo"){
            editor.undo();
        }
        else if (command == "exit"){
            break;
        }
        else {
            cout << "Command not recognized. Try again!" << endl;
        }
        command.clear();
    }
}