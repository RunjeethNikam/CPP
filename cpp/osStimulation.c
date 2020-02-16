#include <stdio.h> 
#include <stdlib.h> 


typedef struct All_processes { 
	int Arrival_Time;
	int Burst_Time; 
	int completion_Time;
	struct All_processes* next; 
} Process; 

//struct Process{
//	int Arrival_Time;
//	int Burst_Time;
//	int completion_Time;
//};

Process* newProcess(int Arrival, int Burst) 
{ 
	Process* temp = (Process*)malloc(sizeof(Process)); 
	temp->Arrival_Time = Arrival; 
	temp->Burst_Time = Burst; 
	temp->next = NULL; 
	return temp; 
} 

int nextProcess(Process** head) 
{ 
	return (*head)->Burst_Time; 
} 

void Delete_Process(Process** head) 
{ 
	Process* temp = *head; 
	(*head) = (*head)->next; 
	free(temp); 
} 


void Add_Process(Process** head, int Arrival, int Burst) 
{ 
	Process* start = (*head); 


	Process* temp = newProcess(Arrival, Burst); 
	if ((*head)->Arrival_Time > Arrival) { 
		temp->next = *head; 
		(*head) = temp; 
	} 
	else { 
		while (start->next != NULL && start->next->Burst_Time < Burst) { 
			start = start->next; 
		} 
		temp->next = start->next; 
		start->next = temp; 
	} 
} 


int isEmpty(Process** head) 
{ 
	return (*head) == NULL; 
} 




int comp (Process * elem1, Process * elem2) 
{
	Process l = *(Process *)elem1;
	Process r = *(Process *)elem2;    
    if (l.Arrival_Time > r.Arrival_Time) return  1;
    if (l.Arrival_Time < r.Arrival_Time) return -1;
    if(l.Arrival_Time == r.Arrival_Time){
    	if (l.Burst_Time > r.Burst_Time) return 1;
    	else
    		return -1;
	}
    return 1;
}



Process newProcess1(int Arrival, int Burst) 
{ 
	Process temp; 
	temp.Arrival_Time = Arrival; 
	temp.Burst_Time = Burst;
	temp.completion_Time = 0;  
	return temp; 
}


int main() 
{ 
	Process Processes[5];
	Processes[0] = newProcess1(10, 5);
	Processes[1] = newProcess1(3, 2);
	Processes[2] = newProcess1(3, 3);
	Processes[3] = newProcess1(3, 1);
	Processes[4] = newProcess1(19, 2);
	qsort ((void *)Processes, 5, sizeof(Processes[0]), comp);
	int time = 1, i;
	for(i = 0;i <= Processes[4].Arrival_Time;i++){
		
		time++;
	}	
	return 0; 
} 

