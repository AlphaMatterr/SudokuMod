/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class FlurryPLCrashReportProcessorInfo, NSString;

@interface FlurryPLCrashReportMachineInfo : _ADBannerContentSizeIdentifierLandscape
{
    NSString *_modelName;
    FlurryPLCrashReportProcessorInfo *_processorInfo;
    unsigned int _processorCount;
    unsigned int _logicalProcessorCount;
}

- (unsigned int)logicalProcessorCount;
- (unsigned int)processorCount;
- (id)processorInfo;
- (id)modelName;
- (void)dealloc;
- (id)initWithModelName:(id)fp8 processorInfo:(id)fp12 processorCount:(unsigned int)fp16 logicalProcessorCount:(unsigned int)fp20;

@end

