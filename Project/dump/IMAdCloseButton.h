/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface IMAdCloseButton : _ADBannerContentSizeIdentifierLandscape
{
    BOOL _graphics;
}

+ (id)buttonWithType:(int)fp8 graphics:(BOOL)fp12;
- (void)setGraphics:(BOOL)fp8;
- (BOOL)graphics;
- (void)drawRect:(struct CGRect)fp8;
- (void)drawCloseImage:(struct CGContext *)fp8 frame:(struct CGRect)fp12;
- (void)drawInnerRect:(struct CGContext *)fp8 frame:(struct CGRect)fp12;
- (void)drawOuterRect:(struct CGContext *)fp8 frame:(struct CGRect)fp12;

@end

