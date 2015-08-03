/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSMutableArray, NSString;

@interface SKGrammar : _ADBannerContentSizeIdentifierLandscape
{
    int _type;
    int _checksum;
    NSString *_grammarId;
    BOOL _loadAsLmh;
    BOOL _setLoadAsLmh;
    int _topicWeight;
    BOOL _setTopicWeight;
    NSString *_slotTag;
    NSString *_interURI;
    NSString *_userId;
    NSString *_uri;
    NSMutableArray *_itemList;
}

- (id)getId;
- (id)getGrammarDictionary;
- (const char *)getTypeStr;
- (void)setUserId:(id)fp8;
- (void)setChecksum:(int)fp8;
- (void)setInterUri:(id)fp8;
- (void)setSlotTag:(id)fp8;
- (void)setTopicWeidht:(int)fp8;
- (void)setLoadAsLmh:(BOOL)fp8;
- (void)setUri:(id)fp8;
- (id)initWithType:(int)fp8 grammarId:(id)fp12 checksum:(int)fp16;
- (id)initWithType:(id)fp8 itemList:(id)fp12;
- (id)initWithType:(id)fp8 uri:(id)fp12;
- (id)initWithType:(int)fp8 grammarId:(id)fp12;

@end
