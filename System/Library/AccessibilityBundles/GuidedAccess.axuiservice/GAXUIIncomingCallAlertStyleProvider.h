/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <AccessibilityUIService/AXUIAlertStyleProvider.h>

@interface GAXUIIncomingCallAlertStyleProvider : AXUIAlertStyleProvider {

	int _incomingCallType;

}

@property (assign,nonatomic) int incomingCallType;              //@synthesize incomingCallType=_incomingCallType - In the implementation block
+(id)styleProviderWithIncomingCallType:(int)arg1 ;
-(void)setIncomingCallType:(int)arg1 ;
-(int)incomingCallType;
-(id)alertTextFontForType:(unsigned long long)arg1 ;
-(id)alertSubtitleTextFontForType:(unsigned long long)arg1 ;
-(double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1 ;
-(UIEdgeInsets)alertIconImageEdgeInsetsForType:(unsigned long long)arg1 ;
-(CGSize)alertBackgroundSizeForType:(unsigned long long)arg1 ;
-(UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned long long)arg1 ;
@end

