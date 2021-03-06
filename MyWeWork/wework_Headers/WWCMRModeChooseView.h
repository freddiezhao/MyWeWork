//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol WWCMRModeChooseViewDelegate;

@interface WWCMRModeChooseView : UIView
{
    _Bool _isInVideoRecording;
    _Bool _shouldResponsePan;
    unsigned long long _selectedIndex;
    id <WWCMRModeChooseViewDelegate> _modeChooseDelegate;
    NSArray *_items;
    NSArray *_buttons;
    UIView *_backgroundView;
}

@property(nonatomic) _Bool shouldResponsePan; // @synthesize shouldResponsePan=_shouldResponsePan;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool isInVideoRecording; // @synthesize isInVideoRecording=_isInVideoRecording;
@property(nonatomic) __weak id <WWCMRModeChooseViewDelegate> modeChooseDelegate; // @synthesize modeChooseDelegate=_modeChooseDelegate;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)actionTap:(id)arg1;
- (void)actionPan:(id)arg1;
- (void)changeMode:(id)arg1;
- (void)animationChangeModeToIndex:(unsigned long long)arg1;
- (void)updateButtonColor;
- (void)updateButtonPosition;
- (double)blackBackGroundBarHeight;
- (void)layoutSubviews;
- (void)updateUIWithCameraMode:(unsigned long long)arg1;
- (void)p_doInit;
- (id)initWithItems:(id)arg1;

@end

