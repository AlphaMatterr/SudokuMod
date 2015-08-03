/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface GAD_SBJSON : _ADBannerContentSizeIdentifierLandscape
{
    BOOL humanReadable;
    BOOL sortKeys;
    unsigned int maxDepth;
    unsigned int depth;
    const char *c;
}

+ (void)initialize;
- (void)setMaxDepth:(unsigned int)fp8;
- (unsigned int)maxDepth;
- (void)setSortKeys:(BOOL)fp8;
- (BOOL)sortKeys;
- (void)setHumanReadable:(BOOL)fp8;
- (BOOL)humanReadable;
- (BOOL)scanIsAtEnd;
- (BOOL)scanNumber:(id *)fp8 error:(id *)fp12;
- (BOOL)scanHexQuad:(unsigned short *)fp8 error:(id *)fp12;
- (BOOL)scanUnicodeChar:(unsigned short *)fp8 error:(id *)fp12;
- (BOOL)scanRestOfString:(id *)fp8 error:(id *)fp12;
- (BOOL)scanRestOfDictionary:(id *)fp8 error:(id *)fp12;
- (BOOL)scanRestOfArray:(id *)fp8 error:(id *)fp12;
- (BOOL)scanRestOfNull:(id *)fp8 error:(id *)fp12;
- (BOOL)scanRestOfFalse:(id *)fp8 error:(id *)fp12;
- (BOOL)scanRestOfTrue:(id *)fp8 error:(id *)fp12;
- (BOOL)scanValue:(id *)fp8 error:(id *)fp12;
- (id)objectWithString:(id)fp8 error:(id *)fp12;
- (id)fragmentWithString:(id)fp8 error:(id *)fp12;
- (id)objectWithString:(id)fp8 allowScalar:(BOOL)fp12 error:(id *)fp16;
- (BOOL)appendString:(id)fp8 into:(id)fp12 error:(id *)fp16;
- (BOOL)appendDictionary:(id)fp8 into:(id)fp12 error:(id *)fp16;
- (BOOL)appendArray:(id)fp8 into:(id)fp12 error:(id *)fp16;
- (BOOL)appendValue:(id)fp8 into:(id)fp12 error:(id *)fp16;
- (id)indent;
- (id)stringWithObject:(id)fp8 error:(id *)fp12;
- (id)stringWithFragment:(id)fp8 error:(id *)fp12;
- (id)stringWithObject:(id)fp8 allowScalar:(BOOL)fp12 error:(id *)fp16;
- (id)init;

@end

