/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSUserDefaults;

@interface GADGestureIdUtil : _ADBannerContentSizeIdentifierLandscape
{
    NSUserDefaults *userDefaults_;
}

+ (BOOL)isOSAtLeastMajor:(long)fp8 minor:(long)fp12 bug:(long)fp16;
+ (void)getOSMajor:(int *)fp8 minor:(int *)fp12 bugFix:(int *)fp16;
+ (id)sharedInstance;
- (void)setUserDefaults:(id)fp8;
- (id)userDefaults;
- (BOOL)deviceOptedOut;
- (id)deviceIdentifierType;
- (id)deviceIdentifier;
- (id)osVersion;
- (void)dealloc;
- (id)init;

@end

