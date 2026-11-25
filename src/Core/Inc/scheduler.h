#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_
#include <stdint.h>

#define SCH_MAX_TASKS     10
#define NO_TASK_ID        0u     // ma ID ko hop le, loi them tac vu, 0u la so 0 unsigned
#define TICK              10     // Tick timer = 10ms

void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
uint32_t SCH_Add_Task(void (*pFunction)(void), uint32_t DELAY, uint32_t PERIOD);  // return ma ID nen uint32_t
uint8_t SCH_Delete_Task(uint32_t TaskID);  // return 1/0 nen uint8_t cho tiet kiem
void SCH_Go_To_Sleep(void);
uint32_t get_time(void);

#endif /* INC_SCHEDULER_H_ */
