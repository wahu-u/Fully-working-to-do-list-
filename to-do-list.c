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
void listTasks(){
    char status;
    for ( int i = 0; i < length; i++){
        if (tasks[i].completed == 1)
        {
            status = 'd';

        }else{
            status='n';
        }
        printf("%d. %s [%c]\n",i+1,tasks[i].task,status);        
    }
    

}
void markedCompleted(int index){
    if (index <= length && index > 0){
        tasks[index - 1].completed = 1;
        printf("Task marked as completed \n");
    }else{
        printf("Invalid index\n");
    }
    
}

void deletetask(int index){
    if (index <= length && index > 0){
        free(tasks[index - 1].task);
        for (int i = index - 1; i < length - 1; i++){
            tasks[i] = tasks[i + 1];
        }
        tasks = (Task *)realloc(tasks, (length - 1) * sizeof(Task));
        lenght--;
        printf("Task deleted\n");
        }else{
            printf("Invalid index\n");
        }
        
    }
   
int main(){
    printf("\nOptions\n");
    printf("1. Add a task\n");
    


    return 0;
} 
