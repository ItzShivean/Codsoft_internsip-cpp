#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task>& tasks, const string& description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added: " << description << endl;
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to display." << endl;
    } else {
        cout << "To-Do List:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << "[" << (tasks[i].completed ? "X" : " ") << "] " << i + 1 << ". " << tasks[i].description << endl;
        }
    }
}

void deleteTask(vector<Task>& tasks, int index) {
    if (index >= 0 && static_cast<size_t>(index) < tasks.size()) {
        cout << "Task deleted: " << tasks[index].description << endl;
        tasks.erase(tasks.begin() + index);
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "Options:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore(); 
                cout << "Enter task description: ";
                string description;
                getline(cin, description);
                addTask(tasks, description);
                break;
            }
            case 2: {
                viewTasks(tasks);
                break;
            }
            case 3: {
                cout << "Enter the index of the task to delete: ";
                int index;
                cin >> index;
                deleteTask(tasks, index - 1); 
                break;
            }
            case 4: {
                cout << "Goodbye!" << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }

    return 0;
}






