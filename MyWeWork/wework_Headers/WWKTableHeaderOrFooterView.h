//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WWKAttendanceInviteWXButton;

@interface WWKTableHeaderOrFooterView : UIView
{
    _Bool _showShareToWX;
    UIView *_contentView;
    WWKAttendanceInviteWXButton *_shareToWXButton;
}

@property(nonatomic) _Bool showShareToWX; // @synthesize showShareToWX=_showShareToWX;
@property(retain, nonatomic) WWKAttendanceInviteWXButton *shareToWXButton; // @synthesize shareToWXButton=_shareToWXButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)p_onDidClickShareToWX:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
