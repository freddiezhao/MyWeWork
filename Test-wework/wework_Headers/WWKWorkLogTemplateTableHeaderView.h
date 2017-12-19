//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WWKWorkLogWebViewControllerDelegate-Protocol.h"

@class NSString, WWKWorkLogWebViewController;
@protocol WWKWorkLogTemplateTableHeaderViewDelegate;

@interface WWKWorkLogTemplateTableHeaderView : UIView <WWKWorkLogWebViewControllerDelegate>
{
    struct JournalEntry _logInfo;
    WWKWorkLogWebViewController *_webVc;
    id <WWKWorkLogTemplateTableHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKWorkLogTemplateTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WWKWorkLogWebViewController *webVc; // @synthesize webVc=_webVc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getDetailUrl;
- (id)getNavigationController;
- (void)onWebviewJSLoadFinished:(double)arg1 withTemplateName:(id)arg2 withErrorCode:(int)arg3;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)reload;
- (id)initWithLogEntites:(struct JournalEntry *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
