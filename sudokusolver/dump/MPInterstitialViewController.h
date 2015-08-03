/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class UIButton;

@interface MPInterstitialViewController : _ADBannerContentSizeIdentifierLandscape
{
    BOOL _applicationHasStatusBar;
    BOOL _isOnViewControllerStack;
    UIButton *_closeButton;
    unsigned int _closeButtonStyle;
    unsigned int _orientationType;
    id <MPInterstitialViewControllerDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setIsOnViewControllerStack:(BOOL)fp8;
- (BOOL)isOnViewControllerStack;
- (void)setApplicationHasStatusBar:(BOOL)fp8;
- (BOOL)applicationHasStatusBar;
- (void)setOrientationType:(unsigned int)fp8;
- (unsigned int)orientationType;
- (unsigned int)closeButtonStyle;
- (void)setCloseButton:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)prefersStatusBarHidden;
- (void)setApplicationStatusBarHidden:(BOOL)fp8;
- (void)dismissInterstitialAnimated:(BOOL)fp8;
- (void)closeButtonPressed;
- (void)setCloseButtonStyle:(unsigned int)fp8;
- (void)setCloseButtonImageWithImageNamed:(id)fp8;
- (void)layoutCloseButton;
- (id)closeButton;
- (BOOL)shouldDisplayCloseButton;
- (void)didDismissInterstitial;
- (void)willDismissInterstitial;
- (void)didPresentInterstitial;
- (void)willPresentInterstitial;
- (void)presentInterstitialFromViewController:(id)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)dealloc;

@end

