//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface WXCPbSpamMsgItem : WXPPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int actionReason; // @dynamic actionReason;
@property(nonatomic) unsigned int arriverTime; // @dynamic arriverTime;
@property(retain, nonatomic) NSString *comment; // @dynamic comment;
@property(retain, nonatomic) NSMutableArray *hitRulelist; // @dynamic hitRulelist;
@property(nonatomic) int isMms; // @dynamic isMms;
@property(nonatomic) int isNewMsg; // @dynamic isNewMsg;
@property(retain, nonatomic) NSString *mailAddInfo; // @dynamic mailAddInfo;
@property(nonatomic) unsigned int matchTime; // @dynamic matchTime;
@property(retain, nonatomic) NSString *receiver; // @dynamic receiver;
@property(retain, nonatomic) NSString *sender; // @dynamic sender;
@property(retain, nonatomic) NSString *smcenter; // @dynamic smcenter;
@property(nonatomic) int smshistorycnt; // @dynamic smshistorycnt;
@property(retain, nonatomic) NSString *spamMsg; // @dynamic spamMsg;
@property(nonatomic) int ucContentType; // @dynamic ucContentType;
@property(nonatomic) int ucFinalAction; // @dynamic ucFinalAction;
@property(retain, nonatomic) NSMutableArray *userActionlist; // @dynamic userActionlist;

@end
