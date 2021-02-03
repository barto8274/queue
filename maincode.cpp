#include "queue.h"
#include<iostream>

int main() 
try {
	QueueList lista;
	QueueList *queue = &lista;
	
	QueueList_pushfront(queue,1);
	QueueList_pushfront(queue,2);
	//QueueList_pushback(queue,3);
	//QueueList_pushback(queue,4);
	
	//std::cout << QueueList_lenght(queue) << std::endl;
	
	
	
	QueueList_print(queue);
}

catch (std::string s) {
	std::cerr << s << std::endl;
}
