/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol GADURLConnectionDelegate
- (void)connection:(id)fp8 loadDidFail:(id)fp12 httpStatusCode:(int)fp16;
- (void)connection:(id)fp8 loadDidFinish:(id)fp12 baseURL:(id)fp16;
- (void)connection:(id)fp8 loadDidReceiveCachedResponse:(id)fp12;
- (BOOL)connection:(id)fp8 loadShouldUseCachedResponse:(id)fp12;
- (void)connection:(id)fp8 loadDidReceiveRedirectResponse:(id)fp12;
- (id)connection:(id)fp8 shouldRedirectToURL:(id)fp12;
@end
