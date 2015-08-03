/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class AVAudioPlayer, NMSPTransaction, NSError, NSMutableArray, NSObject<NMSPTransactionSystemDelegate>, NSString, NSURL;

@interface NMSPTransactionSystem : _ADBannerContentSizeIdentifierLandscape
{
    struct nmsp_Manager_ *manager;
    struct nmsp_Calllog_ *callog;
    struct nmsp_calllog_SessionEvent_ *speechKitLog;
    struct nmsp_calllog_SessionEvent_ *appLog;
    struct nmsp_NmasResource_ *nmas_resource;
    struct nmsp_Resource_ *nmsp_resource;
    NSMutableArray *activeTransactions;
    NMSPTransaction *currentUiTransaction;
    struct nmsp_audio_Recorder_ *main_recorder;
    id current_trans;
    BOOL audioSystemInitialized;
    NSString *sessionID;
    BOOL isConnected;
    NSURL *audioDataListening;
    NSURL *audioDataDoneListening;
    NSURL *audioDataError;
    NSString *appVersion;
    NSString *appID;
    NSString *host;
    long port;
    NSString *subscriberID;
    NSObject<NMSPTransactionSystemDelegate> *delegate;
    NSError *errListen;
    NSError *errDone;
    NSError *errError;
    AVAudioPlayer *earconStartPlayer;
    AVAudioPlayer *earconStopPlayer;
    AVAudioPlayer *earconCancelPlayer;
    BOOL ssl_enabled;
    BOOL destroying;
    int commandType;
    unsigned long savedAudioCategory;
    char *_appKey;
}

+ (void)setEarcon:(id)fp8 forType:(unsigned int)fp12;
+ (BOOL)isCurrentTransaction:(id)fp8;
+ (id)version;
+ (id)currentUiTransaction;
+ (void)reconnect;
+ (id)instance;
+ (void)destroy;
+ (void)initializeInstanceWithID:(id)fp8 appVersion:(id)fp12 host:(id)fp16 port:(long)fp20 useSSL:(BOOL)fp24 appKey:(const char *)fp28 appKeyLen:(int)fp32 subscriberId:(id)fp36 delegate:(id)fp40 cmdtype:(int)fp44;
+ (BOOL)isInitialized;
- (void)setDestroying:(BOOL)fp8;
- (BOOL)destroying;
- (BOOL)isConnected;
- (id)sessionID;
- (void)releaseAudioSession;
- (void)initAudioSession;
- (float)energyLevel;
- (struct nmsp_audio_Player_ *)createAudioPlayer:(const void *)fp8 params:(const struct nmsp_Vector_ *)fp12 userData:(void *)fp16;
- (struct nmsp_audio_Recorder_ *)createAudioRecorderUsingSink:(struct nmsp_general_AudioSink *)fp8 callback:(const void *)fp12 recordTime:(long)fp16 params:(const struct nmsp_Vector_ *)fp20 userData:(void *)fp24;
- (struct nmsp_nmas_Command_ *)createCommand:(id)fp8 forTransaction:(id)fp12 withDictionary:(id)fp16;
- (void)handleNmasResourceEvent:(int)fp8;
- (id)getTransaction;
- (void)handleManagerEvent:(int)fp8 forSession:(const char *)fp12;
- (id)current;
- (void)deregister:(id)fp8;
- (id)createBackgroundTransaction:(id)fp8;
- (id)createForegroundTransaction:(id)fp8;
- (struct nmsp_nmas_Parameter_ *)createAudioParameter:(id)fp8;
- (void)destroyCommand:(struct nmsp_nmas_Command_ *)fp8;
- (void)dealloc;
- (void)disconnectManager;
- (struct nmsp_NmasResource_ *)get_nmas_resource;
- (struct nmsp_audio_Recorder_ *)getAudioRecorderWithSink:(void *)fp8;
- (void)restartRecorder;
- (void)createSpeechKitRecorder;
- (void)logToServer:(id)fp8 withValue:(id)fp12;
- (void)connectManagerForSelectedServer;
- (id)initWithID:(id)fp8 appVersion:(id)fp12 host:(id)fp16 port:(long)fp20 useSSL:(BOOL)fp24 appKey:(const char *)fp28 appKeyLen:(int)fp32 subscriberId:(id)fp36 delegate:(id)fp40 cmdtype:(int)fp44;
- (void)setCmdType:(int)fp8;
- (int)commandType;
- (void)setEarcon:(id)fp8 forType:(unsigned int)fp12;
- (id)earconCancelPlayer;
- (id)earconStopPlayer;
- (id)earconStartPlayer;
- (id)currentUiTransaction;

@end

