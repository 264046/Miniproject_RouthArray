/**
 * @file start_routh_array.h
 * @author anoop
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __START_ROUTH_ARRAY_H__
#define __START_ROUTH_ARRAY_H__

/**
 * @brief initialises routh array using input coefficients and dynamically allocates matrix of required size
 * 
 * @param coeff 
 * @return float* 
 */
float* start_routh_array(float *coeff);

#endif  /* #define __START_ROUTH_ARRAY_H__ */