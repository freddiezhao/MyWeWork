//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DataInfoPair : NSObject
{
    long long _type;
    NSString *_content;
    NSString *_subContent;
}

+ (id)pairWithType:(long long)arg1 content:(id)arg2 andSubContent:(id)arg3;
@property(copy, nonatomic) NSString *subContent; // @synthesize subContent=_subContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
