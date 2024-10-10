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
 * @defgroup uart UART Macros
 * Macros and settings related to the UART node
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
 * @ingroup dmpMac drvMac digMac teleop uart
 * @brief Standard quality of service used by nodes
 */
#define QOS 10

/**
 * @ingroup dmpMac
 * @brief Topic name given to dump communications
 */
#define DUMP_TOPIC "dump"

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
 * @ingroup uart
 * @brief Topic name given to the UART node
 */
#define UART_TOPIC "uart"
/**
 * @ingroup uart
 * @brief Path to UART 'file' on jetson nano
 */
#define UART_PATH "/dev/ttyTHS1"
/**
 * @ingroup uart
 * @brief Baud rate for UART communications
 */
#define BAUD_RATE B1152000
/** @ingroup uart
 *  @brief Settings for the UART serial file descriptor
 */
#define UART_FD_SETTINGS O_RDWR | O_NOCTTY | O_NONBLOCK
/**
 * @ingroup uart
 * @brief Length of the UART receive buffer
 */
#define RX_BUFFER_LEN 512
/**
 * @ingroup uart
 * @brief Length of the UART transmit buffer
 */
#define TX_BUFFER_LEN 512

/**
 * @ingroup teleop
 * @brief Topic name given to the distributor communications
 */
#define DISTRIB_TOPIC "joy"

#define DPAD_ACTIVATION_DISTANCE 0.5

/* Key bindings for current robot (2023-2024) */
#define CTRL_STOP_SEQ_1 BUTTON_BACK
#define CTRL_STOP_SEQ_2 BUTTON_START
#define CTRL_STOP_SEQ_3 BUTTON_MANUFACTURER


/**********************************************************************
 *                                                                    *
 * Drive controls                                                     *
 *                                                                    *
 * RT drives forwards; LT drives backwards                            *
 * Left stick x-axis controls turning                                 *
 *                                                                    *
 **********************************************************************/
#define CTRL_DRIVE_FWD AXIS_RTRIGGER
#define CTRL_DRIVE_BCK AXIS_LTRIGGER
#define CTRL_DRIVE_TRN AXIS_LEFTX

/**********************************************************************
 *                                                                    *
 * Dig controls                                                       *
 * LB extends (lower dig bucket); RB retracts.                        *
 * LB | RB | Output                                                   *
 * ----------------                                                   *
 *  0 |  0 | 0                                                        *
 *  0 |  1 | -1                                                       *
 *  1 |  0 | 1                                                        *
 *  1 |  1 | 0                                                        *
 *                                                                    *
 * Right stick y-axis dictates the rotation of the dig bucket         *
 *                                                                    *
 **********************************************************************/
#define CTRL_DIG_BUCKET AXIS_RIGHTY
#define CTRL_DIG_UP BUTTON_RBUMPER
#define CTRL_DIG_DOWN BUTTON_LBUMPER

/**********************************************************************
 *                                                                    *
 * Dump controls                                                      *
 * Manual controls using the x axis of the dpad                       *
 * Automatic sequences using buttons                                  *
 *                                                                    *
 **********************************************************************/
#define CTRL_DUMP_LINS AXIS_DPAD_X

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
