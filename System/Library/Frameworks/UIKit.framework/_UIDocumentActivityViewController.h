/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class UIDocumentInteractionController;

@interface _UIDocumentActivityViewController : UIActivityViewController {

	BOOL _hideSystemActivities;
	UIDocumentInteractionController* _documentInteractionController;
	UIDocumentInteractionController* _documentInteractionControllerRetained;

}

@property (assign,nonatomic,__weak) UIDocumentInteractionController * documentInteractionController;               //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionControllerRetained;              //@synthesize documentInteractionControllerRetained=_documentInteractionControllerRetained - In the implementation block
@property (assign,nonatomic) BOOL hideSystemActivities;                                                            //@synthesize hideSystemActivities=_hideSystemActivities - In the implementation block
-(BOOL)sourceIsManaged;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(void)setDocumentInteractionControllerRetained:(UIDocumentInteractionController *)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(BOOL)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(UIDocumentInteractionController *)documentInteractionControllerRetained;
-(BOOL)hideSystemActivities;
-(void)setHideSystemActivities:(BOOL)arg1 ;
@end

