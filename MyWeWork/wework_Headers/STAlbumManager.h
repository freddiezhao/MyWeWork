//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsLibrary;

@interface STAlbumManager : NSObject
{
    ALAssetsLibrary *_assetsLibrary;
}

+ (id)sharedManager;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void).cxx_destruct;
- (void)saveImage:(id)arg1 toAlbum:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

