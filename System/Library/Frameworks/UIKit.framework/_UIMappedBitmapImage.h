/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImage.h>

@class NSData;

@interface _UIMappedBitmapImage : UIImage {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)_configureImage:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)_preheatBitmapData;
@end
