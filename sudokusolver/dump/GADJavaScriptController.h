/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "GADCachedFileDelegate-Protocol.h"

@class GADCachedFile, GADWebViewDelegate, NSMutableArray, NSMutableDictionary, UIWebView;

@interface GADJavaScriptController : _ADBannerContentSizeIdentifierLandscape <GADCachedFileDelegate>
{
    GADWebViewDelegate *buildAdWebViewDelegate_;
    NSMutableArray *pendingDelegates_;
    NSMutableDictionary *delegates_;
    NSMutableArray *pendingJavaScriptCommands_;
    unsigned int requestId_;
    BOOL _shouldCheckOreoID;
    GADCachedFile *_buildAdJS;
    UIWebView *_buildAdWebView;
}

+ (void)clear;
+ (id)sharedInstance;
- (void)setBuildAdWebView:(id)fp8;
- (id)buildAdWebView;
- (void)setBuildAdJS:(id)fp8;
- (id)buildAdJS;
- (void)setShouldCheckOreoID:(BOOL)fp8;
- (BOOL)shouldCheckOreoID;
- (void)cachedFile:(id)fp8 downloadDidFail:(id)fp12;
- (void)cachedFileDownloadDidEnd:(id)fp8;
- (id)cachedFile:(id)fp8 shouldRedirectToURL:(id)fp12;
- (void)failedToDownloadJavaScriptWithError:(id)fp8;
- (void)loadAdURL:(id)fp8;
- (void)loadSdkConstants:(id)fp8;
- (void)invalidRequest:(id)fp8;
- (void)buildAdURLForPendingDelegates;
- (void)buildAdURLFromRequestParameters:(id)fp8;
- (void)runCommandOnWebView:(id)fp8;
- (void)setupBuildAdWebView;
- (void)webViewDidFailLoad;
- (void)webViewDidFinishLoad;
- (void)unregisterFromWebViewNotifications;
- (void)registerForWebViewNotifications;
- (void)unregisterFromJavaScriptNotifications;
- (void)registerForJavaScriptNotifications;
- (void)removeAllDelegates;
- (void)removeDelegateWithRequestId:(id)fp8;
- (void)addDelegate:(id)fp8;
- (void)addPendingDelegate:(id)fp8;
- (void)clearCachedFile;
- (id)cachedJavaScriptFileURL;
- (void)executeJavaScriptFileFromURL:(id)fp8 withDelegate:(id)fp12;
- (void)dealloc;
- (id)init;

@end

