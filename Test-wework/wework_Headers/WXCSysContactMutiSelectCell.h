//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXCSysContactCell.h"

@class UIImageView;

@interface WXCSysContactMutiSelectCell : WXCSysContactCell
{
    UIImageView *_checkView;
    long long _checkState;
}

@property(nonatomic) long long checkState; // @synthesize checkState=_checkState;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithContactAbstract:(id)arg1 forceShowHeadImg:(_Bool)arg2;
- (void)_setupCheckView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
