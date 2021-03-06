/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AXElementGroup;


@protocol AXGroupable <NSObject>
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup; 
@required
-(CGRect)frame;
-(BOOL)isGroup;
-(void)setParentGroup:(id)arg1;
-(AXElementGroup *)parentGroup;
-(id)highestAncestorGroup;
-(id)keyboardContainer;

@end

