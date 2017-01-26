/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@interface SXAdRequest : NSObject {

	unsigned long long _adType;
	CGPoint _positionInArticle;
	CGSize _contentSize;

}

@property (assign,nonatomic) CGPoint positionInArticle;              //@synthesize positionInArticle=_positionInArticle - In the implementation block
@property (assign,nonatomic) unsigned long long adType;              //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                     //@synthesize contentSize=_contentSize - In the implementation block
-(void)setPositionInArticle:(CGPoint)arg1 ;
-(void)setAdType:(unsigned long long)arg1 ;
-(CGPoint)positionInArticle;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(unsigned long long)adType;
@end

