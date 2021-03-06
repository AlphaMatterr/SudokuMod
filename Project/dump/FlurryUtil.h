/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@interface FlurryUtil : _ADBannerContentSizeIdentifierLandscape
{
}

+ (long)lastBootTime;
+ (unsigned long long)getDiskSize;
+ (unsigned long long)getFreeDiskspace;
+ (int)int32FromNSInteger:(int)fp8;
+ (int)getBatteryState;
+ (unsigned int)uint32FromNSUInteger:(unsigned int)fp8;
+ (float)getBatteryLevel;
+ (id)allCounters;
+ (void)printCounters;
+ (void)decrementCounter:(id)fp8;
+ (void)decrementCounter:(id)fp8 locationName:(char *)fp12;
+ (void)incrementCounter:(id)fp8;
+ (void)incrementCounter:(id)fp8 locationName:(char *)fp12;
+ (id)preferredLanguage;
+ (id)generateCFUUIDBasedUID;
+ (id)generateCFUUID;
+ (id)getFlurryId;
+ (char *)getUser;
+ (char *)getModule;
+ (char *)getMgr;
+ (char *)getId;
+ (void)cleanupStoredIdentifierForVendor;
+ (id)getIdentifierForVendor;
+ (id)getMACUID;
+ (id)MACString;
+ (id)hashDataToHexString:(char *)fp8 length:(unsigned int)fp12;
+ (id)hashData:(id)fp8;
+ (BOOL)appIsCracked;
+ (BOOL)deviceIsJailbroken;
+ (id)devicePlatform;
+ (id)filePathDirectory;
+ (id)oldFilePathDirectoryUptilAgentVersion109;
+ (BOOL)isKeyWindowAlertView;
+ (struct _NSRange)flurryRangeOfData:(id)fp8 inData:(id)fp12;
+ (id)createParamKeysDictFromUrlParams:(id)fp8 paramsHeader:(id *)fp12 paramsKVString:(id *)fp16;
+ (int)dataChecksum:(id)fp8;
+ (void)generateChecksumTable;
+ (BOOL)isPortaitOrientationSupportedForWindow:(id)fp8;
+ (BOOL)theAppIsActive;
+ (BOOL)viewIsVisible:(id)fp8;
+ (id)encodeToPercentEscapeString:(id)fp8;
+ (id)decodeFromPercentEscapeString:(id)fp8;
+ (BOOL)addSkipBackupAttributeToItemAtURL:(id)fp8;
+ (int)getSystemVersionAsAnInteger;
+ (BOOL)isRetina;
+ (BOOL)isIPad;
+ (BOOL)canvasInPortraitUpsideDown;
+ (BOOL)canvasInLandscapeLeft;
+ (BOOL)canvasInLandscapeRight;
+ (BOOL)canvasInLandscape;
+ (id)getCanvasOrientation;
+ (BOOL)canvasInLandscapeLeft:(id)fp8;
+ (BOOL)canvasInLandscapeRight:(id)fp8;
+ (BOOL)canvasInLandscape:(id)fp8;
+ (struct CGRect)screenBounds;
+ (struct CGRect)screenBounds:(id)fp8;
+ (id)getOrientationStrFromInterfaceOrientation:(int)fp8;
+ (id)safeUnarchiveObjectWithFile:(id)fp8;
+ (void)handleException:(id)fp8;
+ (void)setShowErrorInLogEnabled:(BOOL)fp8;
+ (int)logLevel;
+ (void)setLogLevel:(int)fp8;
+ (void)assertThreadIsNotMain;

@end

