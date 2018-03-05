/*
 * Project2Part1.c
 *
 *  Created on: Oct 5, 2017
 *      Author: Sam
 */

//
// This code contains modified code from F. McGeary.
//

#include "Project2Part1.h"
#include "Student.h"

int main(void) {
	Student a[N];
	long b[N];
	srand(555);//time(NULL));
	setbuf(stdout,NULL);
	for (long i = 0; i<N; i++)
	{
		a[i].number = rand() % 10000000;
		b[i] = a[i].number;
	}
	printf("!!! Project 2 -- Part 1!!!\n");

	printf("N is %ld and pageSize is %ld\n",N,pageSize);

	//BubbleSort( a, N, pageSize);
	MergeSort(a,0,N,pageSize);

	long M = 10;
	if ( N < M ) M = N;
	// show that the first few elements are properly sorted
	for (long i = 0;i < M; i++)
		printf("%6ld%8ld%8ld\n",i,a[i].number,b[i]);
	return EXIT_SUCCESS;
}
