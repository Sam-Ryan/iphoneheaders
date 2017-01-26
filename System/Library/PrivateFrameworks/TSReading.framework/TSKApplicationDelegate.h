/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKApplicationDelegate.h>

@protocol TSKApplicationDelegate
@optional
-(long long)maximumFontSize;

@end


@protocol TSKCompatibilityDelegate;
@class NSString;

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate> {

	id<TSKCompatibilityDelegate> _compatibilityDelegate;

}

@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch; 
@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch; 
@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch; 
@property (nonatomic,readonly) BOOL tableCellInspectorShowsNaturalAlignment; 
@property (nonatomic,readonly) BOOL textInspectorShowsMoreSubpane; 
@property (nonatomic,readonly) NSString * applicationName; 
@property (nonatomic,readonly) NSString * documentTypeDisplayName; 
@property (nonatomic,readonly) NSString * templateTypeDisplayName; 
@property (nonatomic,retain) id<TSKCompatibilityDelegate> compatibilityDelegate;                     //@synthesize compatibilityDelegate=_compatibilityDelegate - In the implementation block
@property (getter=isActivating,readonly) BOOL activating; 
@property (getter=isInBackground,readonly) BOOL inBackground; 
@property (nonatomic,readonly) BOOL designModeEnabled; 
@property (nonatomic,readonly) BOOL performanceModeEnabled; 
@property (nonatomic,readonly) BOOL centerOnInitialSelection; 
@property (nonatomic,readonly) BOOL isCanvasFullScreen; 
+(void)setSurrogateDelegate:(id)arg1 ;
+(BOOL)isUnitTesting;
+(id)documentDirectoryPath;
+(id)sharedDelegate;
-(BOOL)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
-(BOOL)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
-(BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
-(BOOL)tableCellInspectorShowsNaturalAlignment;
-(BOOL)textInspectorShowsMoreSubpane;
-(id)createCompatibilityDelegate;
-(void)setCompatibilityDelegate:(id<TSKCompatibilityDelegate>)arg1 ;
-(NSString *)documentTypeDisplayName;
-(NSString *)templateTypeDisplayName;
-(BOOL)centerOnInitialSelection;
-(BOOL)isCanvasFullScreen;
-(CGRect)applicationToolbarFrame;
-(BOOL)shouldRenderContactShadow;
-(BOOL)shouldRenderCurvedShadow;
-(BOOL)supportsRTL;
-(BOOL)supportsScrollingInPhoneCommentUI;
-(BOOL)shouldValidateMasterLayoutWhileInsertingRows;
-(id)previewImageForType:(id)arg1 ;
-(id)appChartPropertyOverrides;
-(id)invalidURLSchemes;
-(id)validURLSchemes;
-(id)defaultHyperlinkURL;
-(BOOL)designModeEnabled;
-(BOOL)performanceModeEnabled;
-(BOOL)shouldGenerateGuidesForOffscreenLayouts;
-(BOOL)isActivating;
-(id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id<TSKCompatibilityDelegate>)compatibilityDelegate;
-(id)init;
-(BOOL)openURL:(id)arg1 ;
-(BOOL)isInBackground;
-(NSString *)applicationName;
@end

