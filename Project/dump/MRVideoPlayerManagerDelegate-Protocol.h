/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MRVideoPlayerManagerDelegate <NSObject>
- (void)videoPlayerManager:(id)fp8 didFailToPlayVideoWithErrorMessage:(id)fp12;
- (void)videoPlayerManagerDidDismissVideo:(id)fp8;
- (void)videoPlayerManagerWillPresentVideo:(id)fp8;
- (id)viewControllerForPresentingVideoPlayer;
@end
