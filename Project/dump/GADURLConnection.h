/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSURL, NSURLConnection, NSURLResponse;

@interface GADURLConnection : _ADBannerContentSizeIdentifierLandscape <NSURLConnectionDataDelegate>
{
    BOOL _isInProgress;
    BOOL _allowCache;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    id <GADURLConnectionDelegate> _delegate;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_receivedData;
}

+ (void)clearCache;
+ (id)cacheKeyForURL:(id)fp8;
+ (id)defaultCachePath;
+ (id)memoryCache;
- (void)setReceivedData:(id)fp8;
- (id)receivedData;
- (void)setResponse:(id)fp8;
- (id)response;
- (void)setConnection:(id)fp8;
- (id)connection;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setAllowCache:(BOOL)fp8;
- (BOOL)allowCache;
- (void)setDestinationURL:(id)fp8;
- (id)destinationURL;
- (void)setSourceURL:(id)fp8;
- (id)sourceURL;
- (void)setIsInProgress:(BOOL)fp8;
- (BOOL)isInProgress;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (id)connection:(id)fp8 willSendRequest:(id)fp12 redirectResponse:(id)fp16;
- (BOOL)tryToStoreResponseAndData;
- (id)cachedResponseForURL:(id)fp8;
- (id)requestForURL:(id)fp8 withData:(id)fp12 andType:(id)fp16;
- (id)connectionFactory;
- (void)dealloc;
- (void)cancel;
- (void)stop;
- (BOOL)startWithURL:(id)fp8 withData:(id)fp12 andType:(id)fp16 forDelegate:(id)fp20 error:(id *)fp24;
- (BOOL)startWithURL:(id)fp8 withData:(id)fp12 andType:(id)fp16 forDelegate:(id)fp20;
- (BOOL)startWithURL:(id)fp8 forDelegate:(id)fp12 error:(id *)fp16;
- (BOOL)startWithURL:(id)fp8 forDelegate:(id)fp12;

@end

