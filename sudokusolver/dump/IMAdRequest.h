/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSDictionary, NSString;

@interface IMAdRequest : _ADBannerContentSizeIdentifierLandscape
{
    BOOL _testMode;
    BOOL _hasAdAutoRefreshed;
    NSString *_keywords;
    NSDictionary *_paramsDictionary;
    int _adUnitId;
    int _adType;
    unsigned int _numAds;
    NSString *_overridePublisherAppId;
    NSString *_hRefTag;
    NSString *_hRefKey;
    NSString *_ruleId;
    NSString *_placementSize;
    long long _slotID;
}

+ (id)request;
- (void)setPlacementSize:(id)fp8;
- (id)placementSize;
- (void)setRuleId:(id)fp8;
- (id)ruleId;
- (void)setHRefKey:(id)fp8;
- (id)hRefKey;
- (void)setHRefTag:(id)fp8;
- (id)hRefTag;
- (void)setOverridePublisherAppId:(id)fp8;
- (id)overridePublisherAppId;
- (void)setNumAds:(unsigned int)fp8;
- (unsigned int)numAds;
- (void)setAdType:(int)fp8;
- (int)adType;
- (void)setSlotID:(long long)fp8;
- (long long)slotID;
- (void)setAdUnitId:(int)fp8;
- (int)adUnitId;
- (void)setHasAdAutoRefreshed:(BOOL)fp8;
- (BOOL)hasAdAutoRefreshed;
- (void)setTestMode:(BOOL)fp8;
- (BOOL)testMode;
- (void)setParamsDictionary:(id)fp8;
- (id)paramsDictionary;
- (void)setKeywords:(id)fp8;
- (id)keywords;
- (void).cxx_destruct;
- (BOOL)localWiFiAvailable;
- (id)init;

@end

