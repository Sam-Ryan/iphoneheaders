/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentItem.h>

@interface CKLocationAttachmentItem : CKAttachmentItem {

	CGSize _coordinate;

}

@property (assign,nonatomic) CGSize coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
+(id)UTITypes;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 guid:(id)arg3 ;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 ;
-(id)pin;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
@end

