//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, WWKApiHandler;

@interface WWKApiManager : NSObject
{
    WWKApiHandler *_currentHandler;
    NSMutableArray *_handlerClasses;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *handlerClasses; // @synthesize handlerClasses=_handlerClasses;
@property(retain, nonatomic) WWKApiHandler *currentHandler; // @synthesize currentHandler=_currentHandler;
- (void).cxx_destruct;
- (void)finishHandler:(id)arg1;
- (_Bool)executeHandlerWithURL:(id)arg1 req:(id)arg2 sourceApplicationInfo:(id)arg3;
- (_Bool)executeHandlerWithURL:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)executeHandlerWithURL:(id)arg1;
- (void)registerHandler:(Class)arg1;
- (id)init;

@end

