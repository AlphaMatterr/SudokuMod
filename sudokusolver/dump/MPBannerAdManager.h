/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "MPAdServerCommunicatorDelegate-Protocol.h"
#import "MPBannerAdapterDelegate-Protocol.h"

@class MPAdConfiguration, MPAdServerCommunicator, MPBaseBannerAdapter, MPTimer, UIView;

@interface MPBannerAdManager : _ADBannerContentSizeIdentifierLandscape <MPAdServerCommunicatorDelegate, MPBannerAdapterDelegate>
{
    BOOL _adActionInProgress;
    BOOL _automaticallyRefreshesContents;
    id <MPBannerAdManagerDelegate> _delegate;
    MPAdServerCommunicator *_communicator;
    MPBaseBannerAdapter *_onscreenAdapter;
    MPBaseBannerAdapter *_requestingAdapter;
    MPTimer *_refreshTimer;
    int _currentOrientation;
    UIView *_requestingAdapterAdContentView;
    MPAdConfiguration *_requestingConfiguration;
}

- (void)setAutomaticallyRefreshesContents:(BOOL)fp8;
- (BOOL)automaticallyRefreshesContents;
- (void)setRequestingConfiguration:(id)fp8;
- (id)requestingConfiguration;
- (void)setRequestingAdapterAdContentView:(id)fp8;
- (id)requestingAdapterAdContentView;
- (void)setCurrentOrientation:(int)fp8;
- (int)currentOrientation;
- (void)setAdActionInProgress:(BOOL)fp8;
- (BOOL)adActionInProgress;
- (void)setRefreshTimer:(id)fp8;
- (id)refreshTimer;
- (void)setRequestingAdapter:(id)fp8;
- (id)requestingAdapter;
- (void)setOnscreenAdapter:(id)fp8;
- (id)onscreenAdapter;
- (void)setCommunicator:(id)fp8;
- (id)communicator;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)customEventActionDidEnd;
- (void)customEventActionWillBegin;
- (void)customEventDidFailToLoadAd;
- (void)customEventDidLoadAd;
- (void)userWillLeaveApplicationFromAdapter:(id)fp8;
- (void)userActionDidFinishForAdapter:(id)fp8;
- (void)userActionWillBeginForAdapter:(id)fp8;
- (void)adapter:(id)fp8 didFailToLoadAdWithError:(id)fp12;
- (void)adapter:(id)fp8 didFinishLoadingAd:(id)fp12;
- (void)presentRequestingAdapter;
- (BOOL)requestingAdapterIsReadyToBePresented;
- (id)location;
- (int)allowedNativeAdsOrientation;
- (id)viewControllerForPresentingModalView;
- (id)bannerDelegate;
- (id)banner;
- (void)didFailToLoadAdapterWithError:(id)fp8;
- (void)communicatorDidFailWithError:(id)fp8;
- (void)communicatorDidReceiveAdConfiguration:(id)fp8;
- (void)refreshTimerDidFire;
- (void)scheduleRefreshTimer;
- (void)rotateToOrientation:(int)fp8;
- (void)loadAdWithURL:(id)fp8;
- (void)startAutomaticallyRefreshingContents;
- (void)stopAutomaticallyRefreshingContents;
- (void)applicationWillEnterForeground;
- (void)forceRefreshAd;
- (void)loadAd;
- (BOOL)loading;
- (void)dealloc;
- (id)initWithDelegate:(id)fp8;

@end

