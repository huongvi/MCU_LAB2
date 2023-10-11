/*
 * LEDMatrix.c
 *
 *  Created on: Oct 10, 2023
 *      Author: Admin
 */

#include "LEDMatrix.h"

void displayLEDMatrix(uint8_t matrix){
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, (matrix & (1U << 0)));
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, (matrix & (1U << 1)));
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, (matrix & (1U << 2)));
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, (matrix & (1U << 3)));
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, (matrix & (1U << 4)));
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, (matrix & (1U << 5)));
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, (matrix & (1U << 6)));
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, (matrix & (1U << 7)));
}
