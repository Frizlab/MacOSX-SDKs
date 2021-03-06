/*
     File:       AE/AEPackObject.h
 
     Contains:   AppleEvents object packing Interfaces.
 
    
 
     Copyright:  � 1991-2008 by Apple Computer, Inc., all rights reserved
 
     Bugs?:      For bug reports, consult the following page on
                 the World Wide Web:
 
                     http://developer.apple.com/bugreporter/
 
*/
#ifndef __AEPACKOBJECT__
#define __AEPACKOBJECT__

#ifndef __APPLEEVENTS__
#include <AE/AppleEvents.h>
#endif



#include <Availability.h>

#if PRAGMA_ONCE
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* These are the object packing routines.  */
/*
 *  CreateOffsetDescriptor()
 *  
 *  Mac OS X threading:
 *    Thread safe since version 10.2
 *  
 *  Availability:
 *    Mac OS X:         in version 10.0 and later in ApplicationServices.framework
 *    CarbonLib:        in CarbonLib 1.0 and later
 *    Non-Carbon CFM:   in ObjectSupportLib 1.0 and later
 */
extern OSErr 
CreateOffsetDescriptor(
  long      theOffset,
  AEDesc *  theDescriptor)                                    __OSX_AVAILABLE_STARTING( __MAC_10_0, __IPHONE_NA );


/*
 *  CreateCompDescriptor()
 *  
 *  Mac OS X threading:
 *    Thread safe since version 10.2
 *  
 *  Availability:
 *    Mac OS X:         in version 10.0 and later in ApplicationServices.framework
 *    CarbonLib:        in CarbonLib 1.0 and later
 *    Non-Carbon CFM:   in ObjectSupportLib 1.0 and later
 */
extern OSErr 
CreateCompDescriptor(
  DescType   comparisonOperator,
  AEDesc *   operand1,
  AEDesc *   operand2,
  Boolean    disposeInputs,
  AEDesc *   theDescriptor)                                   __OSX_AVAILABLE_STARTING( __MAC_10_0, __IPHONE_NA );


/*
 *  CreateLogicalDescriptor()
 *  
 *  Mac OS X threading:
 *    Thread safe since version 10.2
 *  
 *  Availability:
 *    Mac OS X:         in version 10.0 and later in ApplicationServices.framework
 *    CarbonLib:        in CarbonLib 1.0 and later
 *    Non-Carbon CFM:   in ObjectSupportLib 1.0 and later
 */
extern OSErr 
CreateLogicalDescriptor(
  AEDescList *  theLogicalTerms,
  DescType      theLogicOperator,
  Boolean       disposeInputs,
  AEDesc *      theDescriptor)                                __OSX_AVAILABLE_STARTING( __MAC_10_0, __IPHONE_NA );



/*
 *  CreateObjSpecifier()
 *  
 *  Mac OS X threading:
 *    Thread safe since version 10.2
 *  
 *  Availability:
 *    Mac OS X:         in version 10.0 and later in ApplicationServices.framework
 *    CarbonLib:        in CarbonLib 1.0 and later
 *    Non-Carbon CFM:   in ObjectSupportLib 1.0 and later
 */
extern OSErr 
CreateObjSpecifier(
  DescType   desiredClass,
  AEDesc *   theContainer,
  DescType   keyForm,
  AEDesc *   keyData,
  Boolean    disposeInputs,
  AEDesc *   objSpecifier)                                    __OSX_AVAILABLE_STARTING( __MAC_10_0, __IPHONE_NA );


/*
 *  CreateRangeDescriptor()
 *  
 *  Mac OS X threading:
 *    Thread safe since version 10.2
 *  
 *  Availability:
 *    Mac OS X:         in version 10.0 and later in ApplicationServices.framework
 *    CarbonLib:        in CarbonLib 1.0 and later
 *    Non-Carbon CFM:   in ObjectSupportLib 1.0 and later
 */
extern OSErr 
CreateRangeDescriptor(
  AEDesc *  rangeStart,
  AEDesc *  rangeStop,
  Boolean   disposeInputs,
  AEDesc *  theDescriptor)                                    __OSX_AVAILABLE_STARTING( __MAC_10_0, __IPHONE_NA );



#ifdef __cplusplus
}
#endif

#endif /* __AEPACKOBJECT__ */

