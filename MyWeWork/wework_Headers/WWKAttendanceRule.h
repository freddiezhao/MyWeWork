//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKAttendanceRule : NSObject
{
    scoped_refptr_75d5a2b5 attendanceRule_;
}

+ (unsigned int)convertContinueIndexToSvrDayIndex:(unsigned int)arg1;
+ (unsigned int)convertSvrDayIndexToContinueIndex:(unsigned int)arg1;
+ (id)getFormatedDateText:(struct CheckinDate *)arg1;
+ (id)getFormatedDayText:(struct CheckinDate *)arg1;
+ (id)getConintueWorkDayWithIndex:(unsigned int)arg1;
+ (id)getWorkDayWithIndex:(unsigned int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)dayText;
- (id)dateText;
- (id)locationText;
- (id)wifiText;
- (id)groupNameText;
- (scoped_refptr_75d5a2b5)getModelAttendaceRule;
- (id)initWithAttendaceRule:(scoped_refptr_75d5a2b5 *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

