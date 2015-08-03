/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSMutableDictionary, NSOperationQueue;

@interface MRImageDownloader : _ADBannerContentSizeIdentifierLandscape
{
    NSOperationQueue *_queue;
    id <MRImageDownloaderDelegate> _delegate;
    NSMutableDictionary *_pendingOperations;
}

- (void)setPendingOperations:(id)fp8;
- (id)pendingOperations;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setQueue:(id)fp8;
- (id)queue;
- (void)image:(id)fp8 didFinishSavingWithError:(id)fp12 contextInfo:(void *)fp16;
- (void)saveImageForOperation:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)downloadImageWithURL:(id)fp8;
- (void)dealloc;
- (id)initWithDelegate:(id)fp8;

@end

