/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface MPInterstitialCustomEvent : _ADBannerContentSizeIdentifierLandscape
{
    id <MPInterstitialCustomEventDelegate> delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)showInterstitialFromRootViewController:(id)fp8;
- (BOOL)enableAutomaticImpressionAndClickTracking;
- (void)requestInterstitialWithCustomEventInfo:(id)fp8;

@end

