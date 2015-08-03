/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BaseViewController.h"

#import "GKAchievementViewControllerDelegate-Protocol.h"
#import "GKLeaderboardViewControllerDelegate-Protocol.h"

@class UIButton;

@interface HomeViewController : BaseViewController <GKLeaderboardViewControllerDelegate, GKAchievementViewControllerDelegate>
{
    UIButton *newButton;
    UIButton *resumeButton;
    UIButton *optionsButton;
    UIButton *aboutButton;
    UIButton *helpButton;
    UIButton *statsButton;
    UIButton *leaderboardsButton;
    UIButton *achievementsButton;
}

- (void)achievementViewControllerDidFinish:(id)fp8;
- (void)showAchievements;
- (void)achievementsTouched:(id)fp8;
- (void)leaderboardViewControllerDidFinish:(id)fp8;
- (void)showLeaderboard;
- (void)leaderboardsTouched:(id)fp8;
- (void)helpTouched:(id)fp8;
- (void)statsTouched:(id)fp8;
- (void)aboutTouched:(id)fp8;
- (void)optionsTouched:(id)fp8;
- (void)resumeGame:(id)fp8;
- (void)newGame:(id)fp8;
- (void)enableResumeButton:(BOOL)fp8;
- (void)enableOrDisableGameCenterButtons:(BOOL)fp8;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

