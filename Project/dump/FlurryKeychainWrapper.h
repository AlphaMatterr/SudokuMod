/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSString;

@interface FlurryKeychainWrapper : _ADBannerContentSizeIdentifierLandscape
{
    NSString *identifier;
}

+ (id)keychainWrapperWithIdentifier:(id)fp8;
- (void)setIdentifier:(id)fp8;
- (id)identifier;
- (void)removeObjectForKey:(id)fp8;
- (BOOL)updateValueData:(id)fp8 forKey:(id)fp12;
- (BOOL)setData:(id)fp8 forKey:(id)fp12;
- (BOOL)setString:(id)fp8 forKey:(id)fp12;
- (id)objectForKey:(id)fp8;
- (BOOL)setObject:(id)fp8 forKey:(id)fp12;
- (id)stringForKey:(id)fp8;
- (id)dataForKey:(id)fp8;
- (id)setupSearchForKey:(id)fp8;
- (void)dealloc;
- (id)initWithIdentifier:(id)fp8;

@end

