/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextRange, NSString;

@interface UITextReplacement : NSObject {

	UITextRange* _range;
	NSString* _originalText;
	NSString* _replacementText;
	NSString* _menuTitle;
	unsigned _usageTrackingMask;

}

@property (nonatomic,readonly) UITextRange * range;                     //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * originalText;                 //@synthesize originalText=_originalText - In the implementation block
@property (nonatomic,readonly) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
@property (nonatomic,readonly) NSString * menuTitle;                    //@synthesize menuTitle=_menuTitle - In the implementation block
@property (assign,nonatomic) unsigned usageTrackingMask;                //@synthesize usageTrackingMask=_usageTrackingMask - In the implementation block
+(id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4 ;
-(NSString *)replacementText;
-(NSString *)originalText;
-(UITextRange *)range;
-(unsigned)usageTrackingMask;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(NSString *)menuTitle;
@end

