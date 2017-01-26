/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImage.h>

@class NSDictionary, PLLoadRequestKey;

@interface PLCachedImage : UIImage {

	NSDictionary* _metadata;
	int _format;
	PLLoadRequestKey* _cacheKey;

}

@property (assign,nonatomic) int format;                             //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) PLLoadRequestKey * cacheKey;              //@synthesize cacheKey=_cacheKey - In the implementation block
-(void)dealloc;
-(id)description;
-(PLLoadRequestKey *)cacheKey;
-(void)setCacheKey:(PLLoadRequestKey *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(int)format;
-(void)setFormat:(int)arg1 ;
@end

