//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKEditTextDelegate-Protocol.h"
#import "WWKUpdateMobileControllerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WWKPrivacySettingController : UITableViewController <WWKEditTextDelegate, WWKUpdateMobileControllerDelegate>
{
    NSMutableArray *_dataSource;
    struct OpenCorpInfo _openCorpInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)verifyMobileSuccessful:(struct PhoneItem)arg1;
- (void)p_notifyChange;
- (_Bool)p_showEmailBindAlert;
- (_Bool)p_showOfficePhoneBindAlert;
- (_Bool)p_showJobBindAlert;
- (void)p_setOpenCorpSeen:(_Bool)arg1;
- (_Bool)p_isMobileSection:(long long)arg1;
- (id)p_getIndexpathWithType:(unsigned long long)arg1;
- (_Bool)p_isOpenShowOutContact;
- (long long)p_getCloseSectionCount;
- (long long)p_getOpenSectionCount;
- (id)p_headerTextWithSection:(long long)arg1;
- (id)p_footerTextWithSection:(long long)arg1;
- (void)p_showExternJobSettingAlert:(id)arg1;
- (_Bool)isMutiCorp;
- (id)p_cellTitleWithIndexPath:(id)arg1;
- (void)editTextController:(id)arg1 didClickSaveItemWithText:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)p_addSomeSwitchForDataSource:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

