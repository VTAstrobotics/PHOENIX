#ifndef _SETTINGS_H
#define _SETTINGS_H

/**
 * @defgroup dmpMac Dump Macros
 * Macros and settings related to the dump subsystem
 */

/**
 * @ingroup dmpMac
 * @brief Amount of velocity to ignore
 */
#define DEADZONE_SIZE 0.1f

#define DRIVE_COUNT 2

/**
 * @brief Determine if two floats are about equal
 */
#define APPROX(f1, f2) \
    (f1 > f2 ? f1 - f2 < APPROX_FUDGE : f2 - f1 < APPROX_FUDGE)
#define APPROX_FUDGE 0.001f

#endif