/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageAsset.h>

@class CUICatalog, NSData;

@interface _UIImageStackImageAsset : UIImageAsset {

	CUICatalog* _catalog;
	NSData* _stackData;

}

@property (nonatomic,retain) CUICatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,copy) NSData * stackData;                  //@synthesize stackData=_stackData - In the implementation block
-(id)imageWithTraitCollection:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setStackData:(NSData *)arg1 ;
-(NSData *)stackData;
-(CUICatalog *)catalog;
-(void)setCatalog:(CUICatalog *)arg1 ;
@end

