/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MMJSObject.h"

#import "PKAddPassesViewControllerDelegate-Protocol.h"

@interface BridgeMMPassbook : MMJSObject <PKAddPassesViewControllerDelegate>
{
    BOOL _doNotSendResponse;
    id _currentPass;
}

- (void)setDoNotSendResponse:(BOOL)fp8;
- (BOOL)doNotSendResponse;
- (void)setCurrentPass:(id)fp8;
- (id)currentPass;
- (void).cxx_destruct;
- (void)addPassesViewControllerDidFinish:(id)fp8;
- (void)addPassFromWebviewForURL:(id)fp8;
- (void)isPassInstalled:(id)fp8;
- (void)addPassFromURL:(id)fp8;
- (void)isPassbookAvailable:(id)fp8;
- (BOOL)isPassbookLibraryAvailable;

@end

