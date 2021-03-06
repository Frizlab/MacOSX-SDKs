/*
        NSStatusItem.h
        Application Kit
        Copyright (c) 1997-2001, Apple Computer, Inc.
        All rights reserved.
*/

#import <Foundation/NSObject.h>

@class NSAttributedString;
@class NSImage;
@class NSMenu;
@class NSStatusBar;
@class NSString;
@class NSView;
@class NSWindow;

typedef struct {
    unsigned int customView:1;
    unsigned int highlightMode:1;
    unsigned int reserved:30;
} _SBIFlags;


@interface NSStatusItem : NSObject
{
 @private
    NSStatusBar* _fStatusBar;
    float        _fLength;
    NSWindow*    _fWindow;
    NSView*      _fView;
    int          _fPriority;
    _SBIFlags	 _fFlags;
    long         _fReserved1;
    long         _fReserved2;
    long         _fReserved3;
    long         _fReserved4;
}

- (NSStatusBar*) statusBar;

- (float) length;
- (void) setLength:(float)length;

@end

@interface NSStatusItem (NSStatusItemCommon)

- (SEL) action;
- (void) setAction:(SEL)action;

- (id) target;
- (void) setTarget:(id)target;

- (NSString*) title;
- (void) setTitle:(NSString*)title;

- (NSAttributedString*) attributedTitle;
- (void) setAttributedTitle:(NSAttributedString*)title;

- (NSImage*) image;
- (void) setImage:(NSImage*)image;

- (NSMenu*) menu;
- (void) setMenu:(NSMenu*)menu;

- (BOOL) isEnabled;
- (void) setEnabled:(BOOL)enabled;

- (NSString*) toolTip;
- (void) setToolTip:(NSString*)toolTip;

- (void) setHighlightMode:(BOOL) highlightMode;
- (BOOL) highlightMode;

- (void) sendActionOn:(int)mask;

@end

@interface NSStatusItem (NSStatusItemView)

- (NSView*) view;
- (void) setView:(NSView*)view;

@end