//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWFavoritesItemBaseCellView.h"

@class NSAttributedString, WWKSourceCodeTextView;

@interface WWFavoritesItemCodeCellView : WWFavoritesItemBaseCellView
{
    WWKSourceCodeTextView *_codeTextView;
    NSAttributedString *_codeAttributedText;
}

+ (double)cellHeightForFavItem:(id)arg1;
@property(retain, nonatomic) NSAttributedString *codeAttributedText; // @synthesize codeAttributedText=_codeAttributedText;
@property(retain, nonatomic) WWKSourceCodeTextView *codeTextView; // @synthesize codeTextView=_codeTextView;
- (void).cxx_destruct;
- (double)heightForContent;
- (void)layoutSubviews;
- (void)initContentData;
- (void)initContentView;

@end

