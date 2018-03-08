//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "WloginCallbackProtocol-Protocol.h"

@class NSData, NSDictionary, NSString, OpenSSLRSAWrapper;

@interface WloginSdk_v2 : NSObject <WloginCallbackProtocol, NSCopying>
{
    id defaultDeleaget;
    unsigned int dwFailedCount;
    OpenSSLRSAWrapper *_rsawrapper;
    NSDictionary *_quickLoginDict;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(readonly) unsigned int dwFailedCount; // @synthesize dwFailedCount;
@property(retain, nonatomic) NSDictionary *quickLoginDict; // @synthesize quickLoginDict=_quickLoginDict;
@property(retain, nonatomic) OpenSSLRSAWrapper *rsawrapper; // @synthesize rsawrapper=_rsawrapper;
- (void)setExtensionShareGroupId:(id)arg1;
- (id)getQuickLoginAdUrl:(id)arg1 andBundleID:(id)arg2;
- (int)checkWebVerifyAndLogin_v2:(id)arg1 andDelegate:(id)arg2 tag:(long long)arg3;
- (int)checkWebVerifyAndLogin_v2:(id)arg1 andDelegate:(id)arg2;
- (void)setCanWebVerify:(unsigned char)arg1;
- (void)SetUserPasswdTest:(id)arg1 andFlag:(unsigned int)arg2;
- (void)SetUserHasPasswd:(id)arg1;
- (_Bool)IsUserSetPasswd:(id)arg1;
- (int)checkSmsVerifyLoginCode_v2:(id)arg1 andDelegate:(id)arg2;
- (int)checkSmsVerifyLoginCode_v2:(id)arg1 andDelegate:(id)arg2 tag:(long long)arg3;
- (int)refreshSmsVerifyLoginCode_v2:(id)arg1;
- (int)refreshSmsVerifyLoginCode_v2:(id)arg1 tag:(long long)arg2;
- (int)checkSmsVerifyLoginAccount_v2:(id)arg1 andAppID:(unsigned int)arg2 andDelegate:(id)arg3;
- (int)checkSmsVerifyLoginAccount_v2:(id)arg1 andAppID:(unsigned int)arg2 andDelegate:(id)arg3 tag:(long long *)arg4;
- (void)SmsVerifyLoginFailed:(int)arg1 withErrInfo:(id)arg2 tag:(long long)arg3;
- (void)quickLoginFailed:(int)arg1 withErrInfo:(id)arg2 tag:(long long)arg3;
- (void)quickLoginSuccess:(unsigned long long)arg1 appid:(unsigned int)arg2 data:(id)arg3 tag:(long long)arg4;
- (int)deleteUserFromPasteboard_v2:(id)arg1;
- (int)quickLoginActiveStart_v2:(id)arg1 SelfAppid:(unsigned int)arg2 SelfSubAppid:(unsigned int)arg3 DstAppid:(unsigned int)arg4 DstSubAppid:(unsigned int)arg5 DstSourceApplication:(id)arg6 DstScheme:(id)arg7 andDelegate:(id)arg8 tag:(long long *)arg9;
- (int)quickLoginCancelled_v2:(id)arg1 andDelegate:(id)arg2 tag:(long long *)arg3;
- (int)quickLoginStart_v2:(id)arg1 userAccount:(id)arg2 sourceApplication:(id)arg3 andDelegate:(id)arg4 tag:(long long *)arg5;
- (id)getPtInputAccount:(long long)arg1;
- (void)clearAllWebViewCaches;
- (int)wtQuickLogin:(id)arg1 andParam:(id)arg2 outAction:(int *)arg3 outUin:(unsigned long long *)arg4;
- (int)wtWebLogin:(id)arg1;
- (int)getQuickLoginAppInfo:(unsigned int *)arg1 outSubAppId:(unsigned int *)arg2;
- (int)wtStartLogin:(id)arg1 scheme:(id)arg2;
- (int)quickLoginResult_v2:(id)arg1 outAction:(int *)arg2 outUin:(unsigned long long *)arg3;
- (_Bool)quickLogin_v2:(unsigned int)arg1 subAppid:(unsigned int)arg2 scheme:(id)arg3;
- (_Bool)quickLogin_v2:(unsigned int)arg1 subAppid:(unsigned int)arg2 scheme:(id)arg3 useApp:(int)arg4;
- (_Bool)canQuickLogin_v2:(id)arg1;
- (void)setPtAutoRotate:(_Bool)arg1;
- (id)ksid;
- (id)loginUserHistory;
- (_Bool)addDomain:(id)arg1 withDomainList:(id)arg2 getPskey:(_Bool)arg3 getPt4token:(_Bool)arg4 checkExpired:(_Bool)arg5;
- (void)clearPT4TokenDomainList;
- (void)clearSKeyDomainList;
- (_Bool)addSKeyDomain:(id)arg1;
- (void)setAppType:(int)arg1;
- (int)setLoginTlvData:(id)arg1;
- (void)setSourceId:(unsigned int)arg1;
- (void)setLanguage:(int)arg1;
- (void)setRemortServer:(id)arg1 andPort:(unsigned short)arg2;
- (void)setLogLevel:(int)arg1;
- (void)setWtloginTimeout:(unsigned short)arg1;
- (unsigned int)serverTime;
- (_Bool)isNameAccount:(id)arg1;
- (int)serverReplyErrorActionType;
- (unsigned char)serverReplyErrorCode;
- (void)setFaceImgType:(unsigned short)arg1;
- (void)setLoginDelegate:(id)arg1 tag:(long long)arg2;
- (void)setLoginDelegate:(id)arg1;
- (void)inputSmsCodeErrorBySmsVerifyLogin:(id)arg1 tag:(long long)arg2;
- (void)inputSmsCodeBySmsVerifyLogin:(unsigned short)arg1 andTimeout:(unsigned short)arg2 andMsg:(id)arg3 tag:(long long)arg4;
- (void)SmsCodeSuccessBySmsVerifyLogin:(long long)arg1;
- (void)inputSmsCodeError:(id)arg1 tag:(long long)arg2;
- (void)inputSmsCode:(id)arg1 tag:(long long)arg2;
- (void)showWebVerify:(id)arg1 tag:(long long)arg2;
- (void)showPicture:(id)arg1 wording:(id)arg2 tag:(long long)arg3;
- (void)loginFailed:(int)arg1 withErrInfo:(id)arg2 tag:(long long)arg3;
- (void)loginSuccessSig:(id)arg1 andBaseInfo:(id)arg2 andPasswdSig:(id)arg3 tag:(long long)arg4;
- (_Bool)replaceName:(id)arg1 withNewName:(id)arg2;
- (_Bool)switchUser_v2:(id)arg1;
- (_Bool)clearUserLoginData_v2:(id)arg1;
- (_Bool)resetLoginProcess_v2:(long long)arg1;
- (_Bool)resetLoginProcess_v2;
- (int)checkSmsCodeAndLogin_v2:(id)arg1 andVerifyType:(unsigned char)arg2 andDelegate:(id)arg3;
- (int)checkSmsCodeAndLogin_v2:(id)arg1 andVerifyType:(unsigned char)arg2 andDelegate:(id)arg3 tag:(long long)arg4;
- (int)checkSmsCodeAndLogin_v2:(id)arg1 andDelegate:(id)arg2 tag:(long long)arg3;
- (int)checkSmsCodeAndLogin_v2:(id)arg1 andDelegate:(id)arg2;
- (int)refreshSmsCode_v2:(unsigned int)arg1 andMobileType:(unsigned char)arg2 andDelegate:(id)arg3;
- (int)refreshSmsCode_v2:(unsigned int)arg1 andMobileType:(unsigned char)arg2 andDelegate:(id)arg3 tag:(long long)arg4;
- (int)refreshSmsCode_v2:(unsigned int)arg1 andDelegate:(id)arg2 tag:(long long)arg3;
- (int)refreshSmsCode_v2:(unsigned int)arg1 andDelegate:(id)arg2;
- (int)checkPictureAndLogin_v2:(id)arg1 andDelegate:(id)arg2;
- (int)checkPictureAndLogin_v2:(id)arg1 andDelegate:(id)arg2 tag:(long long)arg3;
- (int)refreshPictureData_v2:(id)arg1 tag:(long long)arg2;
- (int)refreshPictureData_v2:(id)arg1;
- (int)loginWithPasswd_v2:(id)arg1 andPwd:(id)arg2 andLoginFlag:(int)arg3 andDelegate:(id)arg4;
- (int)getQuickLoginBuffInfo_Weico_v2:(id)arg1 andQLoginInfo:(id)arg2;
- (id)getBasicUserInfo_v2:(id)arg1;
- (_Bool)clearPT4Token:(id)arg1 andAppid:(unsigned int)arg2;
- (_Bool)clearPSkeySig:(id)arg1 andAppid:(unsigned int)arg2;
- (_Bool)clearSig:(id)arg1 andAppid:(unsigned int)arg2 withKey:(id)arg3;
- (id)getMemPT4Token:(id)arg1 andDomainList:(id)arg2;
- (id)getMemSKeySig_v2:(id)arg1 andDomainList:(id)arg2;
- (id)getMemOpenSig_v2:(id)arg1 andAppidNum:(unsigned int)arg2 andAppidList:(unsigned int *)arg3;
- (id)getMemUserSig_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3;
- (id)getMemUserSig_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andOtherAppidNum:(unsigned int)arg4 andOtherAppidList:(unsigned int *)arg5;
- (id)getJumpLoginBuff_v2:(id)arg1 andAppid:(unsigned int)arg2;
- (int)getUserSigAndBasicInfoByJump_v2:(id)arg1 forAccount:(id)arg2 andAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 andDelegate:(id)arg7;
- (int)getUserSigAndBasicInfoByMSF_v2:(id)arg1 andD2:(id)arg2 forAccount:(id)arg3 andAppid:(unsigned int)arg4 andSigBitmap:(unsigned int)arg5 andOtherAppidNum:(unsigned int)arg6 andOtherAppidList:(unsigned int *)arg7 andDelegate:(id)arg8 tag:(long long *)arg9;
- (int)getUserSigAndBasicInfoByMSF_v2:(id)arg1 andD2:(id)arg2 forAccount:(id)arg3 andAppid:(unsigned int)arg4 andSigBitmap:(unsigned int)arg5 andOtherAppidNum:(unsigned int)arg6 andOtherAppidList:(unsigned int *)arg7 andDelegate:(id)arg8;
- (int)getOpenSig_v2:(id)arg1 andByAppid:(unsigned int)arg2 andForOpenid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andDelegate:(id)arg5 tag:(long long *)arg6;
- (int)getOpenSig_v2:(id)arg1 andByAppid:(unsigned int)arg2 andForOpenid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andDelegate:(id)arg5;
- (int)getUserSigAndBasicInfoByExchage_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andDelegate:(id)arg4 tag:(long long *)arg5;
- (int)getUserSigAndBasicInfoByExchage_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andOtherAppidNum:(unsigned int)arg4 andOtherAppidList:(unsigned int *)arg5 andDelegate:(id)arg6 tag:(long long *)arg7;
- (int)getUserSigAndBasicInfoByExchage_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andDelegate:(id)arg4;
- (int)getUserSigAndBasicInfoByExchage_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andOtherAppidNum:(unsigned int)arg4 andOtherAppidList:(unsigned int *)arg5 andDelegate:(id)arg6;
- (int)getUserSigAndBasicInfoByExchage_v2:(id)arg1 andByAppid:(unsigned int)arg2 andForAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 andDelegate:(id)arg7 tag:(long long *)arg8;
- (int)getUserSigAndBasicInfoByExchage_v2:(id)arg1 andByAppid:(unsigned int)arg2 andForAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 andDelegate:(id)arg7;
- (int)getUserSigAndBasicInfoByLogin_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andPwd:(id)arg4 andLoginFlag:(int)arg5 andDelegate:(id)arg6 tag:(long long *)arg7;
- (int)getUserSigAndBasicInfoByLogin_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andOtherAppidNum:(unsigned int)arg4 andOtherAppidList:(unsigned int *)arg5 andPwd:(id)arg6 andLoginFlag:(int)arg7 andDelegate:(id)arg8 tag:(long long *)arg9;
- (int)getUserSigAndBasicInfoByLogin_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andPwd:(id)arg4 andLoginFlag:(int)arg5 andDelegate:(id)arg6;
- (int)getUserSigAndBasicInfoByLogin_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigBitmap:(unsigned int)arg3 andOtherAppidNum:(unsigned int)arg4 andOtherAppidList:(unsigned int *)arg5 andPwd:(id)arg6 andLoginFlag:(int)arg7 andDelegate:(id)arg8;
- (_Bool)checkLocalSKeyValid:(id)arg1;
- (_Bool)checkLocalSigValid_v2:(id)arg1 andAppid:(unsigned int)arg2 andSigType:(unsigned int)arg3;
- (_Bool)isNeedLoginWithPasswd_v2:(id)arg1 andAppid:(unsigned int)arg2;
- (id)lastLoginUser;
- (void)clearPasswordSig_v2:(id)arg1;
- (_Bool)hasPasswordSig_v2:(id)arg1;
- (void)dealloc;
- (id)initWithBasicInfo_v2:(id)arg1 withLogDelegaet:(id)arg2;
- (id)initWithBasicInfo_v2:(id)arg1;
- (oneway void)release;
- (id)autorelease;
- (id)init;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSString *guidString;
@property(readonly) NSData *guid;
- (int)initECDHShareKey:(char *)arg1 andCliPubKey:(char *)arg2 andCliPubKeyLen:(unsigned int *)arg3 andCliPrivKey:(char *)arg4 andCliPrivKeyLen:(unsigned int *)arg5;
- (id)globalWtloginSdk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
