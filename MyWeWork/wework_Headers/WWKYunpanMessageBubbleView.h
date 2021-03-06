//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class QMUIButton, QMUILabel, UIImageView, UIView, WWKYunpanMessageCommentInfoView;

@interface WWKYunpanMessageBubbleView : WWKConversationMessageBubbleView
{
    double _summaryLabelHeight;
    QMUILabel *_mMainTitleLabel;
    QMUILabel *_mSubTitleLabel;
    UIImageView *_mContentImgView;
    QMUILabel *_mMainContentLabel;
    QMUILabel *_mSubContentLabel;
    UIView *_mSeperatorView;
    QMUIButton *_mAccessButton;
    WWKYunpanMessageCommentInfoView *_mCommentContainerView;
}

@property(retain, nonatomic) WWKYunpanMessageCommentInfoView *mCommentContainerView; // @synthesize mCommentContainerView=_mCommentContainerView;
@property(retain, nonatomic) QMUIButton *mAccessButton; // @synthesize mAccessButton=_mAccessButton;
@property(retain, nonatomic) UIView *mSeperatorView; // @synthesize mSeperatorView=_mSeperatorView;
@property(retain, nonatomic) QMUILabel *mSubContentLabel; // @synthesize mSubContentLabel=_mSubContentLabel;
@property(retain, nonatomic) QMUILabel *mMainContentLabel; // @synthesize mMainContentLabel=_mMainContentLabel;
@property(retain, nonatomic) UIImageView *mContentImgView; // @synthesize mContentImgView=_mContentImgView;
@property(retain, nonatomic) QMUILabel *mSubTitleLabel; // @synthesize mSubTitleLabel=_mSubTitleLabel;
@property(retain, nonatomic) QMUILabel *mMainTitleLabel; // @synthesize mMainTitleLabel=_mMainTitleLabel;
- (void).cxx_destruct;
- (void)viewDidTap:(id)arg1;
- (_Bool)p_isJumpToTop:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateBubble:(_Bool)arg1;
- (_Bool)needsArrow;
- (void)updateData;
- (_Bool)p_isCommentMsg;
- (_Bool)p_isMsgTypeCanJump;
- (_Bool)p_needShowMainContentMultiLine;
- (_Bool)p_needShowContentImgView;
- (void)initSubviews;

@end

