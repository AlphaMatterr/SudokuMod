/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BaseViewController.h"

@class Options, StoreObserver, UIActivityIndicatorView, UIButton, UISwitch;

@interface OptionsViewController : BaseViewController
{
    Options *options;
    StoreObserver *storeObserver;
    UISwitch *highlightSwitch;
    UISwitch *disallowSleepSwitch;
    UISwitch *displayIncorrectSwitch;
    UISwitch *displayConflictSwitch;
    UISwitch *displayTimerSwitch;
    UISwitch *autoUpdateNotesSwitch;
    UIButton *backBtn;
    UIButton *disableAdsButton;
    UIActivityIndicatorView *disableAdsActivityIndicator;
    UIButton *restorePurchaseButton;
    UIActivityIndicatorView *restorePurchaseActivityIndicator;
}

- (void)saveData;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)purchaseStateChanged:(id)fp8;
- (void)updateDisableAdsButton;
- (void)restorePurchaseTouched:(id)fp8;
- (void)disableAdsTouched:(id)fp8;
- (void)backTouched:(id)fp8;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithOptions:(id)fp8 storeObserver:(id)fp12;
- (id)init;

@end

