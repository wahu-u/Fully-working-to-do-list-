#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *task; 
    int completed; // 1 represent true 0 -> false 
} Task;

Task *tasks = NULL;
int length = 0;

void addTask(const char *task){
    tasks = (Task *)realloc(tasks, (length + 1) * sizeof(Task));
    tasks[length].task = (char *)malloc(strlen(task) + 1);
    tasks[length].completed = 0;
    
    strcpy(tasks[length].task, task);

    length++;
    printf("task added");
}
   
int main(){
    printf("\nOptions\n");
    printf("1. Add a task\n");
    


    return 0;
} 
