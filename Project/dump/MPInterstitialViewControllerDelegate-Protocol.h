/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPInterstitialViewControllerDelegate <NSObject>
- (void)interstitialWillLeaveApplication:(id)fp8;
- (void)interstitialDidDisappear:(id)fp8;
- (void)interstitialWillDisappear:(id)fp8;
- (void)interstitialDidAppear:(id)fp8;
- (void)interstitialWillAppear:(id)fp8;
- (void)interstitialDidFailToLoadAd:(id)fp8;
- (void)interstitialDidLoadAd:(id)fp8;
- (id)location;
- (id)adUnitId;
@end

