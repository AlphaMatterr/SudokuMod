/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSMutableArray;

@interface FlurryDataSenderBase : _ADBannerContentSizeIdentifierLandscape
{
    NSMutableArray *_runningTasks;
    unsigned int _backgroundTask;
    struct dispatch_queue_s *_queue;
}

- (void)setQueue:(struct dispatch_queue_s *)fp8;
- (struct dispatch_queue_s *)queue;
- (void)setBackgroundTask:(unsigned int)fp8;
- (unsigned int)backgroundTask;
- (void)setRunningTasks:(id)fp8;
- (id)runningTasks;
- (void)performRetransmitNotSentBlocks;
- (void)networkStatusChanged:(id)fp8;
- (void)stopBackgroundTasksTracking;
- (void)startBackgroundTaskTrackingIfNeeded;
- (void)cancelTasks;
- (void)didCompleteAllTasks;
- (void)retransmitNotSentBlocks;
- (void)unregisterTask:(id)fp8 completedSuccessfuly:(BOOL)fp12;
- (void)registerNewTask:(id)fp8;
- (BOOL)hasOngoingTasksWindow;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)fp8;
- (id)init;
- (void)initialize;

@end

