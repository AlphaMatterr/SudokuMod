/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class IMMActionsRuleRequest;

@interface IMMRuleRequestOperation : _ADBannerContentSizeIdentifierLandscape
{
    id <IMMRuleRequestDelegate> delegate;
    IMMActionsRuleRequest *request;
}

- (void)setRequest:(id)fp8;
- (id)request;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)dealloc;
- (void)main;
- (id)initWithRequest:(id)fp8 delegate:(id)fp12;

@end
