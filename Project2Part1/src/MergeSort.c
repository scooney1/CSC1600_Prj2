/*
 * MergeSort.c
 *
 *  Created on: Nov 3, 2017
 *      Author: scooney
 */

#include "Student.h"

void Merge(Student a1[ ], long f, long l, long pageSize) {
	Student temp[(l-f+1)];
	long m = (f + l) / 2;
	long i1 = 0;
	long i2 = f;
	long i3 = m + 1;
	long page1, page2, page3, page4, page0, pagebase;

	pagebase = 0;
	FILE* result = fopen("merge_results.txt","w");            // Open merge_results.txt.
	page0 = (long) &a1[i1] / pageSize - pagebase;
	page1 = (long) &a1[i2] / pageSize - pagebase;
	page2 = (long) &a1[i3] / pageSize - pagebase;
	page3 = (long) &a1[m] / pageSize - pagebase;
	page4 = (long) &a1[l] / pageSize - pagebase;
	fprintf(result,"%ld\n",page0);
	fprintf(result,"%ld\n",page1);
	fprintf(result,"%ld\n",page2);
	fprintf(result,"%ld\n",page3);
	fprintf(result,"%ld\n",page4);
	while((i2 <= m) && (i3 <= l)) {

		page1 = (long) &a1[i2] / pageSize - pagebase;
		page2 = (long) &a1[i3] / pageSize - pagebase;
		page3 = (long) &a1[m] / pageSize - pagebase;
		page4 = (long) &a1[l] / pageSize - pagebase;
		fprintf(result,"%ld\n",page0);
		fprintf(result,"%ld\n",page1);
		fprintf(result,"%ld\n",page2);
		fprintf(result,"%ld\n",page3);
		fprintf(result,"%ld\n",page4);
		if(a1[i2].number < a1[i3].number) {

			temp[i1++] = a1[i2++];
			page1 = (long) &a1[i2] / pageSize - pagebase;
			page2 = (long) &a1[i3] / pageSize - pagebase;
			fprintf(result,"%ld\n",page0);
			fprintf(result,"%ld\n",page1);
			fprintf(result,"%ld\n",page2);

		} else {

			temp[i1++] = a1[i3++];
			page1 = (long) &a1[i2] / pageSize - pagebase;
			page2 = (long) &a1[i3] / pageSize - pagebase;
			fprintf(result,"%ld\n",page0);
			fprintf(result,"%ld\n",page1);
			fprintf(result,"%ld\n",page2);

		}
	}

	while(i2 <= m) {

		temp[i1++] = a1[i2++];
		page1 = (long) &a1[i2] / pageSize - pagebase;
		page3 = (long) &a1[m] / pageSize - pagebase;
		fprintf(result,"%ld\n",page1);
		fprintf(result,"%ld\n",page3);

	}

	while(i3 <= l) {

		temp[i1++] = a1[i3++];
		page2 = (long) &a1[i3] / pageSize - pagebase;
		page4 = (long) &a1[l] / pageSize - pagebase;
		fprintf(result,"%ld\n",page2);
		fprintf(result,"%ld\n",page4);

	}


	for(i1 = 0; i1 < (l-f+1); i1++) {

		a1[f + i1] = temp[i1];

	}

	fclose(result);
}

void MergeSort(Student d[], long f, long l) {

	if(f < l) {
		long m = (f + l) / 2;

		MergeSort(d, f, m);
		MergeSort(d, m+1, l);
		Merge(d, f, l, pageSize);

	}
}
