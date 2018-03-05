/*
 * Student.h
 *
 *  Created on: Oct 5, 2017
 *      Author: Sam
 */

//
// This code contains modified code from F. McGeary.
//

#ifndef SRC_STUDENT_H_
#define SRC_STUDENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct student {
	long number;
	char name[24];
	char password[12];
} Student;

void BubbleSort(Student a[], long array_size, long pageSize);

#endif /* SRC_STUDENT_H_ */
