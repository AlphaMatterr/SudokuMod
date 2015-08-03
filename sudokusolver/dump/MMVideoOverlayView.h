/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "MMJSONVideoButtonDelegate-Protocol.h"

@class MMVideoResponse, NSArray, NSMutableArray, NSTimer, UILabel;

@interface MMVideoOverlayView : _ADBannerContentSizeIdentifierLandscape <MMJSONVideoButtonDelegate>
{
    BOOL _didVideoFinishedPlaying;
    MMVideoResponse *_videoResponse;
    NSArray *_jsonVideoButtons;
    NSArray *_buttons;
    NSTimer *_timeoutTimer;
    NSMutableArray *_timeoutTimers;
    UILabel *_countdownLabel;
    NSMutableArray *_shownButtons;
    id <MMVideoOverlayViewDelegate> _delegate;
}

- (void)setDidVideoFinishedPlaying:(BOOL)fp8;
- (BOOL)didVideoFinishedPlaying;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setShownButtons:(id)fp8;
- (id)shownButtons;
- (void)setCountdownLabel:(id)fp8;
- (id)countdownLabel;
- (void)setTimeoutTimers:(id)fp8;
- (id)timeoutTimers;
- (void)setTimeoutTimer:(id)fp8;
- (id)timeoutTimer;
- (void)setButtons:(id)fp8;
- (id)buttons;
- (void)setJsonVideoButtons:(id)fp8;
- (id)jsonVideoButtons;
- (void)setVideoResponse:(id)fp8;
- (id)videoResponse;
- (void).cxx_destruct;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)fadeInButtons;
- (void)stopTimeouts;
- (void)prepareToRemove;
- (void)startTimeouts;
- (void)timeoutButton:(id)fp8;
- (void)animationDidStop:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (void)fadeButton:(id)fp8 toOpacity:(float)fp12 withDuration:(float)fp16 animationId:(id)fp20 performCallbackOnStop:(BOOL)fp24;
- (void)fadeButton:(id)fp8 toOpacity:(float)fp12 withDuration:(float)fp16;
- (void)showButtons;
- (void)fadeInButton:(id)fp8;
- (void)jsonVideoButtonWasTapped:(id)fp8;
- (void)restart;
- (void)stopButtonAnimations;
- (void)videoFinishedPlaying;
- (void)videoBeganPlaying;
- (void)videoTimeIsAt:(double)fp8;
- (void)updateCountdownLabel:(int)fp8;
- (void)createAndShowCountdownLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 videoResponse:(id)fp24 delegate:(id)fp28;

@end

