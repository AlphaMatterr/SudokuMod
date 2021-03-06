/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSString;

@interface FlurryPLCrashProcessInfo : _ADBannerContentSizeIdentifierLandscape
{
    int _processID;
    NSString *_processName;
    int _parentProcessID;
    struct timeval _startTime;
    BOOL _traced;
}

+ (id)currentProcessInfo;
- (struct timeval)startTime;
- (BOOL)isTraced;
- (int)parentProcessID;
- (id)processName;
- (int)processID;
- (void)dealloc;
- (id)initWithProcessID:(int)fp8;

@end

