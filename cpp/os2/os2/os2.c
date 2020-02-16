//this question 16


#include <stdio.h> 
#include <stdlib.h> 

// clock 
int time;


typedef struct All_processes {
	int remining_burst_time;
	int Arrival_Time;
	int Burst_Time;
	int completion_Time;
	int Turn_Around_Time;
	int Waiting_Time;
	struct All_processes* next;
	int id;
} Process;
struct Queue
{
	int front, rear, size;
	unsigned capacity;
	Process** array;
}Queue;

// to create a queue of size = capacity

struct Queue* createQueue(unsigned capacity)
{
	struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front = queue->size = 0;
	queue->rear = capacity - 1;
	queue->array = (Process*)malloc(queue->capacity * sizeof(Process));
	return queue;
}

// to take the first element

Process* front(struct Queue* queue)
{
	return queue->array[queue->front];
}

// to add element

void enqueue(struct Queue* queue, Process* item)
{
	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
}

// check if it is element

int isEmpty(struct Queue* queue)
{
	return (queue->size == 0);
}

// to remove

Process* dequeue(struct Queue* queue)
{
	Process* item = queue->array[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size - 1;
	return item;
}

// to create new process

Process newProcess(int id, int Arrival, int Burst)
{
	Process temp;
	temp.id = id;
	temp.Arrival_Time = Arrival;
	temp.Burst_Time = Burst;
	temp.completion_Time = 0;
	temp.Turn_Around_Time = 0;
	temp.Waiting_Time = 0;
	temp.next = NULL;
	temp.remining_burst_time = Burst;
	return temp;
}

// compare function for sorting

int comp(Process * elem1, Process * elem2)
{
	Process l = *(Process *)elem1;
	Process r = *(Process *)elem2;
	if (l.Arrival_Time > r.Arrival_Time) return  1;
	if (l.Arrival_Time < r.Arrival_Time) return -1;
	if (l.Arrival_Time == r.Arrival_Time) {
		if (l.id > r.id) return 1;
		else
			return -1;
	}
	return 1;
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
		if (arrival < 0) {
			printf("Invalid");
			return 1;
		}
		else
			Processes[i] = newProcess(id, arrival, burst);
	}
	printf("\n");
	printf("enter the time slice\n");
	int timeQuantum;
	scanf_s("%d", &timeQuantum);
	qsort((void *)Processes, No_process, sizeof(Process), comp);
	int i = 0;
	int Number_Process_left = No_process;
	time = Processes[0].Arrival_Time;
	int n = 1;
	struct Queue* queue = createQueue(No_process);
	enqueue(queue, &Processes[0]);
	for (time; Number_Process_left != 0;) {
		if (isEmpty(queue) && n < No_process) {
			time = Processes[n].Arrival_Time;
			enqueue(queue, &Processes[n]);
			n++;
		}
		if (front(queue)->remining_burst_time > timeQuantum) {
			Process* x = dequeue(queue);
			time += timeQuantum;
			x->remining_burst_time -= timeQuantum;
			for (int i = n; i < No_process; i++) {
				if (Processes[i].Arrival_Time <= time) {
					enqueue(queue, &Processes[i]);
					n++;
				}
			}
			enqueue(queue, x);
		}
		else if (front(queue)->remining_burst_time <= timeQuantum) {
			Process* x = dequeue(queue);
			time += x->remining_burst_time;
			x->completion_Time = time;
			x->Turn_Around_Time = time - x->Arrival_Time;
			x->Waiting_Time = x->Turn_Around_Time - x->Burst_Time;
			x->remining_burst_time = 0;
			Number_Process_left--;
		}
		if (isEmpty(queue) && n < No_process) {
			time = Processes[n].Arrival_Time;
			enqueue(queue, &Processes[n]);
			n++;
		}
	}







	printf("total time taken is %d\n", time);
	int Avg_Waiting_time = 0;
	int Avg_turn_time = 0;
	printf("             id    ArrivalTime        BurstTime     CompletetionTime TurnAroundTime     WaitingTime\n");
	for (int i = 0; i < No_process; i++) {
		printf("%15d %15d %15d %20d %15d %15d\n", Processes[i].id, Processes[i].Arrival_Time, Processes[i].Burst_Time, Processes[i].completion_Time, Processes[i].Turn_Around_Time, Processes[i].Waiting_Time);
		Avg_Waiting_time += Processes[i].Waiting_Time;
		Avg_turn_time += Processes[i].Turn_Around_Time;
	}
	printf("Avg Waiting time : %0.3f\n", (float)Avg_Waiting_time / No_process);
	printf("Avg TAT time : %0.3f\n", (float)Avg_turn_time / No_process);
	_getch();
	return 0;
}
