/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NMSPCondition, NMSPTransactionSystem, NSLock, NSMutableArray, NSString, ReleasePool;

@interface NMSPTransaction : _ADBannerContentSizeIdentifierLandscape <AVAudioPlayerDelegate>
{
    NMSPTransactionSystem *transactionSystem;
    ReleasePool *releasePool;
    NSString *commandName;
    struct nmsp_nmas_Command_ *command;
    struct nmsp_general_AudioSink *audio_sink;
    struct nmsp_audio_Recorder_ *recorder;
    struct nmsp_audio_Player_ *player;
    int transactionState;
    int recordingState;
    int playbackState;
    NMSPCondition *recordingStopped;
    NMSPCondition *commandDestroyed;
    NMSPCondition *recordingStarted;
    NMSPCondition *playbackStopped;
    NMSPCondition *playbackStarted;
    NMSPCondition *transactionCancelling;
    _Bool notifiedPlaybackStart;
    NMSPCondition *startRecording;
    NMSPCondition *lastIgnoredBuffer;
    NMSPCondition *earconState;
    NSMutableArray *queuedEvents;
    NSLock *queueLock;
    AVAudioPlayer *earconStartPlayer;
    AVAudioPlayer *earconStopPlayer;
    AVAudioPlayer *earconCancelPlayer;
    int result_counter;
    int expected_results;
    id <NMSPTransactionDelegate> delegate;
    int commandType;
}

- (void)setCommandType:(int)fp8;
- (int)commandType;
- (void)audioPlayerDidFinishPlaying:(id)fp8 successfully:(BOOL)fp12;
- (void)audioPlayerEndInterruption:(id)fp8 withFlags:(unsigned int)fp12;
- (void)audioPlayerEndInterruption:(id)fp8;
- (void)audioPlayerDecodeErrorDidOccur:(id)fp8 error:(id)fp12;
- (void)audioPlayerBeginInterruption:(id)fp8;
- (float)energyLevel;
- (id)commandEventDesc:(int)fp8;
- (void)preHandleCommandEvent:(int)fp8;
- (void)handleCommandEvent:(int)fp8;
- (void)preHandlePlayEvent:(int)fp8;
- (void)handlePlayEvent:(int)fp8;
- (void)preHandleRecordEvent:(int)fp8;
- (void)handleRecordEvent:(int)fp8;
- (void)handleCommandResponse:(CDAnonymousStruct1 *)fp8;
- (int)resultCount;
- (void)stopPlayback;
- (void)stopRecording;
- (BOOL)recording;
- (id)firstDictationResult:(id)fp8;
- (BOOL)sendEnd;
- (BOOL)sendAudioParamAndStartLongRecording:(id)fp8;
- (BOOL)sendAudioParamAndStartShortRecording:(id)fp8;
- (BOOL)sendAudioParam:(id)fp8 andRecordWithDetection:(unsigned int)fp12 fromFileNamed:(id)fp16;
- (BOOL)sendAudioParam:(id)fp8 andRecordWithDetection:(unsigned int)fp12;
- (BOOL)sendAudioParamPlayAndRecord:(id)fp8 withParams:(struct nmsp_Vector_ *)fp12 fromFileNamed:(id)fp16;
- (BOOL)sendAudioParamPlayAndRecord:(id)fp8 withParams:(struct nmsp_Vector_ *)fp12;
- (BOOL)sendTTSParamAndPlay:(id)fp8;
- (BOOL)sendSequenceEnd:(id)fp8 dictionary:(id)fp12;
- (BOOL)sendSequenceChunk:(id)fp8 dictionary:(id)fp12;
- (BOOL)sendSequenceStart:(id)fp8 dictionary:(id)fp12;
- (BOOL)sendDictionaryParam:(id)fp8 dictionary:(id)fp12;
- (BOOL)sendTextParam:(id)fp8 text:(id)fp12;
- (BOOL)sendParam:(struct nmsp_nmas_Parameter_ *)fp8;
- (BOOL)sendStart:(int)fp8 dictionary:(id)fp12;
- (BOOL)sendStart:(id)fp8 withDictionary:(id)fp12;
- (void)cancel;
- (void)dealloc;
- (void)cleanupNmasCommandElements;
- (void)waitForRecordingStart;
- (void)incExpectedResults;
- (void)setEarcons;
- (id)initTransaction:(id)fp8;

@end
