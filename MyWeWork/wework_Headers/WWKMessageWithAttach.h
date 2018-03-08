//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

#import "WWKCleanStorageItemAttach-Protocol.h"

@class NSData, NSString, UIImage;

@interface WWKMessageWithAttach : WWKMessageMedia <WWKCleanStorageItemAttach>
{
    _Bool _isComplex;
    int _contentType;
    int _decryptStatus;
    NSData *_AESKey;
    NSString *_MD5;
    NSString *_localPath;
    NSData *_randomKey;
    NSData *_encryptKey;
    NSData *_sessionId;
    unsigned long long _fileSize;
    unsigned long long _encryptSize;
}

@property(nonatomic) unsigned long long encryptSize; // @synthesize encryptSize=_encryptSize;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) int decryptStatus; // @synthesize decryptStatus=_decryptStatus;
@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSData *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(retain, nonatomic) NSData *randomKey; // @synthesize randomKey=_randomKey;
@property(nonatomic) _Bool isComplex; // @synthesize isComplex=_isComplex;
@property(readonly, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(copy, nonatomic) NSString *MD5; // @synthesize MD5=_MD5;
@property(copy, nonatomic) NSData *AESKey; // @synthesize AESKey=_AESKey;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long downloadSize;
@property(readonly, nonatomic) NSString *sharedLocalPath;
@property(readonly, nonatomic) NSString *availableSharedLocalPath;
- (_Bool)htmlCompleted;
- (_Bool)completed;
@property(readonly, nonatomic) unsigned long long storeType;
- (_Bool)removeWithContext:(id)arg1;
@property(readonly, nonatomic) struct Key cleanItemConversationKey;
@property(readonly, nonatomic) unsigned long long cleanItemSize;
@property(readonly, nonatomic) UIImage *cleanItemIcon;
@property(readonly, nonatomic) NSString *cleanItemName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
