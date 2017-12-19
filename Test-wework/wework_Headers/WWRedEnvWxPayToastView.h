//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView;

@interface WWRedEnvWxPayToastView : UIView
{
    int _dotAnimateIndex;
    UIView *_mBackgroundView;
    UIImageView *_mToastImageView;
    UIView *_mDotFistView;
    UIView *_mDotSecondView;
    UIView *_mDotThirdView;
    NSTimer *_mTimer;
}

+ (void)hideToast;
+ (void)showToast:(id)arg1;
+ (id)shareInstance;
@property(nonatomic) int dotAnimateIndex; // @synthesize dotAnimateIndex=_dotAnimateIndex;
@property(retain, nonatomic) NSTimer *mTimer; // @synthesize mTimer=_mTimer;
@property(retain, nonatomic) UIView *mDotThirdView; // @synthesize mDotThirdView=_mDotThirdView;
@property(retain, nonatomic) UIView *mDotSecondView; // @synthesize mDotSecondView=_mDotSecondView;
@property(retain, nonatomic) UIView *mDotFistView; // @synthesize mDotFistView=_mDotFistView;
@property(retain, nonatomic) UIImageView *mToastImageView; // @synthesize mToastImageView=_mToastImageView;
@property(retain, nonatomic) UIView *mBackgroundView; // @synthesize mBackgroundView=_mBackgroundView;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)startTimer;
- (void)dotAnimate:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end
