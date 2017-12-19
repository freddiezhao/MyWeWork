//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIButton, UILabel, UILongPressGestureRecognizer, WWKMailAttachmentItem;
@protocol WWKMailFooterDisplayViewDelegate;

@interface WWKMailFooterDisplayView : UIView
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    WWKMailAttachmentItem *_attachmentItem;
    UIButton *_iconButton;
    UILabel *_nameLabel;
    UILabel *_sizeLabel;
    id <WWKMailFooterDisplayViewDelegate> _delegate;
    CALayer *_buttonOverlayLayer;
}

@property(retain, nonatomic) CALayer *buttonOverlayLayer; // @synthesize buttonOverlayLayer=_buttonOverlayLayer;
@property(nonatomic) __weak id <WWKMailFooterDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) WWKMailAttachmentItem *attachmentItem; // @synthesize attachmentItem=_attachmentItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)update;
- (void)iconButtonDidRelease:(id)arg1;
- (void)iconButtonDidPress:(id)arg1;
- (void)iconButtonDidTap:(id)arg1;

@end
