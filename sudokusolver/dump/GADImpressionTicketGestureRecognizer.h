/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class GADImpressionTicketGestureRecognizerPrivate;

@interface GADImpressionTicketGestureRecognizer : _ADBannerContentSizeIdentifierLandscape
{
    GADImpressionTicketGestureRecognizerPrivate *_vars;
}

- (void)setVars:(id)fp8;
- (id)vars;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)reset;
- (void)dealloc;
- (id)init;
- (unsigned int)distanceMoved;
- (void)setDistanceMoved:(unsigned int)fp8;
- (int)gestureState;
- (void)setGestureState:(int)fp8;

@end

