//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADStreamHandle.h"

@class NSArray, XADRARParser;

@interface XADRARInputHandle : XADStreamHandle
{
    XADRARParser *parser;
    NSArray *parts;
    int part;
    long long partend;
    unsigned int crc;
    unsigned int correctcrc;
}

- (void)startNextPart;
- (int)streamAtMost:(int)arg1 toBuffer:(void *)arg2;
- (void)resetStream;
- (void)dealloc;
- (id)initWithRARParser:(id)arg1 parts:(id)arg2;

@end

