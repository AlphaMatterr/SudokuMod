/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol MPInterstitialAdapterDelegate
- (void)interstitialWillLeaveApplicationForAdapter:(id)fp8;
- (void)interstitialDidExpireForAdapter:(id)fp8;
- (void)interstitialDidDisappearForAdapter:(id)fp8;
- (void)interstitialWillDisappearForAdapter:(id)fp8;
- (void)interstitialDidAppearForAdapter:(id)fp8;
- (void)interstitialWillAppearForAdapter:(id)fp8;
- (void)adapter:(id)fp8 didFailToLoadAdWithError:(id)fp12;
- (void)adapterDidFinishLoadingAd:(id)fp8;
- (id)location;
- (id)interstitialDelegate;
- (id)interstitialAdController;
@end

