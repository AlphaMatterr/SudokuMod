/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class GADSlot;

@interface GADBannerView : _ADBannerContentSizeIdentifierLandscape
{
    GADSlot *_slot;
}

- (void)setSlot:(id)fp8;
- (id)slot;
- (void)loadRequest:(id)fp8;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithAdSize:(struct GADAdSize)fp8 origin:(struct CGPoint)fp20;
- (id)initWithAdSize:(struct GADAdSize)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)init;
- (void)setAlpha:(float)fp8;
- (id)adNetworkClassName;
- (id)mediatedAdView;
- (BOOL)hasAutoRefreshed;
- (id)webView;
- (void)setAdSize:(struct GADAdSize)fp8;
- (struct GADAdSize)adSize;
- (id)rootViewController;
- (void)setRootViewController:(id)fp8;
- (id)inAppPurchaseDelegate;
- (void)setInAppPurchaseDelegate:(id)fp8;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (id)adUnitID;
- (void)setAdUnitID:(id)fp8;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)commonInitializer;
- (void)setAdSize:(struct GADAdSize)fp8 andReload:(BOOL)fp20;

@end

