//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface WWKVideoRoundLoadingView : UIView
{
    CAShapeLayer *outterCircle_;
    CAShapeLayer *innerCircle_;
    CAShapeLayer *progressCircle_;
    double _percent;
}

+ (double)getRoundWidth;
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (void).cxx_destruct;
- (void)updateProgressWithPercent:(double)arg1;
- (double)p_getBorderWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

