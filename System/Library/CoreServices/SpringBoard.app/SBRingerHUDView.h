/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHUDView.h>

@interface SBRingerHUDView : SBHUDView {

	BOOL _silent;

}

@property (assign,getter=isSilent,nonatomic) BOOL silent;              //@synthesize silent=_silent - In the implementation block
-(void)_updateSilentImage;
-(void)setSilent:(BOOL)arg1 ;
-(BOOL)isSilent;
-(id)init;
@end

