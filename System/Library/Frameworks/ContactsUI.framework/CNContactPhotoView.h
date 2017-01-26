/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CNPresenterDelegate, CNContactPhotoViewDelegate;
@class NSArray, CNAvatarView, NSDictionary, UIImage, UIButton, UIImageView, UILongPressGestureRecognizer, CNMutableContact, NSString;

@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNAvatarViewDelegate> {

	BOOL _editing;
	BOOL _modified;
	BOOL _isAnimatingBounce;
	NSArray* _contacts;
	CNAvatarView* _avatarView;
	id<CNPresenterDelegate> _delegate;
	id<CNContactPhotoViewDelegate> _photoViewDelegate;
	NSDictionary* _photoPickerInfo;
	UIImage* _currentThumbnailImage;
	UIImage* _currentImage;
	UIButton* _addPhotoButton;
	UIButton* _editPhotoButton;
	UIImageView* _attributionImageView;
	NSArray* _variableConstraints;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,retain) NSArray * contacts;                                                     //@synthesize contacts=_contacts - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL modified;                                                          //@synthesize modified=_modified - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                              //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPhotoViewDelegate> photoViewDelegate;                //@synthesize photoViewDelegate=_photoViewDelegate - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,retain) NSDictionary * photoPickerInfo;                                         //@synthesize photoPickerInfo=_photoPickerInfo - In the implementation block
@property (nonatomic,retain) UIImage * currentThumbnailImage;                                        //@synthesize currentThumbnailImage=_currentThumbnailImage - In the implementation block
@property (nonatomic,retain) UIImage * currentImage;                                                 //@synthesize currentImage=_currentImage - In the implementation block
@property (nonatomic,retain) UIButton * addPhotoButton;                                              //@synthesize addPhotoButton=_addPhotoButton - In the implementation block
@property (nonatomic,retain) UIButton * editPhotoButton;                                             //@synthesize editPhotoButton=_editPhotoButton - In the implementation block
@property (nonatomic,retain) UIImageView * attributionImageView;                                     //@synthesize attributionImageView=_attributionImageView - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingBounce;                                                 //@synthesize isAnimatingBounce=_isAnimatingBounce - In the implementation block
@property (nonatomic,retain) NSArray * variableConstraints;                                          //@synthesize variableConstraints=_variableConstraints - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedPasteboardTypes;
-(void)setDelegate:(id<CNPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<CNPresenterDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(UIImage *)currentImage;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(BOOL)hasPhoto;
-(NSArray *)contacts;
-(BOOL)modified;
-(CNMutableContact *)mutableContact;
-(NSArray *)variableConstraints;
-(id)initWithFrame:(CGRect)arg1 monogrammerStyle:(long long)arg2 ;
-(void)setPhotoViewDelegate:(id<CNContactPhotoViewDelegate>)arg1 ;
-(void)updatePhoto;
-(void)resetPhoto;
-(void)saveEdits;
-(void)updateFontSizes;
-(void)menuWillHide:(id)arg1 ;
-(void)disablePhotoTapGesture;
-(void)_presentPhotoEditingSheet;
-(void)avatarTapped:(id)arg1 ;
-(void)longPressGesture:(id)arg1 ;
-(void)setVariableConstraints:(NSArray *)arg1 ;
-(id)currentImageDataAndCropRect:(CGRect*)arg1 ;
-(UIImage *)currentThumbnailImage;
-(NSDictionary *)photoPickerInfo;
-(void)setCurrentThumbnailImage:(UIImage *)arg1 ;
-(void)_zoomContactPhoto;
-(void)setHighlightedFrame:(BOOL)arg1 ;
-(void)setCurrentImage:(UIImage *)arg1 ;
-(void)setPhotoPickerInfo:(NSDictionary *)arg1 ;
-(void)setModified:(BOOL)arg1 ;
-(void)updatePhotoWithImage:(id)arg1 ;
-(void)updateAttributionBadge;
-(id<CNContactPhotoViewDelegate>)photoViewDelegate;
-(UIButton *)addPhotoButton;
-(UIButton *)editPhotoButton;
-(UIImageView *)attributionImageView;
-(void)setAttributionImageView:(UIImageView *)arg1 ;
-(id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)_presentFullScreenPhoto:(id)arg1 ;
-(void)_bounceSmallPhoto;
-(id)previewPath;
-(BOOL)isAnimatingBounce;
-(void)setIsAnimatingBounce:(BOOL)arg1 ;
-(void)setAddPhotoButton:(UIButton *)arg1 ;
-(void)setEditPhotoButton:(UIButton *)arg1 ;
-(id)_createImagePicker;
-(id)currentImageData;
-(id)contact;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)avatarView:(id)arg1 willShowActions:(id)arg2 ;
-(void)setContacts:(NSArray *)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

