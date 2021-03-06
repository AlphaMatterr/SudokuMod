/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GADGMSGHandler.h"

@class GADActionRouter, GADOpener;

@interface GADOpenerGMSGHandler : GADGMSGHandler
{
    GADOpener *_gadOpener;
    GADActionRouter *_subParamActionRouter;
}

- (void)setSubParamActionRouter:(id)fp8;
- (id)subParamActionRouter;
- (void)setGadOpener:(id)fp8;
- (id)gadOpener;
- (BOOL)shouldUseCustomClose:(id)fp8;
- (int)orientationFromParams:(id)fp8;
- (id)urlFromParams:(id)fp8;
- (void)actionOpenApp:(id)fp8;
- (void)actionExpand:(id)fp8;
- (void)actionOpenWebApp:(id)fp8;
- (void)actionOpenBrowser:(id)fp8;
- (void)actionOpenInAppPurchase:(id)fp8;
- (void)actionOpenInAppStore:(id)fp8;
- (void)didReceiveOpenNotification:(id)fp8;
- (void)didReceiveClickNotification:(id)fp8;
- (void)dealloc;
- (id)initWithOpener:(id)fp8;

@end

