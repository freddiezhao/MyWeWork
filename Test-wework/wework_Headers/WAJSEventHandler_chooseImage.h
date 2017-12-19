//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKAssetGroupsControllerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WAJSEventHandler_chooseImage : WAJSEventHandler_BaseEvent <WWKAssetGroupsControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    unsigned int m_imgCnt;
    long long m_sizeType;
    long long m_sourceType;
    _Bool _savedImage;
    NSMutableArray *_localImages;
}

- (void).cxx_destruct;
- (void)delayNotifyWeb:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)finishPickingImages:(id)arg1;
- (long long)getImagePickerSizeType:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)_chooseImageViaCamera;
- (void)didCancel;
- (void)sendImg:(id)arg1;
- (void)didFinishPickPhotos:(id)arg1 isSendOriginalSize:(_Bool)arg2;
- (void)_chooseImageViaAlbum;
- (void)_chooseViaFavorite;
- (void)asyncHandleCancel;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
