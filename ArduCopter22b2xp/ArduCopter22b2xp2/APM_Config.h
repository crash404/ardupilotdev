// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// Example config file. Take a look at config.h. Any term define there can be overridden by defining it here.

// GPS is auto-selected

#define FRAME_CONFIG HELI_FRAME_H1

/*
	options:
	QUAD_FRAME
	TRI_FRAME
	HEXA_FRAME
	Y6_FRAME
	OCTA_FRAME
	HELI_FRAME
	HELI_FRAME_H1
	*/

#include "APM_PID_HIL_JLN.h"  // Config file for the QRO_X quadcopter model for X-Plane by Jean-Louis Naudin
//#include "APM_PID_JLN.h"    // Config file for the real QRO quadcopter model by Jean-Louis Naudin

# define CH7_OPTION	CH7_LAND
	/*
	CH7_DO_NOTHING
	CH7_SET_HOVER
	CH7_FLIP
	CH7_SIMPLE_MODE
	CH7_RTL
	CH7_AUTO_TRIM
	CH7_ADC_FILTER (experimental)
	CH7_SAVE_WP
	CH7_LAND        // JLN update
	*/

#define ACCEL_ALT_HOLD 0		// disabled by default, work in progress

// lets use Manual throttle during Loiter
//#define LOITER_THR			THROTTLE_MANUAL
# define RTL_YAW 			YAW_HOLD

//#define RATE_ROLL_I 	0.18
//#define RATE_PITCH_I	0.18
//#define MOTORS_JD880
//#define MOTORS_JD850


// agmatthews USERHOOKS
// the choice of function names is up to the user and does not have to match these
// uncomment these hooks and ensure there is a matching function un your "UserCode.pde" file
//#define USERHOOK_FASTLOOP userhook_FastLoop();
#define USERHOOK_50HZLOOP userhook_50Hz();
//#define USERHOOK_MEDIUMLOOP userhook_MediumLoop();
//#define USERHOOK_SLOWLOOP userhook_SlowLoop();
//#define USERHOOK_SUPERSLOWLOOP userhook_SuperSlowLoop();
#define USERHOOK_INIT userhook_init();

// the choice of includeed variables file (*.h) is up to the user and does not have to match this one
// Ensure the defined file exists and is in the arducopter directory
#define USERHOOK_VARIABLES "UserVariables.h"

#define CONFIG_APM_HARDWARE APM_HARDWARE_APM1
// enable this for the new 'APM2' hardware
// #define CONFIG_APM_HARDWARE APM_HARDWARE_APM2
// #define APM2_BETA_HARDWARE  // for developers who received an early beta board with the older BMP085

// to enable, set to 1
// to disable, set to 0
#define AUTO_THROTTLE_HOLD 0
