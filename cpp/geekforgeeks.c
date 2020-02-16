#include <stdio.h> 
#include <stdlib.h> 


typedef struct All_processes {
	int Process_id;
	int Arrival_Time;
	int Burst_Time;
	int completion_Time;
	struct All_processes* next;
} Process;


Process* newProcess(int Arrival, int Burst)
{
	Process* temp = (Process*)malloc(sizeof(Process));
	temp->Arrival_Time = Arrival;
	temp->Burst_Time = Burst;
	temp->next = NULL;
	return temp;
}

Process* nextProcess(Process** head)
{
	return (*head)->next;
}

void Delete_Process(Process** head)
{
	Process* temp = *head;
	(*head) = (*head)->next;
	//free(temp);
}


void Add_Process(Process** head, /*, int Arrival, int Burst,*/ Process** node)
{
	int Arrival, Burst;
	Process* start = (*head);


	Process* temp = node;
	Arrival = temp->Arrival_Time;
	Burst = temp->Burst_Time;
	if ((*head) == NULL) {
		(*head) = temp;
	}
	else if ((*head)->Arrival_Time > Arrival) {
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
	return ((*head) == NULL);
}




int comp(Process * elem1, Process * elem2)
{
	Process l = *(Process *)elem1;
	Process r = *(Process *)elem2;
	if (l.Arrival_Time > r.Arrival_Time) return  1;
	if (l.Arrival_Time < r.Arrival_Time) return -1;
	if (l.Arrival_Time == r.Arrival_Time) {
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
	temp.next = NULL;
	return temp;
}


int main()
{
	
	printf("enter the number of process\n");
	int No_process;
	scanf("%d", &No_process);
	
	Process Processes[No_process];
	printf("the format is process_id process_Arrival_Time process_Burst_Time\n");
	int i;
	for (i = 0; i < No_process; i++) {
		scanf("%d %d %d", &Processes[i].Process_id, &Processes[i].Arrival_Time, &Processes[i].Burst_Time);
	}
	 
	qsort((void *)Processes, 5, sizeof(Process), comp);
	int i = 1;
	int time = Processes[0].Arrival_Time;
	Process * head = &Processes[0];
	while (!isEmpty(&head) || i < 5) {
		while (!isEmpty(&head)) {
			time += (*head).Burst_Time;
			for (int j = i; j < 5; j++) {
				if (Processes[j].Arrival_Time <= time) {
					Add_Process(&head,/* Processes[j].Arrival_Time, Processes[j].Burst_Time*/ &Processes[j]);
					i++;
				}
			}
			(*head).completion_Time = time;
			Delete_Process(&head);
		}
		if (isEmpty(&head) && i < 5) {
			Add_Process(&head,/* Processes[j].Arrival_Time, Processes[j].Burst_Time*/ &Processes[i]);
			i++;
		}
	}
	printf("%d", time);
	for (int i = 0; i < 5; i++) {
		printf("process %d arrival time %d burst Time %d  completion Time %d \n",i, Processes[i].Arrival_Time, Processes[i].Burst_Time, Processes[i].completion_Time);
	}
	return 0;
}

