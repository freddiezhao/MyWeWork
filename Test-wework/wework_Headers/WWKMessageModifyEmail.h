//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSString;

@interface WWKMessageModifyEmail : WWKMessageMedia
{
    long long _type;
    NSString *_content;
    NSString *_linkContent;
}

+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
@property(copy, nonatomic) NSString *linkContent; // @synthesize linkContent=_linkContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)htmlRepresentation;

@end
