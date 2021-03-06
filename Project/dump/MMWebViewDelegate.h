/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "UIWebViewDelegate-Protocol.h"

@class MMBannerAdView, MMBrowserViewController, MMCommand, MMModalView, MMOverlayViewController, MMVideo, MMWebView, UIViewController;

@interface MMWebViewDelegate : _ADBannerContentSizeIdentifierLandscape <UIWebViewDelegate>
{
    MMWebView *_webView;
    MMBannerAdView *_adView;
    MMModalView *_modalView;
    MMOverlayViewController *_overlayController;
    MMVideo *_video;
    MMBrowserViewController *_browser;
    MMCommand *_command;
    id _arcRetain;
    int _type;
    UIViewController *_viewControllerForPresentingModalView;
    int _presentationOrientation;
    unsigned int _presentationOrientationMask;
}

- (void)setPresentationOrientationMask:(unsigned int)fp8;
- (unsigned int)presentationOrientationMask;
- (void)setPresentationOrientation:(int)fp8;
- (int)presentationOrientation;
- (void)setViewControllerForPresentingModalView:(id)fp8;
- (id)viewControllerForPresentingModalView;
- (void)setType:(int)fp8;
- (int)type;
- (void)setArcRetain:(id)fp8;
- (id)arcRetain;
- (void)setCommand:(id)fp8;
- (id)command;
- (void)setBrowser:(id)fp8;
- (id)browser;
- (void)setVideo:(id)fp8;
- (id)video;
- (void)setOverlayController:(id)fp8;
- (id)overlayController;
- (void)setModalView:(id)fp8;
- (id)modalView;
- (void)setAdView:(id)fp8;
- (id)adView;
- (void)setWebView:(id)fp8;
- (id)webView;
- (void).cxx_destruct;
- (void)loadBrowserWithURL:(id)fp8;
- (void)resolveURL:(id)fp8;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)webViewDidStartLoad:(id)fp8;
- (id)getAdInfo;
- (void)resetCommand;
- (void)dealloc;
- (id)initWithType:(int)fp8;

@end

