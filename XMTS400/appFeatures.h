/*
 * Copyright (c) 2004-2007 Crossbow Technology, Inc.
 * All rights reserved.
 * See license.txt file included with the distribution.
 *
 * $Id: appFeatures.h,v 1.1.2.3 2007/04/26 20:19:14 njain Exp $
 */

/**
 * Compile-time flags for defining application specific feature preferences.
 *
 * @file       appFeatures.h
 * @author     Martin Turon
 *
 * @version    2004/8/8         mturon          Initial version
 *
 */
/// FEATURE_LEDS -- powers up the LEDs for debugging purposes
#ifndef FEATURE_LEDS
#define FEATURE_LEDS        1
#endif


/// FEATURE_UART_SEND -- enable serial port debugging of a node
#ifndef FEATURE_UART_SEND
#define FEATURE_UART_SEND   0
#endif

// crossbow sensor board id
// define MTS420 to enable gps. 
//        MTS400 will not send gps packets.

#define  SENSOR_BOARD_ID 0x85               //MTS400 sensor board id

/**
 * Define wiring macros for various application features. 
 */

/** FEATURE_LEDS will enable debugging Leds when set to 1. */
#if FEATURE_LEDS
#define LEDS_COMPONENT	       LedsC,
#define LEDS_WIRING(X)         X.Leds -> LedsC;
#else
#define LEDS_COMPONENT	       NoLeds,
#define LEDS_WIRING(X)         X.Leds -> NoLeds;
#endif

