/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber;

@interface PLSImageAdjustment : NSObject <NSCoding> {

	NSNumber* _rotation;

}

@property (nonatomic,retain) NSNumber * rotation;              //@synthesize rotation=_rotation - In the implementation block
+(id)imageAdjustment;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setRotation:(NSNumber *)arg1 ;
-(NSNumber *)rotation;
@end

