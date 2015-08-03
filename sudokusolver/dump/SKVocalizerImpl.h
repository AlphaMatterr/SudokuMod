/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SKVocalizer.h"

#import "NMSPTransactionDelegate-Protocol.h"

@class NMSPTransaction, NSLock, NSMutableArray, NSString, PDXDictionary;

@interface SKVocalizerImpl : SKVocalizer <NMSPTransactionDelegate>
{
    NMSPTransaction *transaction;
    NSString *SKVoiceVocalizerText;
    unsigned char isInitialized;
    unsigned char isProcessing;
    unsigned char isPlaying;
    PDXDictionary *commandInfo;
    NSMutableArray *queuedTransaction;
    NSLock *queueLock;
    BOOL notifiedFinalOutcome;
}

- (void)setTransaction:(id)fp8;
- (id)transaction;
- (void)dealloc;
- (void)transactionPlaybackComplete:(id)fp8;
- (void)transactionPlaybackStarted:(id)fp8;
- (BOOL)transaction:(id)fp8 response:(int)fp12 withContextData:(id)fp16;
- (void)processRequest;
- (void)cancel;
- (void)speakMarkupString:(id)fp8;
- (void)speakString:(id)fp8;
- (void)speakString:(id)fp8 ofType:(id)fp12;
- (id)initWithVoice:(id)fp8 delegate:(id)fp12;
- (id)initWithLanguage:(id)fp8 delegate:(id)fp12;
- (id)initWithLanguage:(id)fp8 voice:(id)fp12 delegate:(id)fp16;

@end

