/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "GADCustomEventBannerDelegate-Protocol.h"
#import "GADCustomEventInterstitialDelegate-Protocol.h"
#import "GADMAdNetworkAdapter-Protocol.h"

@interface GADMAdapterCustomEvents : _ADBannerContentSizeIdentifierLandscape <GADMAdNetworkAdapter, GADCustomEventBannerDelegate, GADCustomEventInterstitialDelegate>
{
    id <GADMAdNetworkConnector> _connector;
    id <GADCustomEventBanner> _customEventBanner;
    id <GADCustomEventInterstitial> _customEventInterstitial;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
- (void)setCustomEventInterstitial:(id)fp8;
- (id)customEventInterstitial;
- (void)setCustomEventBanner:(id)fp8;
- (id)customEventBanner;
- (void)setConnector:(id)fp8;
- (id)connector;
- (void)customEventInterstitialWillLeaveApplication:(id)fp8;
- (void)customEventInterstitialDidDismiss:(id)fp8;
- (void)customEventInterstitialWillDismiss:(id)fp8;
- (void)customEventInterstitialWillPresent:(id)fp8;
- (void)customEventInterstitial:(id)fp8 didFailAd:(id)fp12;
- (void)customEventInterstitial:(id)fp8 didReceiveAd:(id)fp12;
- (void)customEventBannerWillLeaveApplication:(id)fp8;
- (void)customEventBannerDidDismissModal:(id)fp8;
- (void)customEventBannerWillDismissModal:(id)fp8;
- (void)customEventBannerWillPresentModal:(id)fp8;
- (id)viewControllerForPresentingModalView;
- (void)customEventBanner:(id)fp8 clickDidOccurInAd:(id)fp12;
- (void)customEventBanner:(id)fp8 didFailAd:(id)fp12;
- (void)customEventBanner:(id)fp8 didReceiveAd:(id)fp12;
- (void)callBackToConnectorWithError:(id)fp8 isInterstitial:(BOOL)fp12;
- (void)dealloc;
- (void)presentInterstitialFromRootViewController:(id)fp8;
- (BOOL)isBannerAnimationOK:(int)fp8;
- (void)stopBeingDelegate;
- (void)getInterstitial;
- (void)getBannerWithSize:(struct GADAdSize)fp8;
- (id)customEventWithCredentials:(id)fp8 isInterstitial:(BOOL)fp12;
- (id)initWithGADMAdNetworkConnector:(id)fp8;

@end

