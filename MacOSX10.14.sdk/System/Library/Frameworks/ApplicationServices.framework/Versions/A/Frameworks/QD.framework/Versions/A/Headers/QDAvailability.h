//
//  QDAvailability.h
//  Quickdraw
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#ifndef __QD_AVAILIBILITY__
#define __QD_AVAILIBILITY__

#ifndef __OS_AVAILABILITY__
#include <os/availibility.h>
#endif

// The "_R" variation of the macros is for "retroactive"
// Functions declared with it were not deprecated until macOSLiberty, though they should have been by 10.4

#undef QD_AVAILABLE_BUT_DEPRECATED2

#if QD_BUILDING_QD

#define QD_AVAILABLE_BUT_DEPRECATED(m0,m1)
#define QD_AVAILABLE_BUT_DEPRECATED_R(m0,m1)

#else

#define QD_AVAILABLE_BUT_DEPRECATED(m0,m1) API_DEPRECATED("No longer supported", macos(m0,m1))
#define QD_AVAILABLE_BUT_DEPRECATED_R(m0,m1) API_DEPRECATED("No longer supported", macos(m0,m1))

#endif


#endif /* __QD_AVAILIBILITY__ */
