/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OADCachedDrawableStyle : NSObject {

	int mFillCategory;
	unsigned long long mFillIndex;
	unsigned long long mStrokeIndex;
	unsigned long long mShadowIndex;
	unsigned char mReflectionOpacity;
	unsigned long long mTextStyleIndex;

}

@property (nonatomic,readonly) int fillCategory; 
@property (nonatomic,readonly) unsigned long long fillIndex; 
@property (nonatomic,readonly) unsigned long long strokeIndex; 
@property (nonatomic,readonly) unsigned long long shadowIndex; 
@property (nonatomic,readonly) unsigned char reflectionOpacity; 
@property (nonatomic,readonly) unsigned long long textStyleIndex; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned long long)arg2 strokeIndex:(unsigned long long)arg3 shadowIndex:(unsigned long long)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned long long)arg6 ;
-(int)fillCategory;
-(unsigned long long)fillIndex;
-(unsigned long long)strokeIndex;
-(unsigned long long)shadowIndex;
-(unsigned char)reflectionOpacity;
-(unsigned long long)textStyleIndex;
@end
