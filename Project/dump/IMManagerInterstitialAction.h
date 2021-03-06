/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "IMManagerInterstitial.h"

#import "IMAdInterstitialDelegate-Protocol.h"
#import "IMMRuleProcessorDelegate-Protocol.h"

@class IMAnalyticsInterstitial, NSObject<IMMRuleProcessorProtocol>;

@interface IMManagerInterstitialAction : IMManagerInterstitial <IMMRuleProcessorDelegate, IMAdInterstitialDelegate>
{
    IMAnalyticsInterstitial *ltvpInterstitial;
    NSObject<IMMRuleProcessorProtocol> *ruleProcessor;
    int ruleFlow;
}

+ (Class)getRuleProcessorClass;
- (void)setRuleFlow:(int)fp8;
- (int)ruleFlow;
- (void)setRuleProcessor:(id)fp8;
- (id)ruleProcessor;
- (void)setLtvpInterstitial:(id)fp8;
- (id)ltvpInterstitial;
- (void)dealloc;
- (void)interstitial:(id)fp8 didPerformUserInteractionWithParams:(id)fp12;
- (void)interstitialWillLeaveApplication:(id)fp8;
- (void)interstitial:(id)fp8 didFailToPresentScreenWithError:(id)fp12;
- (void)interstitialDidDismissScreen:(id)fp8;
- (void)interstitialWillDismissScreen:(id)fp8;
- (void)interstitialWillPresentScreen:(id)fp8;
- (void)interstitial:(id)fp8 didFailToReceiveAdWithError:(id)fp12;
- (void)interstitialDidFinishRequest:(id)fp8;
- (void)prepareInterstitial:(long long)fp8;
- (void)processor:(id)fp8 prepareSucceeded:(id)fp12;
- (void)processor:(id)fp8 prepareFailedWithError:(id)fp12;
- (void)presentInterstitial:(id)fp8 animated:(BOOL)fp12;
- (void)loadInterstitial;
- (void)loadMInterstitial;
- (void)loadLTVPInterstital;
- (id)initForInterstitial:(id)fp8 withRequest:(id)fp12;

@end

