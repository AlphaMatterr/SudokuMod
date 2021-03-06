/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray;

@interface GADRequest : _ADBannerContentSizeIdentifierLandscape <NSCopying>
{
    BOOL _testing;
    NSDictionary *_mediationExtras;
    NSArray *_testDevices;
    int _gender;
    NSDate *_birthday;
    NSMutableArray *_keywords;
}

+ (id)sdkVersion;
+ (id)allocWithZone:(struct _NSZone *)fp8;
+ (id)alloc;
+ (id)request;
+ (id)extendedSDKVersionNumber;
+ (id)sdkVersionIdentifiers;
+ (id)sdkVersionMetadata;
- (void)setTesting:(BOOL)fp8;
- (BOOL)isTesting;
- (void)setKeywords:(id)fp8;
- (id)keywords;
- (void)setBirthday:(id)fp8;
- (id)birthday;
- (void)setGender:(int)fp8;
- (int)gender;
- (void)setTestDevices:(id)fp8;
- (id)testDevices;
- (void)setMediationExtras:(id)fp8;
- (id)mediationExtras;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)dealloc;
- (void)tagForChildDirectedTreatment:(BOOL)fp8;
- (void)removeAdNetworkExtrasFor:(Class)fp8;
- (id)adNetworkExtrasFor:(Class)fp8;
- (void)registerAdNetworkExtras:(id)fp8;
- (void)setAdditionalParameters:(id)fp8;
- (id)additionalParameters;
- (void)addKeyword:(id)fp8;
- (void)setLocationWithDescription:(id)fp8;
- (void)setLocationWithLatitude:(float)fp8 longitude:(float)fp12 accuracy:(float)fp16;
- (void)setBirthdayWithMonth:(int)fp8 day:(int)fp12 year:(int)fp16;

@end

