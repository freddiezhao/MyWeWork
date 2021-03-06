//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AnnounceServiceProxyObserverDelegate-Protocol.h"
#import "ConversationProxyObserverDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKNewAnnouncementCellDelegate-Protocol.h"

@class MJRefreshFooter, NSString, UIActivityIndicatorView, UITableView, WWKCommonEmptyView;

@interface WWKNewAnnouncementListController : UIViewController <UITableViewDataSource, UITableViewDelegate, AnnounceServiceProxyObserverDelegate, ConversationProxyObserverDelegate, WWKNewAnnouncementCellDelegate>
{
    vector_b97e3dd8 _receivedAnnouncementList;
    struct map<scoped_refptr<model::Message>, double, std::__1::less<scoped_refptr<model::Message>>, std::__1::allocator<std::__1::pair<const scoped_refptr<model::Message>, double>>> _message_row_height_cache;
    struct map<scoped_refptr<announce::model::Announcement>, double, std::__1::less<scoped_refptr<announce::model::Announcement>>, std::__1::allocator<std::__1::pair<const scoped_refptr<announce::model::Announcement>, double>>> _announce_row_height_cache;
    UIActivityIndicatorView *_indicatorView;
    struct AnnounceServiceProxyObserver *_proxyAnnounceServiceObserver;
    double _cell_row_height_cache;
    scoped_refptr_8a203b4c _last_announce;
    _Bool _isFetchingHistory;
    _Bool _isSyncing;
    MJRefreshFooter *_refreshFooter;
    WWKCommonEmptyView *_placeHolderView;
    UITableView *_receivedAnnounceTableView;
}

@property(retain, nonatomic) UITableView *receivedAnnounceTableView; // @synthesize receivedAnnounceTableView=_receivedAnnounceTableView;
@property(retain, nonatomic) WWKCommonEmptyView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
@property(nonatomic) _Bool isFetchingHistory; // @synthesize isFetchingHistory=_isFetchingHistory;
@property(retain, nonatomic) MJRefreshFooter *refreshFooter; // @synthesize refreshFooter=_refreshFooter;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSendNotice:(id)arg1;
- (void)p_deleteAnnounce:(const scoped_refptr_8a203b4c *)arg1 animate:(_Bool)arg2;
- (void)p_reloadTableView:(id)arg1;
- (_Bool)needShowEmptyView;
- (void)p_fetchHistory;
- (void)p_sync;
- (void)p_onDynamicFontSizeDidChange;
- (void)p_sortMessages:(vector_b095e902 *)arg1 orderedByAscending:(_Bool)arg2;
- (void)p_sortAnnouncementList:(vector_b97e3dd8 *)arg1;
- (void)p_stopLoading;
- (void)p_startLoading;
- (id)p_createContentTableView;
- (void)onDidTapAnnouncementCell:(const scoped_refptr_8a203b4c *)arg1;
- (void)onNotifySyncStateChanged:(_Bool)arg1;
- (void)onNotifyUpdateAnnouncement:(const list_a34e2a5e *)arg1;
- (void)onNotifyDeleteAnnouncement:(const list_a34e2a5e *)arg1;
- (void)onNotifyAddAnnouncement:(const list_a34e2a5e *)arg1;
- (void)onRightNavigationItemClick;
- (void)onRemoveWithIndexPath:(id)arg1;
- (void)p_presentWriteAnnouncementViewController:(const scoped_refptr_8a203b4c *)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)fetchReceivedAnnounceList;
- (void)viewWillLayoutSubviews;
- (void)initContentTableViews;
- (void)initNavigationItems;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

