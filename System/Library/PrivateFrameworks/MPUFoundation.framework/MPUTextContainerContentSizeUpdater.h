/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUTextContainer;
@class NSString;

@interface MPUTextContainerContentSizeUpdater : NSObject {

	id<MPUTextContainer> _textContainer;
	NSString* _lastSeenPreferredContentSizeCategory;

}

@property (assign,nonatomic,__weak) id<MPUTextContainer> textContainer;                    //@synthesize textContainer=_textContainer - In the implementation block
@property (nonatomic,retain) NSString * lastSeenPreferredContentSizeCategory;              //@synthesize lastSeenPreferredContentSizeCategory=_lastSeenPreferredContentSizeCategory - In the implementation block
-(void)dealloc;
-(id)init;
-(id<MPUTextContainer>)textContainer;
-(void)setTextContainer:(id<MPUTextContainer>)arg1 ;
-(void)_preferredContentSizeCategoryDidChange:(id)arg1 ;
-(void)setLastSeenPreferredContentSizeCategory:(NSString *)arg1 ;
-(NSString *)lastSeenPreferredContentSizeCategory;
-(void)_updateTextStyleFonts;
-(void)ensureTextStyleFontsMatchPreferredTextStyleFonts;
@end

