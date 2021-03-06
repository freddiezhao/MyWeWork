//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WWKApplicationItem : NSObject <NSCopying>
{
    struct WSNewCorpAppDetail _corpAppDetail;
    _Bool _isEnable;
    _Bool _isFolder;
    _Bool _isCheck;
    unsigned long long _appId;
    NSString *_iconName;
    NSString *_title;
    NSString *_introduction;
    NSString *_developer;
    NSString *_userUrl;
    NSString *_loginType;
    SEL _action;
    id _target;
    long long _sourceType;
    long long _sectionType;
    NSString *_groupTitle;
}

+ (id)createDelGroupItem;
+ (id)createAddAppItem;
+ (id)createEmptyGroupItem;
+ (id)createAddAppGroupItem;
+ (id)createAddThirdAppItem;
+ (id)createManageItem;
@property(nonatomic) _Bool isCheck; // @synthesize isCheck=_isCheck;
@property(retain, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic) _Bool isFolder; // @synthesize isFolder=_isFolder;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(retain, nonatomic) NSString *loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSString *userUrl; // @synthesize userUrl=_userUrl;
@property(retain, nonatomic) NSString *developer; // @synthesize developer=_developer;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) unsigned long long appId; // @synthesize appId=_appId;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)shouldUIShowDefaultApp:(unsigned long long)arg1;
- (struct WSNewCorpAppDetail *)corpAppDetail;
@property(readonly, nonatomic) unsigned int order;
@property(readonly, nonatomic) unsigned int configOrder;
@property(readonly, nonatomic) unsigned int groupOrder;
@property(readonly, nonatomic) unsigned int groupId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOpenApiApp:(const struct WSNewCorpAppDetail *)arg1;
- (id)initWithBusinessId:(unsigned long long)arg1;

@end

