/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "TBAchievementHandlerDelegate-Protocol.h"

@class NSMutableArray, UIImage, UIView;

@interface TBAchievementHandler : _ADBannerContentSizeIdentifierLandscape <TBAchievementHandlerDelegate>
{
    UIView *_topView;
    NSMutableArray *_queue;
    UIImage *_image;
}

+ (id)defaultHandler;
- (void)setImage:(id)fp8;
- (id)image;
- (void)didHideAchievementNotification:(id)fp8;
- (void)notifyAchievementTitle:(id)fp8 andMessage:(id)fp12;
- (void)notifyAchievement:(id)fp8;
- (void)dealloc;
- (id)init;
- (void)displayNotification:(id)fp8;

@end

