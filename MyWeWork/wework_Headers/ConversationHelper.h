//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ConversationHelper : NSObject
{
}

+ (id)getAbstractFromForwardMessge:(struct ForwardMessage)arg1;
+     // Error parsing type: B32@0:8r^{Message=^^?{UnknownFieldSet=^{vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> >}}[1I]iQQqQiIQ^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}Ii^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{MessageExtras}iiqQ^{ExtraContent}Q^{Message_SendProgress}BBBi}16^{Conversation=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::ConversationObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::ConversationObserver *, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}^^{ConversationObserver}{__compressed_pair<model::ConversationObserver **, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}}}ii}{unique_ptr<pb::Conversation, std::__1::default_delete<pb::Conversation> >={__compressed_pair<pb::Conversation *, std::__1::default_delete<pb::Conversation> >=^{Conversation}}}{vector<scoped_refptr<model::ConversationMember>, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}^{scoped_refptr<model::ConversationMember>}{__compressed_pair<scoped_refptr<model::ConversationMember> *, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}}}BBBBBBB{unique_ptr<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >={__compressed_pair<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > *, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >=^{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >}}}{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >={__tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned long long> >=Q}}}}24, name: checkForwardEncryptMessage:toConversation:
+     // Error parsing type: i32@0:8r^{Message=^^?{UnknownFieldSet=^{vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> >}}[1I]iQQqQiIQ^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}Ii^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{MessageExtras}iiqQ^{ExtraContent}Q^{Message_SendProgress}BBBi}16^{Conversation=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::ConversationObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::ConversationObserver *, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}^^{ConversationObserver}{__compressed_pair<model::ConversationObserver **, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}}}ii}{unique_ptr<pb::Conversation, std::__1::default_delete<pb::Conversation> >={__compressed_pair<pb::Conversation *, std::__1::default_delete<pb::Conversation> >=^{Conversation}}}{vector<scoped_refptr<model::ConversationMember>, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}^{scoped_refptr<model::ConversationMember>}{__compressed_pair<scoped_refptr<model::ConversationMember> *, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}}}BBBBBBB{unique_ptr<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >={__compressed_pair<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > *, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >=^{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >}}}{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >={__tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned long long> >=Q}}}}24, name: getForwardMessageStatus:toConversation:
+     // Error parsing type: B32@0:8r^{Message=^^?{UnknownFieldSet=^{vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> >}}[1I]iQQqQiIQ^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}Ii^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{MessageExtras}iiqQ^{ExtraContent}Q^{Message_SendProgress}BBBi}16^{Conversation=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::ConversationObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::ConversationObserver *, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}^^{ConversationObserver}{__compressed_pair<model::ConversationObserver **, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}}}ii}{unique_ptr<pb::Conversation, std::__1::default_delete<pb::Conversation> >={__compressed_pair<pb::Conversation *, std::__1::default_delete<pb::Conversation> >=^{Conversation}}}{vector<scoped_refptr<model::ConversationMember>, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}^{scoped_refptr<model::ConversationMember>}{__compressed_pair<scoped_refptr<model::ConversationMember> *, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}}}BBBBBBB{unique_ptr<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >={__compressed_pair<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > *, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >=^{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >}}}{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >={__tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned long long> >=Q}}}}24, name: canForwardMessage:toConversation:
+ (basic_string_a490aa4c)getVideoLocalPath:(const struct VideoMessage *)arg1 type:(int)arg2;
+ (basic_string_a490aa4c)getFileLocalPath:(const struct FileMessage *)arg1 type:(int)arg2;
+ (void)setConvAvatarUrl:(scoped_refptr_fd92d7bf)arg1;
+ (void)setConvAvatar:(scoped_refptr_fd92d7bf)arg1;
+ (id)p_getMessageSummary:(const struct Message *)arg1 withWording:(id)arg2 users:(const vector_89e6321f *)arg3 isRoom:(_Bool)arg4;
+ (id)p_parseLinkMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseLishiRedEnvelopesMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseRedEnvelopesMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseCloudDiskFeedsMessage:(const struct Message *)arg1;
+ (id)p_parseSurveyMessage:(const struct Message *)arg1;
+ (id)p_parseVoteMessage:(const struct Message *)arg1;
+ (id)p_parseMarketMessage:(const struct Message *)arg1;
+ (id)p_parseCorpPaymentMessage:(const struct Message *)arg1;
+ (id)p_parseWorklogSupportTemplateMessage:(const struct Message *)arg1;
+ (id)p_parseWorklogAppMessage:(const struct Message *)arg1;
+ (id)p_parseWorklogNotifyMessage:(const struct Message *)arg1;
+ (id)p_parseAppCardMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseRecommendNewCorpMessage:(const struct Message *)arg1;
+ (id)p_parseTodoCardMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2;
+ (id)p_parsePersonalCardMessage:(const struct Message *)arg1;
+ (id)p_parseAppRichMessage:(const struct Message *)arg1;
+ (id)p_parseTaskCardMessage:(const struct Message *)arg1;
+ (id)p_parseTextCardMessage:(const struct Message *)arg1;
+ (id)p_parseAppNewsMessage:(const struct Message *)arg1;
+ (id)p_parseCardMessage2Text:(const struct Message *)arg1;
+ (id)p_parseSMSMessage:(const struct Message *)arg1;
+ (id)p_parseCardMessage:(const struct Message *)arg1;
+ (id)p_parseEmotionMessage:(const struct Message *)arg1;
+ (id)p_parseModifyEmailMessage:(const struct Message *)arg1;
+ (id)p_parseRTXTeamMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseAdminMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseAutoAttendanceResultMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseAttendanceMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseContentFileMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseVideoMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseForwardMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_parseRichMessage:(const struct RichMessage *)arg1;
+ (id)p_getRichMessageContent:(const basic_string_a490aa4c *)arg1;
+ (id)p_parseRichMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (id)p_sliceUserNames:(const vector_89e6321f *)arg1 withUserIdStr:(const basic_string_a490aa4c *)arg2 exceptUserId:(unsigned long long)arg3;
+ (id)p_sliceUserNames:(const vector_89e6321f *)arg1 withUserIdStr:(const basic_string_a490aa4c *)arg2;
+ (vector_7dcb3552)p_parseUserIdStr:(const basic_string_a490aa4c *)arg1;
+ (id)p_searchUserName:(const vector_89e6321f *)arg1 withUserId:(unsigned long long)arg2 senderName:(const basic_string_a490aa4c *)arg3;
+ (id)p_searchUserName:(const vector_89e6321f *)arg1 withUserId:(unsigned long long)arg2;
+ (id)p_parseInvoiceMessage:(const struct Message *)arg1;
+ (id)p_parseMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 isRoom:(_Bool)arg3;
+ (void)p_AddContent:(id)arg1 toRichMessage:(struct RichMessage *)arg2;
+ (id)parseForwardMessage:(const struct Message *)arg1 andSearchText:(id)arg2;
+     // Error parsing type: @32@0:8r^{Message={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::MessageObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::MessageObserver *, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}^^{MessageObserver}{__compressed_pair<model::MessageObserver **, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}}}ii}{unique_ptr<pb::Message, std::__1::default_delete<pb::Message> >={__compressed_pair<pb::Message *, std::__1::default_delete<pb::Message> >=^{Message}}}}16@24, name: parseSearchContentWithMessage:andSearchText:
+     // Error parsing type: @24@0:8r^{Message={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::MessageObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::MessageObserver *, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}^^{MessageObserver}{__compressed_pair<model::MessageObserver **, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}}}ii}{unique_ptr<pb::Message, std::__1::default_delete<pb::Message> >={__compressed_pair<pb::Message *, std::__1::default_delete<pb::Message> >=^{Message}}}}16, name: parseSearchContentWithMessage:
+ (id)parseRichMessage:(const struct RichMessage *)arg1;
+ (vector_7dcb3552)getUserIdsAtMessage:(const struct Message *)arg1;
+ (id)convertInputPBMessageToAttributeString:(const basic_string_a490aa4c *)arg1;
+ (basic_string_a490aa4c)convertInputAttributeStringToPBMessage:(id)arg1;
+ (void)getConversationsUsers:(const vector_8fc7f2c8 *)arg1 withCallback:(const Callback_a05cfee0 *)arg2;
+ (void)parseRoomPushMessage:(const scoped_refptr_c1fa851d *)arg1 withCallBack:(const Callback_437b31be *)arg2;
+ (void)parsePersonPushMessage:(const scoped_refptr_c1fa851d *)arg1 withCallBack:(const Callback_437b31be *)arg2;
+ (unsigned long long)isConversationBan:(scoped_refptr_fd92d7bf)arg1;
+ (_Bool)isVoiceMessageDeviceAvailable;
+ (_Bool)canSendMessage:(scoped_refptr_fd92d7bf)arg1;
+ (id)p_parsePVMergMultiMsg:(const struct Message *)arg1;
+ (id)parsePVMergMultiMsg:(const struct Message *)arg1;
+ (id)p_parsePVMergSingleMsg:(const struct Message *)arg1;
+ (id)parseHongBaoAckedMessage:(const struct Message *)arg1;
+ (id)parseVoteAckMessage:(const struct Message *)arg1;
+ (id)parseCorpPayAckMessage:(const struct Message *)arg1;
+ (id)parseReceiptNotifyMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2;
+ (void)sortConversation9MembersAvatar:(vector_4ea3d2e4 *)arg1 withCreatorId:(unsigned long long)arg2 andLoginUserId:(unsigned long long)arg3;
+ (void)sortConversationMembers:(vector_4ea3d2e4 *)arg1 withCreatorId:(unsigned long long)arg2 andLoginUserId:(unsigned long long)arg3;
+ (id)parseDraftMessage:(const struct Message *)arg1;
+ (id)parseRevokedMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2;
+ (id)parseNotifyMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2;
+ (void)parseExternConvTipsMessage:(const struct Message *)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)parseRoomMemChangeMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)parseRoomNoticeTipsMessage:(const struct Message *)arg1;
+ (id)parseAddRoomMemberChangeMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2;
+ (id)parseConversationLastMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 showSenderName:(_Bool)arg3;
+ (id)parseConversationLastMessage:(const struct Message *)arg1 withUsers:(const vector_89e6321f *)arg2 conv:(const scoped_refptr_fd92d7bf *)arg3;

@end
