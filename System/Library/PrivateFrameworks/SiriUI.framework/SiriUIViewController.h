/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AceObject;


@protocol SiriUIViewController <NSObject>
@property (nonatomic,retain) AceObject * aceObject; 
@optional
-(id)navigationTitle;
-(double)desiredHeightForWidth:(double)arg1;
-(void)endEditingAndCorrect:(BOOL)arg1;
-(double)desiredHeight;

@required
-(void)wasAddedToTranscript;
-(AceObject *)aceObject;
-(void)setAceObject:(id)arg1;
-(void)siriWillActivateFromSource:(long long)arg1;
-(void)siriDidDeactivate;

@end
