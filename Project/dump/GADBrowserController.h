/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GADViewController.h"

@class GADWebView, GADWebViewDelegate, NSURL, UIActivityIndicatorView, UIBarButtonItem, UIToolbar;

@interface GADBrowserController : GADViewController
{
    NSURL *_URLToLoad;
    NSURL *_referringURLToLoad;
    GADWebViewDelegate *_webViewDelegate;
    GADWebView *_webView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_flexibleSpaceButton;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_backButtonDisabled;
    UIBarButtonItem *_forwardButton;
    UIBarButtonItem *_forwardButtonDisabled;
    UIBarButtonItem *_reloadButton;
    UIBarButtonItem *_safariButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_spinnerContainingButton;
    UIActivityIndicatorView *_spinner;
}

- (void)setSpinner:(id)fp8;
- (id)spinner;
- (void)setSpinnerContainingButton:(id)fp8;
- (id)spinnerContainingButton;
- (void)setDoneButton:(id)fp8;
- (id)doneButton;
- (void)setSafariButton:(id)fp8;
- (id)safariButton;
- (void)setReloadButton:(id)fp8;
- (id)reloadButton;
- (void)setForwardButtonDisabled:(id)fp8;
- (id)forwardButtonDisabled;
- (void)setForwardButton:(id)fp8;
- (id)forwardButton;
- (void)setBackButtonDisabled:(id)fp8;
- (id)backButtonDisabled;
- (void)setBackButton:(id)fp8;
- (id)backButton;
- (void)setFlexibleSpaceButton:(id)fp8;
- (id)flexibleSpaceButton;
- (void)setToolbar:(id)fp8;
- (id)toolbar;
- (void)setWebView:(id)fp8;
- (id)webView;
- (void)setWebViewDelegate:(id)fp8;
- (id)webViewDelegate;
- (void)setReferringURLToLoad:(id)fp8;
- (id)referringURLToLoad;
- (void)setURLToLoad:(id)fp8;
- (id)URLToLoad;
- (void)openInSafari;
- (void)reload;
- (void)stop;
- (void)forward;
- (void)back;
- (void)load:(id)fp8 referringURL:(id)fp12;
- (void)load:(id)fp8;
- (void)refreshToolbar;
- (void)createToolbarButtons;
- (id)buttonWithImage:(id)fp8 name:(id)fp12 width:(int)fp16 enabled:(BOOL)fp20 action:(SEL)fp24;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)dealloc;

@end

