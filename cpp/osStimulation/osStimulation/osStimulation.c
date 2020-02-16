//this question 3


#include <stdio.h> 
#include <stdlib.h> 

int time;
typedef struct All_processes {
	int Arrival_Time;
	int Burst_Time;
	int completion_Time;
	int Turn_Around_Time;
	int Waiting_Time;
	struct All_processes* next;
	int id;
} Process;


Process* newProcess(int Arrival, int Burst)
{
	Process* temp = (Process*)malloc(sizeof(Process));
	temp->Arrival_Time = Arrival;
	temp->Burst_Time = Burst;
	temp->completion_Time = 0;
	temp->Turn_Around_Time = 0;
	temp->Waiting_Time = 0;
	temp->next = NULL;
	return temp;
}

Process* nextProcess(Process** head)
{
	return (*head)->next;
}

void Delete_Process(Process** head)
{
	(*head)->Turn_Around_Time = (*head)->completion_Time - (*head)->Arrival_Time;
	(*head)->Waiting_Time = (*head)->Turn_Around_Time - (*head)->Burst_Time;
	(*head) = (*head)->next;
	time += 2;
	
	//free(temp);
}


void Add_Process(Process** head, Process** node)
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



Process newProcess1(int id,int Arrival, int Burst)
{
	Process temp;
	temp.id = id;
	temp.Arrival_Time = Arrival;
	temp.Burst_Time = Burst;
	temp.completion_Time = 0;
	temp.Turn_Around_Time = 0;
	temp.Waiting_Time = 0;
	temp.next = NULL;
	return temp;
}


int main()
{
	printf("enter the number of process\n");
	int No_process;
	scanf_s("%d", &No_process);
	Process * Processes = (Process *)calloc(No_process, sizeof(Process));
	printf("the format is id , arrival,  burst time\n");
	for (int i = 0; i < No_process; i++) {
		int id, arrival, burst;
		scanf_s("%d %d %d", &id, &arrival, &burst);
		if (arrival == 0) {
			printf("Invalid");
			return 1;
		}
		else
		Processes[i] = newProcess1(id,arrival, burst);
	}
	printf("\n");
	 
	qsort((void *)Processes, No_process, sizeof(Process), comp);
	int i = 1;
	time = Processes[0].Arrival_Time;
	Process * head = &Processes[0];
	while (!isEmpty(&head) || i < No_process) {
		while (!isEmpty(&head)) {
			
			time += (*head).Burst_Time;
			for (int j = i; j < No_process; j++) {
				if (Processes[j].Arrival_Time <= time) {
					Add_Process(&head, &Processes[j]);
					i++;
				}
			}
			(*head).completion_Time = time;
			Delete_Process(&head);
		}
		if (isEmpty(&head) && i < No_process) {
			time = Processes[i].Arrival_Time;
			Add_Process(&head, &Processes[i]);
			i++;
		}
	}
	printf("total time taken is %d\n", time);
	int Avg_Waiting_time = 0;
	int Avg_turn_time = 0;
	printf("             id    ArrivalTime        BurstTime     CompletetionTim  TurnAroundTime     WaitingTime\n");
	for (int i = 0; i < No_process; i++) {
		printf("%15d %15d %15d %20d %15d %15d\n",Processes[i].id, Processes[i].Arrival_Time, Processes[i].Burst_Time, Processes[i].completion_Time, Processes[i].Turn_Around_Time, Processes[i].Waiting_Time);
		Avg_Waiting_time += Processes[i].Waiting_Time;
		Avg_turn_time += Processes[i].Turn_Around_Time;
	}
	printf("Avg Waiting time : %0.3f\n", (float)Avg_Waiting_time / No_process);
	printf("Avg TAT time : %0.3f\n", (float)Avg_turn_time / No_process);
	return 0;
}
