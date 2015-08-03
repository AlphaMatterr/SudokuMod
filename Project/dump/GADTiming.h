/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "NSCopying-Protocol.h"

@class NSLock, NSMutableDictionary, NSString;

@interface GADTiming : _ADBannerContentSizeIdentifierLandscape <NSCopying>
{
    NSMutableDictionary *_userData;
    BOOL _explicitEnd;
    NSString *_category;
    NSLock *_timeIntervalLock;
    double _startTimestamp;
    double _endTimestamp;
}

+ (double)counter;
- (void)setTimeIntervalLock:(id)fp8;
- (id)timeIntervalLock;
- (void)setEndTimestamp:(double)fp8;
- (double)endTimestamp;
- (void)setStartTimestamp:(double)fp8;
- (double)startTimestamp;
- (void)setExplicitEnd:(BOOL)fp8;
- (BOOL)explicitEnd;
- (void)setCategory:(id)fp8;
- (id)category;
- (id)keysAndValues;
- (void)removeValueForKey:(id)fp8;
- (id)valueForKey:(id)fp8;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (BOOL)isActive;
- (id)elapsedMillisecondsString;
- (unsigned int)elapsedMilliseconds;
- (void)reset;
- (void)end;
- (void)start;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)fp8;
- (id)initWithCategory:(id)fp8;

@end
