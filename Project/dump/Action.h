/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class NSMutableArray;

@interface Action : _ADBannerContentSizeIdentifierLandscape
{
    int action;
    NSMutableArray *contacts;
    NSMutableArray *words;
}

- (void)setWords:(id)fp8;
- (id)words;
- (void)setContacts:(id)fp8;
- (id)contacts;
- (void)setAction:(int)fp8;
- (int)action;
- (id)getDictionary;
- (void)dealloc;
- (void)removeWord:(id)fp8;
- (void)addWord:(id)fp8;
- (void)removeContact:(id)fp8;
- (void)addContact:(id)fp8;
- (int)getCheckSum;
- (id)initWithType:(int)fp8;

@end

