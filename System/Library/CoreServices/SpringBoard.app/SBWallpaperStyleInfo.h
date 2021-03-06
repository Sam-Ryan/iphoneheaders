/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperEffectView, NSString;

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding> {

	SCD_Struct_SB33 _priorityInfo[14];
	SBWallpaperEffectView* _wallpaperEffectView;
	SCD_Struct_SB20 _styleTransitionState;

}

@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) SCD_Struct_SB20 styleTransitionState;                     //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) long long highestValidPriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)setPriorityInfo:(SCD_Struct_SB34)arg1 forPriority:(long long)arg2 ;
-(void)removePriorityInfoForPriority:(long long)arg1 ;
-(long long)highestValidPriority;
-(SCD_Struct_SB34)priorityInfoForPriority:(long long)arg1 ;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)enumerateValidPrioritiesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)description;
-(SCD_Struct_SB20)styleTransitionState;
-(void)setStyleTransitionState:(SCD_Struct_SB20)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

