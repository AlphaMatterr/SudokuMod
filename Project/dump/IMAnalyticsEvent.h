/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSDictionary, NSString;

@interface IMAnalyticsEvent : _ADBannerContentSizeIdentifierLandscape
{
    id <IMAnalyticsEventOperationDelegate> delegate;
    int eventType;
    double timestamp;
    double startSessionTS;
    NSDictionary *additionalParams;
    int eventId;
    NSString *sessionId;
    NSString *tag;
}

+ (void)initialize;
+ (void)updateConstants;
- (void)setStartSessionTS:(double)fp8;
- (double)startSessionTS;
- (void)setTag:(id)fp8;
- (id)tag;
- (void)setEventId:(int)fp8;
- (int)eventId;
- (void)setSessionId:(id)fp8;
- (id)sessionId;
- (void)setTimestamp:(double)fp8;
- (double)timestamp;
- (void)setAdditionalParams:(id)fp8;
- (id)additionalParams;
- (void)setEventType:(int)fp8;
- (int)eventType;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)convertJSONToAddnParams:(id)fp8;
- (id)convertAddnParamstoJSON;
- (BOOL)isAdditionalParamsDictionaryValid:(id)fp8;
- (void)main;
- (void)closeDatabase:(struct sqlite3 *)fp8;
- (BOOL)insertIntoEventList:(struct sqlite3 *)fp8 withEventId:(int)fp12;
- (id)initWithEventType:(int)fp8;
- (id)init;
- (void)setDefaults;

@end

