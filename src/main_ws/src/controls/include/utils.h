#ifndef _UTILS_H
#define _UTILS_H

/**
 * @brief Determine if two floats are about equal
 */
#define APPROX(f1, f2) \
    (f1 > f2 ? f1 - f2 < APPROX_FUDGE : f2 - f1 < APPROX_FUDGE)

/**
 * @brief Allowed amount of difference for two floats to be equal
 */
#define APPROX_FUDGE 0.001f

#endif
