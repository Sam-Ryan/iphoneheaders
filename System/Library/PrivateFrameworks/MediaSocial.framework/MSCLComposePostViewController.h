/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/MSCLAttachmentAlertDelegate.h>
#import <libobjc.A.dylib/MSCLAttachmentPropertiesDelegate.h>
#import <libobjc.A.dylib/MSCLAudioPickerDelegate.h>
#import <libobjc.A.dylib/MSCLComposeImagePickerDelegate.h>
#import <libobjc.A.dylib/MSCLComposePostViewDelegate.h>
#import <libobjc.A.dylib/MSCLTagListDelegate.h>
#import <libobjc.A.dylib/MSCLSoundBiteViewControllerDelegate.h>

@protocol MSCLComposePostViewControllerDelegate;
@class MSCLAccountStore, NSMutableArray, SKUIMediaSocialAuthor, MSCLComposeLabelValueButton, MSCLAudioPickerViewController, MSCLAuthorView, MSCLComposePostView, MSCLConfiguration, MSCLAttachment, MSCLComposeImagePickerController, SKUIResourceLoader, MSCLTagListViewController, MSCLAttachmentDownloadOperation, NSString;

@interface MSCLComposePostViewController : SKUIViewController <MSCLAttachmentAlertDelegate, MSCLAttachmentPropertiesDelegate, MSCLAudioPickerDelegate, MSCLComposeImagePickerDelegate, MSCLComposePostViewDelegate, MSCLTagListDelegate, MSCLSoundBiteViewControllerDelegate> {

	MSCLAccountStore* _accountStore;
	NSMutableArray* _attachments;
	SKUIMediaSocialAuthor* _attributionAuthor;
	MSCLComposeLabelValueButton* _attributionButton;
	MSCLAudioPickerViewController* _audioPickerController;
	MSCLAuthorView* _authorSelectionView;
	MSCLComposePostView* _composeView;
	MSCLConfiguration* _configuration;
	BOOL _didAppear;
	MSCLAttachment* _editingAttachment;
	MSCLComposeLabelValueButton* _externalServicesButton;
	MSCLComposeImagePickerController* _imagePickerController;
	SKUIResourceLoader* _resourceLoader;
	SKUIMediaSocialAuthor* _selectedAuthor;
	NSMutableArray* _soundBiteViewControllers;
	MSCLTagListViewController* _tagCompletionViewController;
	BOOL _attachmentWasDownloadedAndNeedsRemoval;
	id<MSCLComposePostViewControllerDelegate> _delegate;
	MSCLAttachmentDownloadOperation* _attachmentDownloadOperation;

}

@property (nonatomic,readonly) MSCLConfiguration * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLComposePostViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) MSCLAttachmentDownloadOperation * attachmentDownloadOperation;              //@synthesize attachmentDownloadOperation=_attachmentDownloadOperation - In the implementation block
@property (assign,nonatomic) BOOL attachmentWasDownloadedAndNeedsRemoval;                                       //@synthesize attachmentWasDownloadedAndNeedsRemoval=_attachmentWasDownloadedAndNeedsRemoval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MSCLComposePostViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MSCLComposePostViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(MSCLConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(id)_resourceLoader;
-(void)addAttachments:(id)arg1 animated:(BOOL)arg2 ;
-(void)getPostDescriptionUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)attachmentWasDownloadedAndNeedsRemoval;
-(void)setAttachmentWasDownloadedAndNeedsRemoval:(BOOL)arg1 ;
-(id)_enabledExternalServices;
-(void)attachmentPropertiesController:(id)arg1 didEditAttachment:(id)arg2 ;
-(id)_defaultAttributionAuthorForDestinationAuthor:(id)arg1 ;
-(void)_socialAccountStoreDidChangeNotification:(id)arg1 ;
-(BOOL)_canShowEditorForAttachment:(id)arg1 ;
-(void)_editPropertiesForAttachment:(id)arg1 animated:(BOOL)arg2 ;
-(void)_reloadAttachmentUI;
-(BOOL)_hasSoundBite;
-(id)_getSoundBite;
-(MSCLAttachmentDownloadOperation *)attachmentDownloadOperation;
-(void)_attachmentButtonAction:(id)arg1 ;
-(long long)_allowedCharacterCount;
-(id)_footerViews;
-(id)_headerViews;
-(id)_scrollableHeaderViews;
-(void)_ingestAttachment:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updatePostButton;
-(void)_reloadTagCompletionViewController;
-(void)setAttachmentDownloadOperation:(MSCLAttachmentDownloadOperation *)arg1 ;
-(void)_addAttachments:(id)arg1 ;
-(void)_dismissTagCompletionViewController;
-(void)_setAttributionAuthor:(id)arg1 ;
-(void)_setSelectedAuthor:(id)arg1 ;
-(void)_reloadExternalServicesButton;
-(void)_attributionButtonAction:(id)arg1 ;
-(void)_externalServicesButtonAction:(id)arg1 ;
-(void)_pickAuthorAction:(id)arg1 ;
-(id)_attachmentViews;
-(void)attachmentAlertController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)audioPickerDidCancel:(id)arg1 ;
-(void)audioPicker:(id)arg1 didFinishWithAttachment:(id)arg2 ;
-(id)parentViewControllerForMSCLComposeImagePicker:(id)arg1 ;
-(void)MSCLComposeImagePicker:(id)arg1 didFinishWithAttachments:(id)arg2 ;
-(void)MSCLComposeImagePickerDidCancel:(id)arg1 ;
-(void)composePostViewTextDidChange:(id)arg1 ;
-(void)composePostViewTextSelectionDidChange:(id)arg1 ;
-(void)composePostView:(id)arg1 didRemoveAttachmentView:(id)arg2 atIndex:(long long)arg3 ;
-(void)composePostView:(id)arg1 didSelectAttachment:(id)arg2 atIndex:(long long)arg3 ;
-(id)composePostView:(id)arg1 tagForString:(id)arg2 ;
-(void)tagList:(id)arg1 didSelectTag:(id)arg2 ;
-(void)viewControllerDidCompleteRecording:(id)arg1 ;
@end

