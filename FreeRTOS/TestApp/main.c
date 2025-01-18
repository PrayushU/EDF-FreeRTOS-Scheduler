
#include "main.h"

#define CAPACITY 	4 		/* assuming the capacity of both tasks are the same*/

#define PERIOD_A 	5
#define PERIOD_B 	9

void Task_A(void *pvParameters)
{

	volatile int ctr = CAPACITY;
	TickType_t xWakeTime =0 ;

	while(1)
	{
	 
	 TickType_t xTickCount = xTaskGetTickCount();
	 TickType_t xTickNow;

		while(ctr !=0)
		{
			xTickNow = xTaskGetTickCount();
			if(xTickNow >xTickCount)
			{
				xTickCount=xTickNow;
				ctr--; 				/* One tick completed */
			}
		}

		ctr= CAPACITY;

   		vTaskDelayUntil( &xWakeTime, PERIOD_A);  /* Wait till next cycle */

	}
	
}

void Task_B(void *pvParameters)
{

	volatile int ctr = CAPACITY;
	TickType_t xWakeTime =0 ;


	while(1)
	{
	 
	 TickType_t xTickCount = xTaskGetTickCount();
	 TickType_t xTickNow;

		while(ctr !=0)
		{
			xTickNow = xTaskGetTickCount();
			if(xTickNow >xTickCount)
			{
				xTickCount=xTickNow;
				ctr--; 				/* One tick completed */
			}
		}

		ctr= CAPACITY;
   		vTaskDelayUntil( &xWakeTime, PERIOD_B);  /* Wait till next cycle */


	}
	
}


void main()
{
	SystemInit();
	
	xTaskPeriodicCreate((TaskFunction_t) Task_A, (const char *) "Task - A",configMINIMAL_STACK_SIZE, NULL,1, NULL, PERIOD_A );
	xTaskPeriodicCreate((TaskFunction_t) Task_B, (const char *) "Task - B",configMINIMAL_STACK_SIZE, NULL,1, NULL, PERIOD_B );

	vTaskStartScheduler(); // Start the Scheduler

	while(1); // will never reach here
}
