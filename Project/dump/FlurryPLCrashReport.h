/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class FlurryPLCrashReportApplicationInfo, FlurryPLCrashReportExceptionInfo, FlurryPLCrashReportMachExceptionInfo, FlurryPLCrashReportMachineInfo, FlurryPLCrashReportProcessInfo, FlurryPLCrashReportSignalInfo, FlurryPLCrashReportSystemInfo, NSArray;

@interface FlurryPLCrashReport : _ADBannerContentSizeIdentifierLandscape
{
    struct _PLCrashReportDecoder *_decoder;
    FlurryPLCrashReportSystemInfo *_systemInfo;
    FlurryPLCrashReportMachineInfo *_machineInfo;
    FlurryPLCrashReportApplicationInfo *_applicationInfo;
    FlurryPLCrashReportProcessInfo *_processInfo;
    FlurryPLCrashReportSignalInfo *_signalInfo;
    FlurryPLCrashReportMachExceptionInfo *_machExceptionInfo;
    NSArray *_threads;
    NSArray *_images;
    FlurryPLCrashReportExceptionInfo *_exceptionInfo;
    struct __CFUUID *_uuid;
}

- (struct __CFUUID *)uuidRef;
- (id)exceptionInfo;
- (id)images;
- (id)threads;
- (id)machExceptionInfo;
- (id)signalInfo;
- (id)processInfo;
- (id)applicationInfo;
- (id)machineInfo;
- (id)systemInfo;
- (BOOL)hasExceptionInfo;
- (BOOL)hasProcessInfo;
- (BOOL)hasMachineInfo;
- (id)imageForAddress:(unsigned long long)fp8;
- (void)dealloc;
- (id)initWithData:(id)fp8 error:(id *)fp12;
- (id)extractMachExceptionInfo:(struct _Plcrash__CrashReport__Signal__MachException *)fp8 error:(id *)fp12;
- (id)extractSignalInfo:(struct _Plcrash__CrashReport__Signal *)fp8 error:(id *)fp12;
- (id)extractExceptionInfo:(struct _Plcrash__CrashReport__Exception *)fp8 error:(id *)fp12;
- (id)extractImageInfo:(struct _Plcrash__CrashReport *)fp8 error:(id *)fp12;
- (id)extractThreadInfo:(struct _Plcrash__CrashReport *)fp8 error:(id *)fp12;
- (id)extractStackFrameInfo:(struct _Plcrash__CrashReport__Thread__StackFrame *)fp8 error:(id *)fp12;
- (id)extractSymbolInfo:(struct _Plcrash__CrashReport__Symbol *)fp8 error:(id *)fp12;
- (id)extractProcessInfo:(struct _Plcrash__CrashReport__ProcessInfo *)fp8 error:(id *)fp12;
- (id)extractApplicationInfo:(struct _Plcrash__CrashReport__ApplicationInfo *)fp8 error:(id *)fp12;
- (id)extractMachineInfo:(struct _Plcrash__CrashReport__MachineInfo *)fp8 error:(id *)fp12;
- (id)extractProcessorInfo:(struct _Plcrash__CrashReport__Processor *)fp8 error:(id *)fp12;
- (id)extractSystemInfo:(struct _Plcrash__CrashReport__SystemInfo *)fp8 error:(id *)fp12;
- (struct _Plcrash__CrashReport *)decodeCrashData:(id)fp8 error:(id *)fp12;

@end

