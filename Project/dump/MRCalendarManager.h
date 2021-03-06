/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "EKEventEditViewDelegate-Protocol.h"

@class EKEventEditViewController, NSArray, NSObject<MRCalendarManagerDelegate>;

@interface MRCalendarManager : _ADBannerContentSizeIdentifierLandscape <EKEventEditViewDelegate>
{
    NSObject<MRCalendarManagerDelegate> *_delegate;
    EKEventEditViewController *_eventEditViewController;
    NSArray *_acceptedDateFormatters;
}

- (void)setAcceptedDateFormatters:(id)fp8;
- (id)acceptedDateFormatters;
- (void)setEventEditViewController:(id)fp8;
- (id)eventEditViewController;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)eventEditViewController:(id)fp8 didCompleteWithAction:(int)fp12;
- (id)getMonthsOfTheYearFromParameters:(id)fp8;
- (id)getDaysOfTheYearFromParameters:(id)fp8;
- (id)getDaysOfTheMonthFromParameters:(id)fp8;
- (id)getTimeUnitsFromParameters:(id)fp8 withKey:(id)fp12;
- (id)getDaysOfTheWeekFromParameters:(id)fp8;
- (id)getRecurrenceEndWithParameters:(id)fp8;
- (int)getFrequencyWithParameters:(id)fp8;
- (id)recurrenceRuleWithParameters:(id)fp8;
- (id)dateWithParameters:(id)fp8 forKey:(id)fp12;
- (void)presentCalendarEditor:(id)fp8;
- (id)calendarEventWithParameters:(id)fp8 eventStore:(id)fp12;
- (void)createCalendarEventWithParameters:(id)fp8;
- (id)parseDateFromString:(id)fp8;
- (id)dateFormatterForFormat:(id)fp8;
- (void)dealloc;
- (id)initWithDelegate:(id)fp8;

@end

