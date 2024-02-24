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
 * @defgroup digMac Dig Macros
 * Macros and settings related to the dig subsystem
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
#define DUMP_TOPIC "dump"
/**
 * @ingroup dmpMac
 * @brief Amount of actuators used for the dump subsystem
 */
#define DUMP_A_COUNT 2
/**
 * @ingroup drvMac
 * @brief Use when referring to the left dump actuator
 */
#define DUMP_L_LIN 0
/**
 * @ingroup drvMac
 * @brief Use when referring to the right dump actuator
 */
#define DUMP_R_LIN 1

/**
 * @ingroup drvMac
 * @brief Topic name given to drive communications
 */
#define DRIVE_TOPIC "drive"
/**
 * @ingroup drvMac
 * @brief Amount of motors used by the drive subsystem
 */
#define DRIVE_M_COUNT 2
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

/**
 * @ingroup digMac
 * @brief Topic name given to drive communications
 */
#define DIG_TOPIC "dig"
/**
 * @ingroup digMac
 * @brief Amount of motors used by the dig subsystem
 */
#define DIG_M_COUNT 2
/**
 * @ingroup digMac
 * @brief Use when referring to the left dig motor
 */
#define DIG_L_MOTOR 0
/**
 * @ingroup digMac
 * @brief Use when referring to the right dig motor
 */
#define DIG_R_MOTOR 1
/**
 * @ingroup digMac
 * @brief Amount of actuators used by the dig subsystem
 */
#define DIG_A_COUNT 2
/**
 * @ingroup digMac
 * @brief Use when referring to the left dig actuator
 */
#define DIG_L_LIN 0
/**
 * @ingroup digMac
 * @brief Use when referring to the right dig actuator
 */
#define DIG_R_LIN 1

/**
 * @ingroup teleop
 * @brief Topic name given to the distributor communications
 */
#define DISTRIB_TOPIC "joy"

#endif