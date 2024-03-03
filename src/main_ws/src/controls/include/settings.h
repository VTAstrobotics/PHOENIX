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
 * @defgroup teleop Teleop Macros
 * Macros and settings related to the teleop nodes
 */

/**
 * @ingroup teleop
 * @brief Amount of error to place in axis controls
 */
#define DEADZONE_SIZE 0.1f

/**
 * @ingroup dmpMac drvMac digMac teleop
 * @brief Standard quality of service used by nodes
 */
#define QOS 10

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

#define MAX_SPEED 5

#define DPAD_ACTIVATION_DISTANCE 0.5

/* Key bindings for current robot (2023-2024) */
#define CTRL_DUMP_ERRORS BUTTON_B
#define CTRL_CLEAR_ERRORS BUTTON_LBUMPER

#define CTRL_STOP_SEQ_1 BUTTON_BACK
#define CTRL_STOP_SEQ_2 BUTTON_START
#define CTRL_STOP_SEQ_3 BUTTON_MANUFACTURER

#define CTRL_TANK_L_TREAD AXIS_LEFTY
#define CTRL_TANK_R_TREAD AXIS_RIGHTY

#define CTRL_BUCKET AXIS_DPAD_Y
#define CTRL_SCOOP AXIS_DPAD_X

/* Indexes for each button on xbox controller, NEVER USE DIRECTLY */
#define BUTTON_A 0
#define BUTTON_B 1
#define BUTTON_X 2
#define BUTTON_Y 3
#define BUTTON_BACK 6
#define BUTTON_MANUFACTURER 8
#define BUTTON_START 7
#define BUTTON_LSTICK 9
#define BUTTON_RSTICK 10
#define BUTTON_LBUMPER 4
#define BUTTON_RBUMPER 5

#define AXIS_LEFTX 0
#define AXIS_LEFTY 1
#define AXIS_RIGHTX 3
#define AXIS_RIGHTY 4
#define AXIS_LTRIGGER 2
#define AXIS_RTRIGGER 5
#define AXIS_DPAD_X 6
#define AXIS_DPAD_Y 7

#endif