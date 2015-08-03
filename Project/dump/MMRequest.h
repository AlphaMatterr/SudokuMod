/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

@class CLLocation, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MMRequest : _ADBannerContentSizeIdentifierLandscape
{
    CLLocation *_location;
    int _education;
    int _gender;
    int _ethnicity;
    int _maritalStatus;
    int _orientation;
    NSNumber *_age;
    NSString *_zipCode;
    NSMutableArray *_keywords;
    NSMutableDictionary *_dataParameters;
}

+ (id)requestWithLocation:(id)fp8;
+ (id)request;
- (id)dataParameters;
- (id)keywords;
- (id)zipCode;
- (id)age;
- (int)orientation;
- (int)maritalStatus;
- (int)ethnicity;
- (int)gender;
- (int)education;
- (id)location;
- (void).cxx_destruct;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)addKeyword:(id)fp8;
- (void)setKeywords:(id)fp8;
- (void)setZipCode:(id)fp8;
- (void)setAge:(id)fp8;
- (void)setOrientation:(int)fp8;
- (void)setMaritalStatus:(int)fp8;
- (void)setEthnicity:(int)fp8;
- (void)setGender:(int)fp8;
- (void)setEducation:(int)fp8;
- (void)setLocation:(id)fp8;
- (id)init;

@end
