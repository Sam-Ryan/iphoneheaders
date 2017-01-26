/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFDragDestination <NSObject>
@required
-(id)supportedDropTypes:(id)arg1;
-(void)dropItem:(id)arg1;
-(id)viewForDrop;
-(void)dragUpdated:(id)arg1 atPoint:(CGPoint)arg2;
-(void)dragExited:(id)arg1;
-(void)dragEntered:(id)arg1 atPoint:(CGPoint)arg2;
-(CGRect*)dropRect;

@end

