/*
 * common.h
 *
 *  Created on: Apr 8, 2016
 *      Author: lime-lab+sam
 */

#ifndef COMMON_H_
#define COMMON_H_

// Number of values for each dimension
#define V_THETA_MAX								1000
#define V_PHI_MAX								1000
#define V_R_MAX									5200

// Amount to increment each dimension by for each step
#define V_THETA_INC							(45/V_THETA_MAX)/360*2*M_PI  /* distribute across 45 degrees */
#define V_PHI_INC							(45/V_PHI_MAX)/360*2*M_PI    /* distribute across 45 degrees */
#define V_R_INC								0.2/V_R_MAX                  /* distribute across 0.2 meters */

/* size of a volume dataset.  */
#define DATASET_SIZE 						V_THETA_MAX*V_PHI_MAX*V_R_MAX
#define FILENAME							"/dev/urandom"

#endif /* COMMON_H_ */
