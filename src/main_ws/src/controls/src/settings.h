#ifndef _SETTINGS_H
#define _SETTINGS_H

/**
 * @defgroup dmpMac Dump Macros
 * Macros and settings related to the dump subsystem
 */
/**
 * @defgroup drvMac Drive Macros
 * Macros and settings related to the drivetrain subsystem
 */

/**
 * @ingroup dmpMac drvMac
 * @brief Amount of velocity to ignore
 */
#define DEADZONE_SIZE 0.1f

/**
 * @ingroup dmpMac
 * @brief Topic name given to dump communications
 */
#define DUMP_TOPIC "topic"
/**
 * @ingroup dmpMac
 * @brief Amount of motors used for the dump subsystem
 */
#define DUMP_COUNT 2
/**
 * @ingroup drvMac
 * @brief Use when referring to the left dump motor
 */
#define DUMP_L_MOTOR 0
/**
 * @ingroup drvMac
 * @brief Use when referring to the right dumpmotor
 */
#define DUMP_R_MOTOR 1

/**
 * @ingroup drvMac
 * @brief Topic name given to drive communications
 */
#define DRIVE_TOPIC "joy"
/**
 * @ingroup drvMac
 * @brief Amount of motors used by the drive subsystem
 */
#define DRIVE_COUNT 2
/**
 * @ingroup drvMac
 * @brief Use when referring to the left drive motor
 */
#define DRIVE_L_MOTOR 0
/**
 * @ingroup drvMac
 * @brief Use when referring to the right drive motor
 */
#define DRIVE_R_MOTOR 1

#endif