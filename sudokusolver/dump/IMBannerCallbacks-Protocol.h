/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IMBannerCallbacks <NSObject>
- (void)performBannerInteractionCallback:(id)fp8;
- (void)performBannerWillLeaveCallback;
- (void)performBannerDidDismissScreenCallback;
- (void)performBannerWillDismissScreenCallback;
- (void)performBannerWillPresentScreenCallback;
- (void)performBannerFailureCallback:(id)fp8;
- (void)performBannerSuccessCallback;
@end
