/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface GADNetworkUtilities : _ADBannerContentSizeIdentifierLandscape
{
}

+ (id)getImpressionTicketFromUrlPath:(id)fp8;
+ (id)createArrayOfURLsfromHeader:(id)fp8;
+ (id)expirationDateFromHeaders:(id)fp8;
+ (id)dateFromHttpDateString:(id)fp8;
+ (id)headersFromResponse:(id)fp8;
+ (id)urlStringWithoutHashFragment:(id)fp8;
+ (id)parameterValueForKey:(id)fp8 fromURL:(id)fp12;
+ (id)encodeURL:(id)fp8;
+ (id)dictionaryFromQueryString:(id)fp8 withLowercaseKeys:(BOOL)fp12;
+ (id)appendQueryParameters:(id)fp8 toURL:(id)fp12;
+ (id)appendQueryKey:(id)fp8 value:(id)fp12 toURL:(id)fp16;
+ (void)setUserAgentString:(id)fp8;
+ (id)userAgentString;
+ (BOOL)isXFPURL:(id)fp8;
+ (BOOL)isSDKJavaScriptURL:(id)fp8;
+ (BOOL)isMediationURL:(id)fp8;

@end
