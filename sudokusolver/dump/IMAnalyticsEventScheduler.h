/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class IMURLRequest, NSDictionary, NSMutableArray, NSMutableData, NSString, NSTimer, NSURLConnection;

@interface IMAnalyticsEventScheduler : _ADBannerContentSizeIdentifierLandscape
{
    id <IMAnalyticsEventSchedulerDelegate> delegate;
    long sessionTS;
    NSDictionary *sessionParams;
    NSString *sessionId;
    NSMutableArray *allEventsArray;
    unsigned int bgIdentifier;
    NSURLConnection *urlConnection;
    NSTimer *timeout;
    int statusCode;
    NSMutableData *receivedData;
    IMURLRequest *urlRequest;
    BOOL isRequestInProgress;
    BOOL isSuccess;
    int failedReason;
}

- (void)setBgIdentifier:(unsigned int)fp8;
- (unsigned int)bgIdentifier;
- (void)setAllEventsArray:(id)fp8;
- (id)allEventsArray;
- (void)setSessionParams:(id)fp8;
- (id)sessionParams;
- (void)setSessionTS:(long)fp8;
- (long)sessionTS;
- (void)setSessionId:(id)fp8;
- (id)sessionId;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)timeout;
- (void)responseReceived:(BOOL)fp8;
- (void)main;
- (void)sendRequest:(id)fp8;
- (id)getScheduleEventsPostBody;
- (id)getPayloadDictionary:(id)fp8 forSessionEvent:(id)fp12;
- (BOOL)isSuccessResponse:(id)fp8;
- (id)init;

@end

