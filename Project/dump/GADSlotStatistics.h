/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GADStatistics.h"

@class NSString;

@interface GADSlotStatistics : GADStatistics
{
    NSString *_identifier;
}

+ (id)allCounterNames;
+ (id)allTimingNames;
- (id)identifier;
- (id)adapterDurationsParameter;
- (id)adapterExitCodesParameter;
- (void)resetTimingAdapters;
- (void)endTimingAdapterWithExitCode:(int)fp8;
- (void)startTimingAdapter;
- (BOOL)isGoogleAdUrl:(id)fp8;
- (id)updateStatsAndReturnSpamClickURL:(id)fp8;
- (void)setAppOpenInterstitialNoFill;
- (void)setAppOpenInterstitialTimeOut;
- (void)incrementClickCount;
- (void)incrementSSLPageNavigationCount;
- (void)incrementPageNavigationCount;
- (void)setClickBackgroundedApp;
- (void)setBreakOutToSafari;
- (void)setIdentifier:(id)fp8;
- (void)dealloc;
- (id)init;
- (id)parameters;

@end
