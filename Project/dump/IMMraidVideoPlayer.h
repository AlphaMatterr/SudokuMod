/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class IMWebView, NSString, NSTimer, UIActivityIndicatorView;

@interface IMMraidVideoPlayer : _ADBannerContentSizeIdentifierLandscape
{
    id <IMMraidVideoPlayerDelegate> delegate;
    BOOL autoPlay;
    BOOL autoRepeat;
    BOOL closeViaUserInteraction;
    BOOL isMuted;
    BOOL isPlayerHidden;
    BOOL showControls;
    BOOL startWithFullscreen;
    BOOL stopWithExit;
    BOOL fullScreenAudioType;
    BOOL notificationsRegistered;
    BOOL statusBarHidden;
    BOOL isLoaded;
    BOOL _isFullScreen;
    float currentVolume;
    IMWebView *expandedWebView;
    UIActivityIndicatorView *loadingView;
    NSString *mediaID;
    NSString *mediaURL;
    float previousVolume;
    NSTimer *updateTimer;
    float volumeBeforeMute;
    double timeElapsed;
    struct CGRect mediaFrame;
}

- (void)setIsFullScreen:(BOOL)fp8;
- (BOOL)isFullScreen;
- (void)setIsLoaded:(BOOL)fp8;
- (BOOL)isLoaded;
- (void)setStatusBarHidden:(BOOL)fp8;
- (BOOL)statusBarHidden;
- (void)setNotificationsRegistered:(BOOL)fp8;
- (BOOL)notificationsRegistered;
- (void)setFullScreenAudioType:(BOOL)fp8;
- (BOOL)fullScreenAudioType;
- (void)setVolumeBeforeMute:(float)fp8;
- (float)volumeBeforeMute;
- (void)setUpdateTimer:(id)fp8;
- (id)updateTimer;
- (void)setTimeElapsed:(double)fp8;
- (double)timeElapsed;
- (void)setStopWithExit:(BOOL)fp8;
- (BOOL)stopWithExit;
- (void)setStartWithFullscreen:(BOOL)fp8;
- (BOOL)startWithFullscreen;
- (void)setShowControls:(BOOL)fp8;
- (BOOL)showControls;
- (void)setPreviousVolume:(float)fp8;
- (float)previousVolume;
- (void)setMediaURL:(id)fp8;
- (id)mediaURL;
- (void)setMediaID:(id)fp8;
- (id)mediaID;
- (void)setMediaFrame:(struct CGRect)fp8;
- (struct CGRect)mediaFrame;
- (void)setLoadingView:(id)fp8;
- (id)loadingView;
- (void)setIsPlayerHidden:(BOOL)fp8;
- (BOOL)isPlayerHidden;
- (void)setIsMuted:(BOOL)fp8;
- (BOOL)isMuted;
- (void)setExpandedWebView:(id)fp8;
- (id)expandedWebView;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setCurrentVolume:(float)fp8;
- (float)currentVolume;
- (void)setCloseViaUserInteraction:(BOOL)fp8;
- (BOOL)closeViaUserInteraction;
- (void)setAutoRepeat:(BOOL)fp8;
- (BOOL)autoRepeat;
- (void)setAutoPlay:(BOOL)fp8;
- (BOOL)autoPlay;
- (void).cxx_destruct;
- (void)fireMediaCloseEvent:(BOOL)fp8 time:(int)fp12;
- (void)fireMediaTimeUpdateEvent:(int)fp8 totalDuration:(int)fp12;
- (void)fireMediaErrorCode:(int)fp8;
- (void)fireMediaTrackingEvent:(id)fp8;
- (void)checkMediaVolumeChangeEvent;
- (void)moviePlayBackDidFinish:(id)fp8;
- (void)moviePlayerPlaybackStateDidChange:(id)fp8;
- (void)moviePlayerLoadStateDidChange:(id)fp8;
- (void)moviePlayerDidExitFullScreen:(id)fp8;
- (void)moviePlayerWillExitFullScreen:(id)fp8;
- (void)moviePlayerDidEnterFullScreen:(id)fp8;
- (void)moviePlayerWillEnterFullScreen:(id)fp8;
- (void)prepareAndPlay;
- (void)seek:(int)fp8;
- (void)close;
- (void)pause;
- (void)play;
- (void)show;
- (void)hide;
- (void)unmute;
- (void)mute;
- (void)showLoadingView:(struct CGRect)fp8;
- (void)removeLoadingView;
- (void)setVideoVolume:(float)fp8;
- (float)getVideoVolume;
- (void)startUpdateTimer;
- (void)invalidateUpdateTimer;
- (void)timerAction;
- (void)appBecameActive;
- (void)registerNotifications;
- (void)deregisterNotifications;
- (void)dealloc;
- (id)initWithMediaID:(id)fp8 mediaURL:(id)fp12 delegate:(id)fp16;

@end

