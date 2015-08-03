/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface IMProductConfigs : _ADBannerContentSizeIdentifierLandscape <NSCopying>
{
    NSDictionary *configDictionary;
    NSString *configURL;
    int configProtocol;
    int expiry;
    int maxRetry;
    NSDate *lastUpdatedTimestamp;
    double retryInterval;
}

- (void)setLastUpdatedTimestamp:(id)fp8;
- (id)lastUpdatedTimestamp;
- (void)setRetryInterval:(double)fp8;
- (double)retryInterval;
- (void)setMaxRetry:(int)fp8;
- (int)maxRetry;
- (void)setExpiry:(int)fp8;
- (int)expiry;
- (void)setConfigProtocol:(int)fp8;
- (int)configProtocol;
- (void)setConfigURL:(id)fp8;
- (id)configURL;
- (void)setConfigDictionary:(id)fp8;
- (id)configDictionary;
- (void).cxx_destruct;
- (id)dictionary;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end

