//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface PhoneExtralInfo : NSObject <NSCopying>
{
    unsigned int _uuid;
    unsigned long long _flag;
}

+ (id)phoneExtralInfo:(unsigned int)arg1 flag:(unsigned long long)arg2;
@property(nonatomic) unsigned long long flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned int uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

