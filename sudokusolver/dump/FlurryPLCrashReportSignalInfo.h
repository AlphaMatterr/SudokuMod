/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSString;

@interface FlurryPLCrashReportSignalInfo : _ADBannerContentSizeIdentifierLandscape
{
    NSString *_name;
    NSString *_code;
    unsigned long long _address;
}

- (unsigned long long)address;
- (id)code;
- (id)name;
- (void)dealloc;
- (id)initWithSignalName:(id)fp8 code:(id)fp12 address:(unsigned long long)fp16;

@end
