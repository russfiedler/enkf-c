/******************************************************************************
 *
 * File:        model2obs.h        
 *
 * Created:     12/2012
 *
 * Author:      Pavel Sakov
 *              Bureau of Meteorology
 *
 * Description:
 *
 * Revisions:
 *
 *****************************************************************************/

#if !defined(_MODEL2OBS_H)

#include "dasystem.h"

void H_surf_standard(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, char varname[], void* psrc, ENSOBSTYPE dst[]);
void H_sla_standard(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, char varname[], void* psrc, ENSOBSTYPE dst[]);
void H_subsurf_standard(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, char varname[], void* psrc, ENSOBSTYPE dst[]);
void H_subsurf_point(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, char varname[], void* psrc, ENSOBSTYPE dst[]);

#define _MODEL2OBS_H
#endif