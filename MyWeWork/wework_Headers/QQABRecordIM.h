//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQABRecordMultiValue.h"

@class NSString;

@interface QQABRecordIM : QQABRecordMultiValue
{
}

+ (id)arrayWithABMultiValue:(void *)arg1;
+ (id)imWithLabel:(id)arg1 service:(id)arg2 username:(id)arg3;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSString *service; // @dynamic service;
@property(readonly, nonatomic) NSString *originalService;
- (id)description;
- (id)string;
- (id)init;

@end
