//
//  HookFunction.h
//  Test-weworkDylib
//
//  Created by lzh on 2017/12/22.
//  Copyright © 2017年 lzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CaptainHook/CaptainHook.h>
#import <Cycript/Cycript.h>
#import <ReactiveObjC/ReactiveObjC.h>
#import <AVFoundation/AVFoundation.h>

#pragma mark - WWRedEnvOpenHongBaoWindow
@interface WWRedEnvOpenHongBaoWindow : UIWindow

@property(copy, nonatomic) NSString *mHongbaoTicket;
@property(copy, nonatomic) NSString *mHongBaoID;
@property(retain, nonatomic) NSMutableArray *mToVidList;
@property(nonatomic) unsigned int qyhbSubType;
@property(nonatomic) unsigned long long senderCorpAppId;
@property(nonatomic) unsigned long long itilInviteeVid;
@property(nonatomic) unsigned int mHongbaoStatus;
@property(nonatomic) unsigned int mHongbaoSubType;
@property(nonatomic) unsigned int mHongbaoType;
@property(nonatomic) unsigned long long mSenderVid;
@property(nonatomic) unsigned long long mSelfVid;
@property(nonatomic) _Bool isFullMemberGroupHongbao;
@property(nonatomic) int mHongbaoVidTicket;
@property(strong, nonatomic) UIButton *mOpenBtn;
@property(retain, nonatomic) UIButton *mCloseBtn;
@property(retain, nonatomic) UIImageView *mFrontContainerView;

- (void)onOpenBtnClick:(UIButton *)btn;
- (void)onCloseBtnClick:(id)arg1;
- (void)playCustomSuccessSound;
- (void)onJumpToDetailBtnClick;
- (void)p_jumpToTargetController:(id)arg1;
- (void)closeRedEnvWindowWithFlyAnimate;
- (void)_closeRedEnvWindow;

@end

#pragma mark - WWKConversationRedEnvelopesBubbleView
@interface WWKConversationRedEnvelopesBubbleView: UIView

@property (nonatomic, strong) id message;
@property (nonatomic, weak) id delegate;

- (void)tony_onClickHongbaoMessage;

@end

#pragma mark - WWKMessage

@interface WWKMessage: NSObject
@property(nonatomic, strong) NSArray *messageItems;
- (id)initWithMessage:(void *)arg1;
- (id)initWithMessage:(void *)arg1 observe:(BOOL)arg2;
- (struct Message)getModelMessage;
- (id)TEXT_MESSAGE_TRUNCATE_TIPS;
@end

#pragma mark - WWKMessageRedEnvelopes
@interface WWKMessageRedEnvelopes : NSObject
@property(nonatomic) long long hongbaoSubType;
@property(nonatomic) long long hongbaoType;
@property(retain, nonatomic) NSArray *recvVidList;
@property(copy, nonatomic) NSString *typeWording;
@property(copy, nonatomic) NSString *detailWording;
@property(copy, nonatomic) NSString *wishingWording;
@property(copy, nonatomic) NSString *hongbaoID;
@end

#pragma mark - WWKNavigationController
@interface WWKNavigationController: UINavigationController
- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated;
@end

#pragma mark - WWRedEnvDetailViewController
@interface WWRedEnvDetailViewController: UIViewController
@property(copy, nonatomic) NSString *mHongBaoID;
@end

#pragma mark - WWKConversationViewController
@interface WWKConversationViewController: UIViewController
- (id)initWithConversation:(void *)arg1;
@end

#pragma mark - WWKConversationWrapper
@interface WWKConversationWrapper: NSObject
- (void)setLastMessageText:(NSString *)arg1;
@end
