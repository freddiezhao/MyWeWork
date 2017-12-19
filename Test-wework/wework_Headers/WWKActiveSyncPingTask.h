//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLRequest, NSURLSession;
@protocol WWKActiveSyncPingTaskDelegate;

@interface WWKActiveSyncPingTask : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>
{
    NSString *_identifier;
    NSURLRequest *_request;
    id <WWKActiveSyncPingTaskDelegate> _delegate;
    CDUnknownBlockType _completeCallback;
    NSURLSession *_session;
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType completeCallback; // @synthesize completeCallback=_completeCallback;
@property(nonatomic) __weak id <WWKActiveSyncPingTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)rejoinSession;
- (void)start;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
