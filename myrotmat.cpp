/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * myrotmat.cpp
 *
 * Code generation for function 'myrotmat'
 *
 */

/* Include files */
#include <cmath>
#include <string.h>
#include "myrotmat.h"

/* Function Definitions */
void myrotmat(double theta, double axis, double R_data[], int R_size[2])
{
  int b_index;
  int j;
  int exitg3;
  static const char varargin_1[2] = { 'x', 'X' };

  int exitg2;
  double dv0[9];
  double d0;
  static const char varargin_2[2] = { 'y', 'Y' };

  boolean_T exitg1;
  static const char varargin_3[2] = { 'z', 'Z' };

  b_index = -1;
  j = 0;
  do {
    exitg3 = 0;
    if (j < 2) {
      if (varargin_1[j] == axis) {
        b_index = 0;
        exitg3 = 1;
      } else {
        j++;
      }
    } else {
      j = 0;
      exitg3 = 2;
    }
  } while (exitg3 == 0);

  if (exitg3 == 1) {
  } else {
    do {
      exitg2 = 0;
      if (j < 2) {
        if (varargin_2[j] == axis) {
          b_index = 1;
          exitg2 = 1;
        } else {
          j++;
        }
      } else {
        j = 0;
        exitg2 = 2;
      }
    } while (exitg2 == 0);

    if (exitg2 == 1) {
    } else {
      exitg1 = false;
      while ((!exitg1) && (j < 2)) {
        if (varargin_3[j] == axis) {
          b_index = 2;
          exitg1 = true;
        } else {
          j++;
        }
      }
    }
  }

  switch (b_index) {
   case 0:
    dv0[0] = 1.0;
    dv0[3] = 0.0;
    dv0[6] = 0.0;
    dv0[1] = 0.0;
    dv0[4] = std::cos(theta);
    dv0[7] = -std::sin(theta);
    dv0[2] = 0.0;
    dv0[5] = std::sin(theta);
    dv0[8] = std::cos(theta);
    R_size[0] = 3;
    R_size[1] = 3;
    memcpy(&R_data[0], &dv0[0], 9U * sizeof(double));
    break;

   case 1:
    d0 = std::cos(theta);
    dv0[0] = d0;
    dv0[3] = 0.0;
    dv0[6] = std::sin(theta);
    dv0[1] = 0.0;
    dv0[4] = 1.0;
    dv0[7] = 0.0;
    dv0[2] = -std::sin(theta);
    dv0[5] = 0.0;
    dv0[8] = d0;
    R_size[0] = 3;
    R_size[1] = 3;
    memcpy(&R_data[0], &dv0[0], 9U * sizeof(double));
    break;

   case 2:
    dv0[0] = std::cos(theta);
    d0 = std::sin(theta);
    dv0[3] = -d0;
    dv0[6] = 0.0;
    dv0[1] = d0;
    dv0[4] = std::cos(theta);
    dv0[7] = 0.0;
    dv0[2] = 0.0;
    dv0[5] = 0.0;
    dv0[8] = 1.0;
    R_size[0] = 3;
    R_size[1] = 3;
    memcpy(&R_data[0], &dv0[0], 9U * sizeof(double));
    break;

   default:
    R_size[0] = 0;
    R_size[1] = 0;
    break;
  }
}

/* End of code generation (myrotmat.cpp) */
