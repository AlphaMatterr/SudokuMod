/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MMDataObject.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface MMJSResponse : MMDataObject
{
    NSString *method_;
    NSString *callback_;
    NSString *klass_;
    NSString *strResponse_;
    NSData *dataResponse_;
    NSArray *arrayResponse_;
    NSDictionary *dictionaryResponse_;
    NSNumber *booleanResponse_;
    NSNumber *numberResponse_;
    int responseType_;
    NSString *_method;
    NSString *_callback;
    NSString *_klass;
    NSString *_strResponse;
    NSData *_dataResponse;
    NSArray *_arrayResponse;
    NSDictionary *_dictionaryResponse;
    NSNumber *_numberResponse;
    NSNumber *_booleanResponse;
    int _responseType;
}

+ (id)responseWithMethod:(id)fp8;
- (void)setResponseType:(int)fp8;
- (int)responseType;
- (void)setBooleanResponse:(id)fp8;
- (id)booleanResponse;
- (void)setNumberResponse:(id)fp8;
- (id)numberResponse;
- (void)setDictionaryResponse:(id)fp8;
- (id)dictionaryResponse;
- (void)setArrayResponse:(id)fp8;
- (id)arrayResponse;
- (void)setDataResponse:(id)fp8;
- (id)dataResponse;
- (void)setStrResponse:(id)fp8;
- (id)strResponse;
- (void)setKlass:(id)fp8;
- (id)klass;
- (void)setCallback:(id)fp8;
- (id)callback;
- (void)setMethod:(id)fp8;
- (id)method;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)init;

@end

