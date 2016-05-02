/*
 * cl_util.h
 *
 *  Created on: Apr 8, 2016
 *      Author: lime-lab+sam
 */

#ifndef CL_UTIL_H_
#define CL_UTIL_H_

int cl_load(char* cl_file, char** buf);
void cl_free(char** buf);

#endif /* CL_UTIL_H_ */
