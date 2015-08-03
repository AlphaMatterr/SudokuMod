/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GADMAdNetworkConnector <NSObject>
- (void)adapterWillLeaveApplication:(id)fp8;
- (void)adapterDidDismissInterstitial:(id)fp8;
- (void)adapterWillDismissInterstitial:(id)fp8;
- (void)adapterWillPresentInterstitial:(id)fp8;
- (void)adapterDidDismissFullScreenModal:(id)fp8;
- (void)adapterWillDismissFullScreenModal:(id)fp8;
- (void)adapterWillPresentFullScreenModal:(id)fp8;
- (void)adapter:(id)fp8 clickDidOccurInBanner:(id)fp12;
- (void)adapter:(id)fp8 didFailInterstitial:(id)fp12;
- (void)adapter:(id)fp8 didReceiveInterstitial:(id)fp12;
- (void)adapter:(id)fp8 didFailAd:(id)fp12;
- (void)adapter:(id)fp8 didReceiveAdView:(id)fp12;
- (id)userKeywords;
- (id)userLocationDescription;
- (float)userLocationAccuracyInMeters;
- (float)userLongitude;
- (float)userLatitude;
- (BOOL)userHasLocation;
- (id)userBirthday;
- (int)userGender;
- (id)viewControllerForPresentingModalView;
- (id)networkExtras;
- (BOOL)testMode;
- (id)credentials;
- (id)publisherId;
@end
