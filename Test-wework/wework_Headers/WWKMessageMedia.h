//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WWKMessage;

@interface WWKMessageMedia : NSObject
{
    WWKMessage *_message;
    struct _NSRange _mediaRange;
}

+ (unsigned long long)storeTypeFromContentType:(int)arg1;
+ (void)endHTMLContext;
+ (id)currentHTMLContext;
+ (void)beginHTMLContext;
+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
@property(nonatomic) struct _NSRange mediaRange; // @synthesize mediaRange=_mediaRange;
@property(nonatomic) __weak WWKMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (unsigned long long)indexInHtmlContext;
- (_Bool)instanceSupportsMergeForwarding;
- (_Bool)instanceSupportsForwarding;
- (id)htmlAttachments;
- (id)htmlRepresentationToWeixin;
- (id)htmlRepresentation;
- (_Bool)htmlCompleted;
- (unsigned long long)attachmentSize;
- (_Bool)completed;
- (id)initWithMessage:(id)arg1 mediaRange:(struct _NSRange)arg2;
- (id)initWithMediaRange:(struct _NSRange)arg1;
- (_Bool)addSimplePreviewCustomViewTo:(id)arg1;
- (_Bool)addPreviewCustomViewTo:(id)arg1;

@end
