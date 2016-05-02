/*
 * cl_util.c
 *
 *  Created on: Apr 8, 2016
 *      Author: lime-lab+sam
 */

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

int cl_load(char* cl_file, char** buf)
{
	FILE* buf_file = fopen(cl_file, "r");
	if(!cl_file)
		return 0;
	fseek(buf_file, 0, SEEK_END);
	unsigned int fsize = ftell(buf_file);
	if(!fsize)
		return 0;

	*buf = malloc(fsize);
	if(!*buf)
		return 0;
	fseek(buf_file, 0, 0);
	if(!fread((void*)*buf, fsize, 1, buf_file))
		fsize = 0;
	fclose(buf_file);
	return fsize;
}

void cl_free(char** buf)
{
	free(buf);
}
