/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class MPAdConfiguration, MPTimer, NSURL;

@interface MPBaseBannerAdapter : _ADBannerContentSizeIdentifierLandscape
{
    id <MPBannerAdapterDelegate> _delegate;
    MPAdConfiguration *_configuration;
    MPTimer *_timeoutTimer;
    NSURL *_impressionTrackingURL;
    NSURL *_clickTrackingURL;
}

- (void)setClickTrackingURL:(id)fp8;
- (id)clickTrackingURL;
- (void)setImpressionTrackingURL:(id)fp8;
- (id)impressionTrackingURL;
- (void)setTimeoutTimer:(id)fp8;
- (id)timeoutTimer;
- (void)setConfiguration:(id)fp8;
- (id)configuration;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)trackClick;
- (void)trackImpression;
- (void)rotateToOrientation:(int)fp8;
- (void)timeout;
- (void)startTimeoutTimer;
- (void)didDisplayAd;
- (void)didStopLoading;
- (void)_getAdWithConfiguration:(id)fp8 containerSize:(struct CGSize)fp12;
- (void)getAdWithConfiguration:(id)fp8 containerSize:(struct CGSize)fp12;
- (void)unregisterDelegate;
- (void)dealloc;
- (id)initWithDelegate:(id)fp8;

@end

