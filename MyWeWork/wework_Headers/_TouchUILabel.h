//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_CopyItemUILabel.h"

@interface _TouchUILabel : _CopyItemUILabel
{
    CDUnknownBlockType _touchBlk;
}

@property(copy, nonatomic) CDUnknownBlockType touchBlk; // @synthesize touchBlk=_touchBlk;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_onTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
