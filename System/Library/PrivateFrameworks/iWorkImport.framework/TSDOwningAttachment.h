/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDOwningAttachment <NSObject>
@property (nonatomic,readonly) BOOL isDrawable; 
@property (nonatomic,readonly) BOOL isAnchored; 
@property (nonatomic,readonly) BOOL isPartitioned; 
@property (nonatomic,readonly) BOOL isAttachedToBodyText; 
@property (nonatomic,readonly) Class positionerClass; 
@property (nonatomic,readonly) BOOL isSearchable; 
@property (nonatomic,readonly) BOOL specifiesEnabledKnobMask; 
@required
-(BOOL)isAttachedToBodyText;
-(BOOL)isPartitioned;
-(void)infoChanged;
-(Class)positionerClass;
-(BOOL)specifiesEnabledKnobMask;
-(BOOL)isAnchored;
-(BOOL)isDrawable;
-(BOOL)isSearchable;

@end

