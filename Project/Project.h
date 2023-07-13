/*
 * Project.h
 *
 *  Created on: May 5, 2023
 *      Author: Hossam Ragab
 */

#ifndef PROJECT_H_
#define PROJECT_H_

/*------------------------------Functions Prototype---------------------------------------------------*/
enum State{
	Off,
	On
};

typedef struct{

	int VehicleSpeed;
	int RoomTemperature;
	int EngineTemperature;
}System;

void SystemEngineState(char *SystemState);
void SystemEngineStateON(char *SystemON, char *SystemState, enum State *EngineState, int *VehicleSpeed, int *RoomTemperature,enum State *AC, int *EngineTemperature, enum State *EngineTemperatureController);
void SetTrafficLightColor(int *VehicleSpeed);
void SetRoomTemperatureSensor(int *RoomTemperature, enum State *AC);
void SetEngineTemperatureSensor(int *EngineTemperature, enum State *EngineTemperatureController);
void DisplayCurrentVehicleState(enum State *EngineState, int *VehicleSpeed, int *RoomTemperature,enum State *AC, int *EngineTemperature, enum State *EngineTemperatureController);


#endif /* PROJECT_H_ */
