/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 11:31:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/CKTranscriptComposeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class MFMailComposeViewController, CKConversation, NSMutableArray, CKConversationListController, CKTranscriptController, CKNavigationController, CKViewController, NSSet, NSString;

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, UIActionSheetDelegate, CKTranscriptComposeDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate> {

	MFMailComposeViewController* _mailComposeController;
	CKConversation* _currentConversation;
	NSMutableArray* _conversationCache;
	/*^block*/id _alertViewHandler;
	unsigned _attachmentPreviewQosClass;
	CKConversationListController* _conversationListController;
	CKTranscriptController* _transcriptController;
	CKTranscriptController* _composeTranscriptController;
	CKNavigationController* _conversationListNavigationController;
	CKNavigationController* _transcriptNavigationController;
	CKNavigationController* _composeTranscriptNavigationController;
	CKViewController* _blankViewController;

}

@property (nonatomic,retain) id<NSCoding> autosaveIdentifier; 
@property (nonatomic,retain) CKConversationListController * conversationListController;                   //@synthesize conversationListController=_conversationListController - In the implementation block
@property (nonatomic,retain) CKTranscriptController * transcriptController;                               //@synthesize transcriptController=_transcriptController - In the implementation block
@property (nonatomic,retain) CKTranscriptController * composeTranscriptController;                        //@synthesize composeTranscriptController=_composeTranscriptController - In the implementation block
@property (nonatomic,retain) CKNavigationController * conversationListNavigationController;               //@synthesize conversationListNavigationController=_conversationListNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * transcriptNavigationController;                     //@synthesize transcriptNavigationController=_transcriptNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * composeTranscriptNavigationController;              //@synthesize composeTranscriptNavigationController=_composeTranscriptNavigationController - In the implementation block
@property (nonatomic,retain,readonly) NSSet * alertSuppressionContexts; 
@property (nonatomic,retain) CKConversation * currentConversation;                                        //@synthesize currentConversation=_currentConversation - In the implementation block
@property (nonatomic,readonly) BOOL isShowingConversationListController; 
@property (nonatomic,retain) CKViewController * blankViewController;                                      //@synthesize blankViewController=_blankViewController - In the implementation block
@property (nonatomic,copy) id alertViewHandler;                                                           //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ppt_TranscriptController;
-(void)showConversationList:(BOOL)arg1 ;
-(CKConversationListController *)conversationListController;
-(CKTranscriptController *)composeTranscriptController;
-(void)showMailComposeSheetForAutosavedMessage;
-(void)setAlertViewHandler:(id)arg1 ;
-(CKNavigationController *)conversationListNavigationController;
-(void)showMailComposeSheetForAddress:(id)arg1 ;
-(BOOL)isShowingTranscriptWithUnsentText;
-(void)showConversationAndMessageForSearchURL:(id)arg1 ;
-(BOOL)currentCompositionHasContent;
-(BOOL)isShowingDirtyComposeModalView;
-(BOOL)resumeToConversation:(id)arg1 ;
-(BOOL)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2 ;
-(BOOL)isShowingBlankTranscript;
-(CKNavigationController *)transcriptNavigationController;
-(void)autosaveMailComposition;
-(void)cancelNewMessageComposition;
-(BOOL)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1 ;
-(BOOL)isShowingConversationListController;
-(id)alertViewHandler;
-(void)_conversationLeft:(id)arg1 ;
-(void)_chatRegistryDidLoad:(id)arg1 ;
-(void)_appStateChange:(id)arg1 ;
-(void)keyCommandCompose:(id)arg1 ;
-(void)_setIsShowingNoSelectionUI:(BOOL)arg1 ;
-(void)_updateAlertSuppressionContext;
-(void)_pruneConversationCache;
-(void)setComposeTranscriptController:(CKTranscriptController *)arg1 ;
-(void)setComposeTranscriptNavigationController:(CKNavigationController *)arg1 ;
-(void)setCurrentConversation:(CKConversation *)arg1 ;
-(CKNavigationController *)composeTranscriptNavigationController;
-(void)_addConversationToCache:(id)arg1 ;
-(BOOL)_canDumpConversationFromCache:(id)arg1 ;
-(void)_prepareToDumpCachedConversation:(id)arg1 ;
-(BOOL)_isShowingFullscreenController;
-(BOOL)_isShowingModalTranscript;
-(void)__updateAlertSuppressionContext;
-(CKViewController *)blankViewController;
-(void)showNanoComposeWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3 ;
-(void)_showMailComposeSheet;
-(void)_popToConversationListAndPerformBlockAnimated:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)setConversationListController:(CKConversationListController *)arg1 ;
-(void)setTranscriptController:(CKTranscriptController *)arg1 ;
-(void)setConversationListNavigationController:(CKNavigationController *)arg1 ;
-(void)setTranscriptNavigationController:(CKNavigationController *)arg1 ;
-(void)setBlankViewController:(CKViewController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(BOOL)becomeFirstResponder;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(BOOL)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1 ;
-(void)setAutosaveIdentifier:(id<NSCoding>)arg1 ;
-(id<NSCoding>)autosaveIdentifier;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(NSSet *)alertSuppressionContexts;
-(void)viewDidAppearDeferredSetup;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)performResumeDeferredSetup;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)didCancelComposition:(id)arg1 ;
-(void)showNewMessageCompositionForComposition:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2 ;
-(void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)transcriptControllerDidReportSpam:(id)arg1 ;
-(BOOL)supportsAttachments;
-(void)parentControllerDidBecomeActive;
-(BOOL)isAnimatingMessageSend;
-(void)_chatItemsDidChange:(id)arg1 ;
-(CKConversation *)currentConversation;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 ;
-(CKTranscriptController *)transcriptController;
-(BOOL)isShowingTranscriptController;
-(BOOL)isComposingMessage;
-(void)resetNewMessageCompositionRecipients;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 ;
-(void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(BOOL)arg3 ;
@end

