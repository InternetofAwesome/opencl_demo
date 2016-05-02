#include "common.h"

__kernel void voxel_compute(__constant unsigned char* sensor_data, __global float* voxels,
		unsigned char x, unsigned char y)
{
//	__private unsigned int theta = get_global_id(0);
//	__private unsigned int phi = get_global_id(1);
//	__private unsigned int r = get_global_id(2);
//	__private unsigned int index = theta*V_THETA*V_PHI +
//			phi*V_PHI + r;
//	__private float voxel_distance, stream_index, stream_interp;
//
//	unisgned int i, j;
//
//	for(i=0; i<T)
//	voxel_distance = pow(r*sin((float)theta)-x*T_SPACING_X, 2) +
//		pow(r*sin((float)phi)-y*T_SPACING_Y, 2) +
//		pow(r*cos((float)theta),2);
//	voxel_distance = sqrt(voxel_distance);
//	//number distance/maximum distance*number of radial
//	//voxels + (x val of sensor * y val of sensor)
//	stream_index = voxel_distance/V_MAX_R*V_R;
//	stream_interp = (float)stream_index - floor(stream_index);
//	stream_index += x*T_NUM_X+y;
//	voxels[index] += (float)sensor_data[(int)stream_index] +
//	(sensor_data[(int)stream_index] - sensor_data[(int)stream_index+1]) *
//	stream_interp;
}
