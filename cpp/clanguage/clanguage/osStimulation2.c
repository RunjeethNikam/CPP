//this question 16


#include <stdio.h> 
#include <stdlib.h> 

int time;
typedef struct All_processes {
	int Arrival_Time;
	int Burst_Time;
	int Burst_Time_left;
	int completion_Time;
	int Turn_Around_Time;
	int Waiting_Time;
	struct All_processes* next;
	int id;
} Process;


Process* nextProcess(Process** head)
{
	return (*head)->next;
}

void Delete_Process(Process** head)
{
	if ((*head)->Burst_Time_left == 0)
	{
		Process* temp = *head;
		(*head) = (*head)->next;
	}
	else {
		Process* start = (*head);
		Process* temp = (*head);
		if ((*head) == NULL) {
			(*head) = temp;
		}
		else {
			while (start->next != NULL) {
				start = start->next;
			}
			temp->next = start->next;
			start->next = temp;
		}
		(*head) = (*head)->next;
	}

	//free(temp);
}


void Add_Process(Process** head, Process** node)
{
	Process* start = (*head);
	Process* temp = node;
	if ((*head) == NULL) {
		(*head) = temp;
	}
	else {
		while (start->next != NULL) {
			start = start->next;
		}
		temp->next = start->next;
		start->next = temp;
	}
	return;
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



Process newProcess1(int id, int Arrival, int Burst)
{
	Process temp;
	temp.id = id;
	temp.Arrival_Time = Arrival;
	temp.Burst_Time = Burst;
	temp.completion_Time = 0;
	temp.Turn_Around_Time = 0;
	temp.Waiting_Time = 0;
	temp.next = NULL;
	temp.Burst_Time_left = Burst;
	return temp;
}


int main()
{
	printf("enter the number of process\n");
	int No_process;
	scanf_s("%d", &No_process);
	printf("enter the time quantum \n");
	int timeQuantum;
	scanf_s("%d", &timeQuantum);
	Process * Processes = (Process *)calloc(No_process, sizeof(Process));
	printf("the format is id , arrival,  burst time\n");
	long long int sum = 0;
	for (int i = 0; i < No_process; i++) {
		int id, arrival, burst;
		scanf_s("%d %d %d", &id, &arrival, &burst);
		if (arrival == 0) {
			printf("Invalid");
			return 1;
		}
		else
			Processes[i] = newProcess1(id, arrival, burst);
		sum += burst;
	}
	printf("\n");


	qsort((void *)Processes, No_process, sizeof(Process), comp);
	Process* head = &Processes[0];
	for (int i = 1; i < No_process; i++) {
		Add_Process(&head, &Processes[i]);
	}
	int time = Processes[0].Arrival_Time;
	for (int i = time; i <= time + sum; i += timeQuantum) {
		if (head->Burst_Time_left < timeQuantum) {
			i = i + head->Burst_Time_left;
			head->Burst_Time_left = 0;
			Delete_Process(head);
		}
		else {
			head->Burst_Time_left -= timeQuantum;
			Delete_Process(head);
		}
	}

	_getch();
	return 0;
}