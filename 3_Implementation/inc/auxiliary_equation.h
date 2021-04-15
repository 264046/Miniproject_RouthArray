/**
 * @file auxiliary_equation.h
 * @author anoop
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __AUXILIARY_EQUATION_H__
#define __AUXILIARY_EQUATION_H__

/**
 * @brief Generates auxiliary equation and replaces the last row of 0s of Routh array
 * 
 * @param rth 
 * @param i 
 * @return float* 
 */
float* auxiliary_equation(float* rth,int i);

#endif  /* #define __AUXILIARY_EQUATION_H__ */