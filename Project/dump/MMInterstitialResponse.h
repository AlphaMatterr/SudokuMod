/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MMResponse.h"

@class NSDictionary, NSString;

@interface MMInterstitialResponse : MMResponse
{
    BOOL _scalesPageToFit;
    BOOL _useCustomClose;
    BOOL _transparent;
    NSString *_acid;
    NSString *_adContents;
    NSString *_mimeType;
    NSDictionary *_headers;
    NSString *_transition;
    double _transitionDuration;
}

- (void)setTransitionDuration:(double)fp8;
- (double)transitionDuration;
- (void)setTransition:(id)fp8;
- (id)transition;
- (void)setTransparent:(BOOL)fp8;
- (BOOL)transparent;
- (void)setUseCustomClose:(BOOL)fp8;
- (BOOL)useCustomClose;
- (void)setScalesPageToFit:(BOOL)fp8;
- (BOOL)scalesPageToFit;
- (id)headers;
- (void)setMimeType:(id)fp8;
- (id)mimeType;
- (void)setAdContents:(id)fp8;
- (id)adContents;
- (void)setAcid:(id)fp8;
- (id)acid;
- (void).cxx_destruct;
- (void)parseHeaders:(id)fp8;
- (void)setHeaders:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithData:(id)fp8 response:(id)fp12;

@end

